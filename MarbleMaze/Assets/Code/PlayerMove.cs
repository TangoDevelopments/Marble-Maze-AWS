using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerMove : MonoBehaviour
{
    string vert;
    string horiz;
    public int speed = 12;
    Rigidbody rb;

    bool isAlive = false;
    private bool playerIdle = false;
    bool firstZeroReceivedInARow = false;
    
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        rb.isKinematic = false;
        vert = "Vertical";
        horiz = "Horizontal";


        WebSocketService.Instance.init();
        WebSocketService.Instance.SetLocalPlayerRef(rb);

        StartCoroutine(WaitToMove());
    }

//FixedUpdate updates based on time rather than frames
    void FixedUpdate() 
    {   
        if (!isAlive) {
            return;
        }

        float zSpeed = Input.GetAxis(vert) * speed;
        float xSpeed = Input.GetAxis(horiz) * speed;

        PlayerIdleCheck(zSpeed, xSpeed);

        if (!playerIdle) {
            rb.AddForce(new Vector3(xSpeed, 0, zSpeed));

            if (transform.position.y < -11) {
                isAlive = false;
                SceneManager.LoadScene(SceneManager.GetActiveScene().name);
            }
        }
    }
    
    IEnumerator WaitToMove() {
        yield return new WaitForSeconds(.2f);
        isAlive = true;
    }

    void PlayerIdleCheck(float zSpeed, float xSpeed) {
        if (zSpeed == 0 && xSpeed == 0) {
            if (firstZeroReceivedInARow) {
                playerIdle = true;
            }
            else {
                firstZeroReceivedInARow = true;
            }
        }
        else {
            firstZeroReceivedInARow = false;
            playerIdle = false;
        }
    }
}
