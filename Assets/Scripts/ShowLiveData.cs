using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ShowLiveData : MonoBehaviour
{
    public TextMeshPro Name;
    public TextMeshPro Status;
    public TextMeshPro liveValue;

    // Start is called before the first frame update
    void Start()
    {
        var value = 15;
        Name.text = $"Live Data: {value.ToString()}";
        Status.text = $"Live Data: {value.ToString()}";
        liveValue.text = $"Live Data: {value.ToString()}";


        InvokeRepeating("GetLiveValue", 1f, 1f);
    }


    private void GetLiveValue()
    {
        Debug.Log("Getting live value");
    }


    // Update is called once per frame
    void Update()
    {
        
    }
}
