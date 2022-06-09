using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
 
public class FPS: MonoBehaviour
{
    [SerializeField] private Text _fpsText;

    public float timer, refresh, avgFramerate;
    string display = "FPS: {0}";

    private void Start()
    {
        Application.targetFrameRate = 60;
    }
 
 
    private void Update()
    {
        //Change smoothDeltaTime to deltaTime or fixedDeltaTime to see the difference
        float timelapse = Time.smoothDeltaTime;
        timer = timer <= 0 ? refresh : timer -= timelapse;
 
        if(timer <= 0) avgFramerate = (int) (1f / timelapse);
        _fpsText.text = string.Format(display,avgFramerate.ToString());
    }
}
    
