const AWS = require('aws-sdk');
const ddb = new AWS.DynamoDB.DocumentClient();
require('./messaging-patch.js');
let send = undefined;
const TABLE_NAME = "game-session-1"; // your dynamodb table name
const FIRST_TO_JOIN_OP = "0";
const REQUEST_START_OP = "1";
const YOU_WON = "91";
const YOU_LOST = "92";
const PLAYING_OP = "11";
const OPPONENT_VELOCITY = "21";

function init(event) {
   const apigwManagementApi = new AWS.ApiGatewayManagementApi({
      apiVersion: '2018-11-29',
      endpoint: event.requestContext.domainName + '/' + event.requestContext.stage
   });
   send = async (connectionId, data) => {
      await apigwManagementApi.postToConnection({
         ConnectionId: connectionId,
         Data: `${data}`
      }).promise();
   }
}

function getGameSession(playerId) {
   return ddb.scan({
      TableName: TABLE_NAME,
      FilterExpression: "#p1 = :playerId or #p2 = :playerId",
      ExpressionAttributeNames: {
         "#p1": "player1",
         "#p2": "player2"
      },
      ExpressionAttributeValues: {
         ":playerId": playerId
      }
   }).promise();
}

function getGameSessionByMatchUuid(uuid) {
   return ddb.query({
      TableName: TABLE_NAME,
      KeyConditionExpression: "#uuid = :uuid",
      ExpressionAttributeNames: {
         "#uuid": "uuid"
      },
      ExpressionAttributeValues: {
         ":uuid": uuid
      }
   }).promise();
}

function opposite(number) {
   return (-number);
}

function getRandomInt(min, max) {
   min = Math.ceil(min);
   max = Math.floor(max);
   return Math.floor(Math.random() * (max - min + 1)) + min;
}

function buildVelocityObject(velocity) {
   return '{ "x": ' + velocity.x + ', "y": ' + velocity.y + ', "z": ' + velocity.z + '}';
}

exports.handler = (event, context, callback) => {
   console.log("Event received: %j", event);
   init(event);

   let message = JSON.parse(event.body);
   console.log("message: %j", message);

   let connectionIdForCurrentRequest = event.requestContext.connectionId;
   console.log("Current connection id: " + connectionIdForCurrentRequest);

   if (message && message.opcode) {

      switch (message.opcode) {
         case REQUEST_START_OP:
            console.log("opcode 1 hit");

            getGameSession(connectionIdForCurrentRequest).then((data) => {
               console.log("getGameSession: " + data.Items[0].uuid);

               // we check for closed to handle an edge case where if player1 joins and immediately quits,
               // we mark closed to make sure a player2 can't join an abandoned game session
               var opcodeStart = FIRST_TO_JOIN_OP;
               if (data.Items[0].gameStatus != "closed" && data.Items[0].player2 != "empty") {
                  opcodeStart = PLAYING_OP;

                  var p1RandX = getRandomInt(-25, -15);
                  var p1RandZ = getRandomInt(-25, -15);

                  let p1StartPos = {
                     x: -1,
                     z: 0
                  };
                  let p2StartPos = {
                     x: 2,
                     z: 0
                  };

                  p1StartPos.y = 2;
                  p2StartPos.y = 2;

                  //now that we have a 2nd player, also send PlayingOp status to kick off player 1
                  send(data.Items[0].player1, '{ "uuid": ' + data.Items[0].uuid + ', "opcode": ' +
                     opcodeStart + ', "velocity": ' + buildVelocityObject(p1StartPos) +
                     ', "enemyVelocity": ' + buildVelocityObject(p2StartPos) + ', "player": "1" }');

                  send(data.Items[0].player2, '{ "uuid": ' + data.Items[0].uuid + ', "opcode": ' +
                     opcodeStart + ', "velocity": ' + buildVelocityObject(p2StartPos) +
                     ', "enemyVelocity": ' + buildVelocityObject(p1StartPos) + ', "player": "2" }');
               }
            });

            break;

         case OPPONENT_VELOCITY:
            console.log("opcode " + OPPONENT_VELOCITY + " opponent velocity");
            console.log(message.velocity);
            console.log(message.uuid);

            getGameSessionByMatchUuid(message.uuid).then((data) => {
               console.log("getGameSession: %j", data.Items[0]);

               console.log("current connection: %j", connectionIdForCurrentRequest);
               console.log("Player1: %j", data.Items[0].player1);
               console.log("Player2: %j", data.Items[0].player2);

               if (data.Items[0].player1 == connectionIdForCurrentRequest) {

                  console.log("current connection: %j", connectionIdForCurrentRequest);

                  if (data.Items[0].player2 != "empty") {
                     console.log("Sending velocity to player 2: ");
                     console.log(message.velocity);

                     let posMsg = '{ "opcode": ' + OPPONENT_VELOCITY + ', "timestamp": ' + Date.now() +
                        ', "velocity": ' + buildVelocityObject(message.velocity) + ', "seq": ' + message.seq +
                        ', "currentPos": ' + buildVelocityObject(message.currentPos) + ' }';
                     console.log(posMsg);

                     // player1 sent location, send loc to player2
                     send(data.Items[0].player2, posMsg);
                  }

               } else {
                  console.log("Sending velocity to player 1: ");
                  console.log(message.velocity);
                  let posMsg = '{ "opcode": ' + OPPONENT_VELOCITY + ', "timestamp": ' + Date.now() +
                     ', "velocity": ' + buildVelocityObject(message.velocity) + ', "seq": ' + message.seq +
                     ', "currentPos": ' + buildVelocityObject(message.currentPos) + ' }';
                  console.log(posMsg);

                  // player2 sent location, send loc to player 1
                  send(data.Items[0].player1, posMsg);
               }
            });

            break;
            
         default:
            // no default case
      }
   }

   return callback(null, {
      statusCode: 200,
   });
};