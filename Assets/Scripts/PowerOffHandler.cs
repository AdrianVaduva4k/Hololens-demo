using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PowerOffHandler : MonoBehaviour
{
    public Material material;
    public Renderer Object;

    public void setMaterial(Material newMaterial)
    {
        Object.material = newMaterial;
    }
}
