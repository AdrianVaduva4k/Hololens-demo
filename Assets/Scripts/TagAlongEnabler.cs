using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Utilities.Solvers;

public class TagAlongEnabler : MonoBehaviour
{
    public GameObject gameObject;
    private Vector3 position;
    private Quaternion rotation;

    public void EnableOrDisable()
    {
        //Tag Along initial disabled
        if (!gameObject.GetComponent<RadialView>().enabled)
        {
            //Get initial position and rotation
            position = gameObject.transform.position;
            rotation = gameObject.transform.rotation;
        }
        else
        {
            //Reset position
            gameObject.transform.position = position;
            gameObject.transform.rotation = rotation;
        }
        gameObject.GetComponent<RadialView>().enabled = !gameObject.GetComponent<RadialView>().enabled;
    }
}
