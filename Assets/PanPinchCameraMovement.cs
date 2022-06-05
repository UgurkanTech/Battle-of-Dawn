using UnityEngine;
using UnityEngine.EventSystems;


namespace CameraActions
{
    public class PanPinchCameraMovement : MonoBehaviour
    {
        #region "Input data" 
        
        [Header("Camera to move")]
        [SerializeField] private Transform _cameraToMove;
        [SerializeField] private Camera _cameraObject;

        [Space(40f)]

        [Header("X Inferior limit")]
        [SerializeField] float _limitXMin;
      
        [Header("X Superior limit")]
        [SerializeField] private float _limitXMax;
       
        [Header("Y Inferior limit")]
        [SerializeField] private float _limitYMin;
      
        [Header("Y Superior limit")]
        [SerializeField] private float _limitYMax;

        [Space(40f)]

        [Header("Minimum orthographic size")]
        [SerializeField] private float _orthoMin = 2f;
       
        [Header("Maximum orthographic size")]
        [SerializeField] private float _orthoMax = 12f;


        [Space(40f)]
        [Header("Interpolation step for camera drag")]     
        [SerializeField]  private float _interpolationStep;
        #endregion

        #region "Private members"

        private Vector3 initPos;
        private Vector2 zoomTarget;

        private bool _lastFramePinch = false;

        private float initDist = 42f; // var for calculation [used in Pinching()]
        private float initOrtho = 6;  // var for calculation [used in Pinching()]

        private bool _initTouch = false; // if init touch is on UI element

        private Vector2 _panVelocity;  //delta position of the touch [camera position derivative]
        #endregion


        /// <summary> 
        /// Draw camera boundaries on editor
        /// </summary>
#if UNITY_EDITOR
        private void OnDrawGizmos()
        {
            Gizmos.color = Color.green;
            Gizmos.DrawLine(Quaternion.Euler(0,45,0) * new Vector3(_limitXMin,0, _limitYMin), Quaternion.Euler(0,45,0) * new Vector3(_limitXMin,0, _limitYMax));
            Gizmos.DrawLine(Quaternion.Euler(0,45,0) * new Vector3(_limitXMin,0, _limitYMax), Quaternion.Euler(0,45,0) * new Vector3(_limitXMax,0, _limitYMax));
            Gizmos.DrawLine(Quaternion.Euler(0,45,0) * new Vector3(_limitXMax,0, _limitYMax), Quaternion.Euler(0,45,0) * new Vector3(_limitXMax,0, _limitYMin));
            Gizmos.DrawLine(Quaternion.Euler(0,45,0) * new Vector3(_limitXMax,0, _limitYMin), Quaternion.Euler(0,45,0) * new Vector3(_limitXMin,0, _limitYMin));
        }
#endif


        private void Awake()
        {}


        private void Update()
        {

            CheckIfUiHasBeenTouched();

            // If there are no touches 
            if (Input.touchCount < 1)
            {
                _initTouch = true;
            }

            if (_initTouch == false && GetComponent<TapOnGameObject>().selectedObject.tag.Equals("World"))
            {
                Panning();
                Pinching();
            }
            else
            {
                PanningInertia();
                MinOrthoAchievedAnimation();
            }
            
  
        }


        /// <summary>
        /// Checks if one of the touches have started on a UI element 
        /// </summary>
        private void CheckIfUiHasBeenTouched()
        {
            if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
            {
                bool check = false;

                for (int i = 0; i < Input.touchCount; i++)
                {
                    if (EventSystem.current.IsPointerOverGameObject(i)) // implementation for the old input system!!
                    {
                        check = true;
                        break;
                    }
                }

                if (check == false)
                {
                    _initTouch = false;
                }
            }
        }


        /// <summary>
        /// Panning that is used to move the camera [ignores UI elements]
        /// </summary>
        private void Panning()
        {
            if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Moved)
            {
                Vector2 touchDeltaPosition = Input.GetTouch(0).deltaPosition;

                _panVelocity = touchDeltaPosition;
               
                PanningFunction(touchDeltaPosition);
            }
            else if(Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Stationary)
            {
                _panVelocity = Vector2.zero;
            }
        }


