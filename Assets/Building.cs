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
 
    // Update is called once per frame
    private Vector3 mpos = Vector3.zero;
    private void OnDrawGizmos()
    {
        Gizmos.DrawSphere(mpos, 1);
    }

    void Update()
    {
        if (Input.touchCount > 0)
        {
            Touch t = Input.touches[0];
            Ray ray2 = Camera.main.ScreenPointToRay(t.position);
            Physics.Raycast(ray2, out var hit2);
            
            var pos3 = Camera.main.ScreenToWorldPoint(t.position);
            pos3.z = transform.position.z;
            mpos = pos3;
        }

        
        
        
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
            Ray ray = Camera.main.ScreenPointToRay(pos);
            RaycastHit hit;
 
            if (Physics.Raycast(ray, out hit))
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
            posd.x = Round(posd.x, 5);

            posd.z = Round(posd.y, 5);
            toDrag.position = posd;
        }
 
        if (dragging && (touch.phase == TouchPhase.Ended || touch.phase == TouchPhase.Canceled))
        {
            dragging = false;
        }
    }
    int Round(float i, int v){
        return (int)Mathf.Round(i/v) * v;
    }
}