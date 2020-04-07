using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TextInsert : MonoBehaviour
{
    //Read the data from the display  
    private void UpdateTextComponent()
    {
        this.gameObject.GetComponent<TextMeshPro>().text = GameObject.Find("Display").GetComponent<PullData>().name;
    }

    public void UpdateAllText()
    {
        GameObject.Find("NamedComponent").GetComponent<TextMeshPro>().text = GameObject.Find("Display").GetComponent<PullData>().name;
        GameObject.Find("StatusComponent").GetComponent<TextMeshPro>().text = GameObject.Find("Display").GetComponent<PullData>().status;
        GameObject.Find("LiveDataComponent").GetComponent<TextMeshPro>().text = GameObject.Find("Display").GetComponent<PullData>().liveData;
    }

    private void Update()
    {
        UpdateAllText();
    }
}
