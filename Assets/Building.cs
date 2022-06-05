using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Building : MonoBehaviour
{
    private float dist;
    private bool dragging = false;
    private Vector3 offset;
    private Transform toDrag;
    public GameObject arrows;
 
    // Update is called once per frame
    private Vector3 mpos = Vector3.zero;
    private void OnDrawGizmos()
    {
        Gizmos.DrawSphere(mpos, 1);
    }

    void Update()
    {
        
        Vector3 v3;
 
        if (Input.touchCount != 1)
        {
            dragging = false;
            return;
        }
 
        Touch touch = Input.touches[0];
        Vector3 pos = touch.position;
 
        if (touch.phase == TouchPhase.Began)
        {
            Ray raycast = Camera.main.ScreenPointToRay(pos);
            if (Physics.Raycast(raycast, out var hit))
            {
                
                if (hit.collider.tag == "Building")
                {
                    toDrag = hit.transform;
                    dist = hit.transform.position.z - Camera.main.transform.position.z;
                    v3 = new Vector3(pos.x, pos.y, dist);
                    v3 = Camera.main.ScreenToWorldPoint(v3);
                    offset = toDrag.position - v3;
                    dragging = true;
                }
            }
        }
 
        if (dragging && touch.phase == TouchPhase.Moved)
        {
            v3 = new Vector3(Input.mousePosition.x, Input.mousePosition.y, dist);
            v3 = Camera.main.ScreenToWorldPoint(v3);
            Vector3 posd = v3 + offset;
            posd.x = Mathf.Clamp(Round(posd.x, 2.5f), -60, 60);
            posd.y = 0;
            posd.z = Mathf.Clamp(Round(posd.z, 2.5f), -60, 60);
            Debug.Log(posd);
            toDrag.position = posd;
        }
 
        if (dragging && (touch.phase == TouchPhase.Ended || touch.phase == TouchPhase.Canceled))
        {
            dragging = false;
        }
    }
    float Round(float i, float v){
        return Mathf.Round(i/v) * v;
    }
}