        /// <summary>
        /// Pinching that is used for zooming with 2 or more fingers
        /// </summary>
        private void Pinching()
        {
            if (Input.touchCount > 1)
            {
                _panVelocity = Vector2.zero;

                Touch touchZero = Input.GetTouch(0);
                Touch touchOne = Input.GetTouch(1);

                if (!_lastFramePinch)
                {
                    zoomTarget = _cameraObject.ScreenToWorldPoint((touchZero.position + touchOne.position) / 2);
                    initPos = _cameraToMove.transform.position;
                    initDist = Vector2.Distance(touchZero.position, touchOne.position);
                    initOrtho = _cameraObject.orthographicSize;
                }

                if (touchZero.phase == TouchPhase.Moved || touchOne.phase == TouchPhase.Moved)
                {
                    float prevDist = Vector2.Distance(touchZero.position - touchZero.deltaPosition, touchOne.position - touchOne.deltaPosition);
                    float dist = Vector2.Distance(touchZero.position, touchOne.position);

                    PanningFunction((touchZero.deltaPosition + touchOne.deltaPosition) / 40);

                    _cameraObject.orthographicSize = Mathf.Clamp(_cameraObject.orthographicSize * (prevDist / dist), _orthoMin, _orthoMax);

                    float t;
                    float x = _cameraObject.orthographicSize;

                    if (initOrtho != _orthoMin)
                    {
                        float a = -(1 / ((initOrtho - _orthoMin)));
                        float b = 1 + (_orthoMin / ((initOrtho - _orthoMin)));
                        t = Mathf.Clamp(a * x + b, 0f, 1f);

                        _cameraToMove.transform.position = Vector3.Lerp(initPos, new Vector3(zoomTarget.x, _cameraToMove.transform.position.y, zoomTarget.y), t);

                        LimitCameraMovement();
                    }
                }

                _lastFramePinch = true;
                Vector3 prevTarg = ((touchZero.position - touchZero.deltaPosition) + (touchOne.position - touchOne.deltaPosition)) / 2;
                Vector3 targ = (touchZero.position + touchOne.position) / 2;

                zoomTarget = _cameraObject.ScreenToWorldPoint(_cameraObject.WorldToScreenPoint(zoomTarget) - (targ - prevTarg));
                initPos = _cameraObject.ScreenToWorldPoint(_cameraObject.WorldToScreenPoint(initPos) - (targ - prevTarg));
            }
            else
            {
                _lastFramePinch = false;
            }
        }


        /// <summary>
        ///  The method for panning the camera with one input deltaPosition
        ///  Has a little bit of lag from transform.Translate;
        /// </summary>
        /// <param name="touchDeltaPosition"> the delta position for movement </param>
        private void PanningFunction(Vector2 touchDeltaPosition)
        {          
            Vector3 screenCenter = new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, 1f);
            Vector3 screenTouch = screenCenter + new Vector3(touchDeltaPosition.x, touchDeltaPosition.y, 0f);

            Vector3 worldCenterPosition = _cameraObject.ScreenToWorldPoint(screenCenter);
            Vector3 worldTouchPosition = _cameraObject.ScreenToWorldPoint(screenTouch);

            Vector3 worldDeltaPosition = worldTouchPosition - worldCenterPosition;
            
            _cameraToMove.transform.Translate(-worldDeltaPosition);

            LimitCameraMovement();
        }


        /// <summary>
        /// Inertia of the camera when panning finishes 
        /// </summary>
        private void PanningInertia()
        {
            if (_panVelocity.magnitude < 0.02f)
            {
                _panVelocity = Vector2.zero;
            }

            if (_panVelocity != Vector2.zero)
            {   
   
                
                _panVelocity = Vector2.Lerp(_panVelocity, Vector2.zero, _interpolationStep);
                _cameraToMove.transform.localPosition += Quaternion.Euler(60,45,0) * new Vector3(-_panVelocity.x / (500 * (1 / _cameraObject.orthographicSize)), 0, -_panVelocity.y / (500 * (1 / _cameraObject.orthographicSize)));
                LimitCameraMovement();
            }
        }


        /// <summary>
        /// Camera feedback when achieving minimum ortho
        /// </summary>
        private void MinOrthoAchievedAnimation()
        {           
            if (_cameraObject.orthographicSize < _orthoMin + 0.6f)
            {
                _cameraObject.orthographicSize = Mathf.Lerp(_cameraObject.orthographicSize, _orthoMin + 0.6f, 0.06f);
                _cameraObject.orthographicSize = Mathf.Round(_cameraObject.orthographicSize * 1000.0f) * 0.001f;
                LimitCameraMovement();
            }
        }


        /// <summary>
        /// Limits Camera Movement into boundaries
        /// </summary>
        private void LimitCameraMovement()
        {
            //float xCord = Mathf.Clamp(_cameraObject.transform.position.x, _limitXMin + (_cameraObject.orthographicSize * _cameraObject.aspect), _limitXMax - (_cameraObject.orthographicSize * _cameraObject.aspect));
            float zoom = _cameraObject.orthographicSize *  (_limitXMax / _orthoMax);
            float zoom2 = zoom * 0.8f;
            Vector3 pos = Quaternion.Euler(0,45,0) * _cameraObject.transform.position;
            float xCord = Mathf.Clamp(pos.x, (_limitXMin + zoom) , Mathf.Abs(_limitXMax - zoom));
            float yCord = Mathf.Clamp(pos.z, (_limitYMin + zoom2) , Mathf.Abs(_limitYMax - zoom2));

            _cameraToMove.transform.position = Quaternion.Euler(0,-45,0) * new Vector3(xCord, 0, yCord);
        }
    }
}