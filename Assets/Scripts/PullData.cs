using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PullData : MonoBehaviour
{
    public string name;
    public string status;
    public string liveData;
    // Start is called before the first frame update
    void Start()
    {
        //Invoke GEtData after 1 sec, every 5 seconds
        InvokeRepeating("GetData", 1.0f, 5.0f);        
    }



    //Used to extract data
    void GetData()
    {
        //TO DO
        //store the data in the public variables defined at the beginning as STRINGS
        //will use those to change the text 
    }
}
