using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Utilities.Solvers;

public class TagAlongEnabler : MonoBehaviour
{
    public GameObject gameObject;

    public void EnableOrDisable()
    {
        gameObject.GetComponent<RadialView>().enabled = !gameObject.GetComponent<RadialView>().enabled;
    }
}
