using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class PinchAndZoom : MonoBehaviour
{
    float MouseZoomSpeed = 25.0f;
    float TouchZoomSpeed = 0.1f;
    float ZoomMinBound = 15f;
    float ZoomMaxBound = 179.9f;
    Camera cam;
    public Vector2 startPos;
    public Vector2 direction;
    public float groundZ = 0;
    public GameObject selected = null;
    public Transform myCam;
    private Vector3 touchStart;
    // Use this for initialization
    void Start()
    {
        Application.targetFrameRate = 60;
        cam = GetComponent<Camera>();
    }

    private bool touching = false;
    void Update()
    {
        if (Input.touchSupported)
        {
            // Pinch to zoom
            
            if (Input.touchCount == 1)
            {
                if (Input.GetMouseButtonDown(0))
                {
                    selectObject();
                }
            }
            
        }
        else
        {

            float scroll = Input.GetAxis("Mouse ScrollWheel");
            Zoom(scroll, -MouseZoomSpeed);
            
            if (selected == null)
            {
                if (Input.GetMouseButtonDown(0)){
                    touchStart = GetWorldPosition(groundZ);
                }
                if (Input.GetMouseButton(0)){
                    Vector3 direction = touchStart - GetWorldPosition(groundZ);
                    Vector3 pos = cam.transform.position;
                    pos += direction;
                
                    if (pos.x > 205) pos.x = 205;
                    if (pos.x < -210) pos.x = -210;
                    if (pos.y > 220) pos.y = 220;
                    if (pos.y < -105) pos.y = -105;
                    cam.transform.position = pos;
                }
            }
            if (Input.GetMouseButtonDown(0))
            {
                selectObject();
            }
            
        }

        if(cam.fieldOfView < ZoomMinBound) 
        {
            cam.orthographicSize = 15f;
        }
        else
        if(cam.fieldOfView > ZoomMaxBound ) 
        {
            cam.orthographicSize = 179.9f;
        }


    }

    private void selectObject()
    {
        if (!Physics.Raycast(cam.ScreenPointToRay(Input.mousePosition), out var hit)) return;
        if (hit.transform.gameObject.CompareTag("World"))
            selected = null;
        else
        {
            selected = hit.transform.gameObject;
        }
    }

    private Vector3 GetWorldPosition(float z){
        Ray mousePos = cam.ScreenPointToRay(Input.mousePosition);
        Plane ground = new Plane(Vector3.forward, new Vector3(0,0,z));
        float distance;
        ground.Raycast(mousePos, out distance);
        return mousePos.GetPoint(distance);
    }
    void Zoom(float deltaMagnitudeDiff, float speed)
    {
        cam.orthographicSize += deltaMagnitudeDiff * speed;
        // set min and max value of Clamp function upon your requirement
        cam.orthographicSize = Mathf.Clamp(cam.orthographicSize, ZoomMinBound, ZoomMaxBound);
    }
}