using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;
using Debug = UnityEngine.Debug;

public class Test : MonoBehaviour
{
    public bool start = false;
    public bool start2 = false;
    // Update is called once per frame

    private Vector3 a = new Vector3(1, 0, 3);
    private Vector3 b = new Vector3(4, 0, 6);
    
    
    private Vector2 a2 = new Vector2(1, 3);
    private Vector2 b2 = new Vector2(4, 6);
    
    

    
    void Update()
    {
        if (start)
        {
            start = false;

            Stopwatch sw = new Stopwatch();

            Vector2.Distance(a2, b2);
            
            sw.Start();
            float distance;
            for (int i = 0; i < 1000000; i++)
            {
                distance = Vector3.SqrMagnitude(b - a);
                
            }

            sw.Stop();

            string foo = "First Time taken: " + sw.ElapsedMilliseconds; 
            Debug.LogWarning(foo);
            
            
        }

        if (start2)
        {
            start2 = false;
            Stopwatch sw = new Stopwatch();
            Vector3.Distance(a, b);
            sw.Start();

            float distance;
            for (int i = 0; i < 1000000; i++)
            {
                distance = CodeExtensions.FlatSqrMagnitude(a, b);
            }

            sw.Stop();

            string foo = "Second Time taken: " + sw.ElapsedMilliseconds; 
            Debug.LogWarning(foo);
        }
    }
}
