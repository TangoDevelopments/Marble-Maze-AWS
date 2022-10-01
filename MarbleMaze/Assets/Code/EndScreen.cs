using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EndScreen : MonoBehaviour
{
    public Text winner;

    void Start() {
        if (PublicVars.isPlayer1) {
            winner.text = "Player 1!";
        }
        else {
            winner.text = "Player 2!";
        }
    }
}
