using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PowerOffOrOn : MonoBehaviour
{
    public Material powerOffMaterial;
    public Material powerOnMaterial;
    public Renderer Object;
   

    public void PowerOff()
    {
        //Object.GetComponent<ConnectingVisualise>().connected = false;
        //Object.material = powerOffMaterial;
    }
}
