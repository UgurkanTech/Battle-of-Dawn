using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;


namespace CameraActions
{
    public class TapOnGameObject : MonoBehaviour
    {
        #region "Input data"
        [Header("The sensitivity for counting a touch on the screen as a 'TOUCH'")]
        [SerializeField] private float _sensitivity;
        #endregion

        #region "Private members"
        private static Collider s_firstColliderTouched;

        private static bool s_first = false;
        private static bool s_second = false;

        private static bool s_hasMoved = false;
        #endregion

        [SerializeField] private Text text;
        public Transform selectedObject;
        
        void Update()
        {
            if (Input.touchCount > 0 && !EventSystem.current.IsPointerOverGameObject(0)) // using the old input system
            {
                Ray raycast = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
                Physics.Raycast(raycast, out var hit);
                if (hit.collider != null)
                {
                    // Save the collider at the start of the touch
                    if (Input.GetTouch(0).phase == TouchPhase.Began)
                    {
                        s_firstColliderTouched = hit.collider;
                        s_first = true;
                        s_second = false;
                    }

                    // Check if the minimum touch deltaposition is more than _sensitivity to count the touch as MOVED
                    if (Input.GetTouch(0).phase == TouchPhase.Moved)
                    {
                        if (Mathf.Abs(Input.GetTouch(0).deltaPosition.x) > _sensitivity || Mathf.Abs(Input.GetTouch(0).deltaPosition.y) > _sensitivity)
                        {
                            s_hasMoved = true;
                        }
                    }

                    // Check if the end of touch is on the same collider 
                    if (Input.GetTouch(0).phase == TouchPhase.Ended)
                    {
                        if (s_firstColliderTouched == hit.collider && s_hasMoved == false)
                        {
                            s_second = true;
                        }
                        else
                        {
                            s_first = false;
                        }

                        s_hasMoved = false;
                    }


                    // if continions are true, the tap has begun on a colider, not moved withim the limits and the touch ended on the same collider
                    if (s_first && s_second)
                    {
                        //##################################################################################
                        //
                        //  if (Your stuff != null)
                        //  {
                        //      Execute what you want here. Here is the confirmation for the tap. We suggest using an interface
                        //  }
                        //
                        //##################################################################################  
                        if (selectedObject.CompareTag("Building"))
                        {
                            selectedObject.GetComponent<Building>().arrows.SetActive(false);
                        }
                        selectedObject = hit.transform;
                        if (selectedObject.CompareTag("Building"))
                        {
                            selectedObject.GetComponent<Building>().arrows.SetActive(true);
                        }
                        text.text = "Selected: " + selectedObject.name;
                        s_first = false;
                        s_second = false;
                    }
                }
            }
        }
    }
}