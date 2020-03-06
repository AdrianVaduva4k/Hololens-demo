using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnableOrDisableScript : MonoBehaviour
{
    public GameObject gameObject;
    public ConnectingVisualise script;

    public void EnableOrDisable()
    {
        gameObject.GetComponent<ConnectingVisualise>().enabled = !gameObject.GetComponent<ConnectingVisualise>().enabled;
    }
}
