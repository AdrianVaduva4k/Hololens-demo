using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class UniPlayerCamDemo : MonoBehaviour{
         
    Vector2 _mouseAbsolute;
    Vector2 _smoothMouse;

    public Vector2 clampInDegrees = new Vector2(360, 360);

    public Vector2 sensitivity = new Vector2(1, 1);
    public Vector2 smoothing = new Vector2(3, 3);
    Vector2 targetDirection = new Vector2();
 
    private KeyCode cam_Up = KeyCode.PageUp;
    private KeyCode cam_Dn = KeyCode.PageDown;
  //  private KeyCode cam_Left = KeyCode.LeftArrow;
  //  private KeyCode cam_Right = KeyCode.RightArrow;
  //  private KeyCode cam_Fwd = KeyCode.UpArrow;
  //  private KeyCode cam_Back = KeyCode.DownArrow;
    private KeyCode cam_Home = KeyCode.Home;
    private KeyCode cam_FreeMouse = KeyCode.LeftControl;

    private KeyCode cam_OrbitLeft = KeyCode.Delete;
    private KeyCode cam_OrbitRight = KeyCode.End;

    //  private KeyCode obj_Left = KeyCode.A;
    //  private KeyCode obj_Right = KeyCode.D;
    //  private KeyCode obj_Fwd = KeyCode.W;
    //  private KeyCode obj_Back = KeyCode.S;
      private KeyCode obj_Down = KeyCode.R;
      private KeyCode obj_Up = KeyCode.Space;

    public float orbitSensitivity = 2.0f;
    float zoomSpeed = 2;
    float orthographicSizeMin=2;
    float orthographicSizeMax=1000;
    float fovMin=.05f;
    float fovMax = 120;
    public float jumpSpeed = 12;
  //  float orbitSensitivity = 1;
    float targetDirectionOrbit;
    Vector3 offset;
   
    public Camera playerCamera;
    public Transform gunMount;


    CharacterController controller;
          
    float camFlySpeed = .2f;


    private bool camOrbit;

    public float fps_Height = 1.5f, fps_Distance = .5f, fps_Offset = .5f;
    float _fps_Height = 1.5f, _fps_Distance = .2f, _fps_Offset = .5f;
    public float fps_sens_offset;
    public float fps_smooth_offset;


    bool freeMouse;

    public float currentSpeed = 9;
    public float gravity = 1;

    public Vector3 moveDirection = Vector3.zero;
    bool isBlockMouse;

    void Start()
    {
        controller = GetComponent<CharacterController>();

        _fps_Distance = playerCamera.transform.localPosition.z;
        _fps_Height = playerCamera.transform.localPosition.y;
        _fps_Offset = playerCamera.transform.localPosition.x;

    }
    

    void Update()
    {
        moveController();
        mouseAim();
        getCommands();
  
    }

    public int mouseAim()
    {

        if (freeMouse == false)
        {

            var targetOrientation = Quaternion.Euler(targetDirection);
            //   var targetCharacterOrientation = Quaternion.Euler(targetCharacterDirection);
            offset = (transform.position - playerCamera.transform.position);
            
            // Get raw mouse input for a cleaner reading on more sensitive mice.
            var mouseDelta = new Vector2(Input.GetAxisRaw("Mouse X"), Input.GetAxisRaw("Mouse Y"));


            // Scale input against the sensitivity setting and multiply that against the smoothing value.
            mouseDelta = Vector2.Scale(mouseDelta, new Vector2(sensitivity.x + fps_sens_offset * smoothing.x + fps_smooth_offset, sensitivity.y + fps_sens_offset * smoothing.y + fps_smooth_offset));

            // Interpolate mouse movement over time to apply smoothing delta.
            _smoothMouse.x = Mathf.Lerp(_smoothMouse.x, mouseDelta.x, 1f / smoothing.x);
            _smoothMouse.y = Mathf.Lerp(_smoothMouse.y, mouseDelta.y, 1f / smoothing.y);

            // Find the absolute mouse movement value from point zero.
            _mouseAbsolute += _smoothMouse;

            // Clamp and apply the local x value first, so as not to be affected by world transforms.
            if (clampInDegrees.x < 360)
                _mouseAbsolute.x = Mathf.Clamp(_mouseAbsolute.x, -clampInDegrees.x * 0.5f, clampInDegrees.x * 0.5f);

            // Then clamp and apply the global y value.
            if (clampInDegrees.y < 360)
                _mouseAbsolute.y = Mathf.Clamp(_mouseAbsolute.y, -clampInDegrees.y * 0.5f, clampInDegrees.y * 0.5f);


            transform.localRotation = Quaternion.AngleAxis(0, targetOrientation * Vector3.right) * targetOrientation;
            var yRotation = Quaternion.AngleAxis(_mouseAbsolute.x, transform.InverseTransformDirection(Vector3.up));
            transform.localRotation *= yRotation;


            if (camOrbit == false)
            {
                //rotate char cam up and down
                playerCamera.transform.localRotation = Quaternion.AngleAxis(-_mouseAbsolute.y, targetOrientation * Vector3.right) * targetOrientation;
                //rotate gun mount up and down
                gunMount.transform.localRotation = Quaternion.AngleAxis(-_mouseAbsolute.y, targetOrientation * Vector3.right) * targetOrientation;

            }


            //mouse zoom
            if (playerCamera.orthographic)
            {
                if (Input.GetAxis("Mouse ScrollWheel") < 0)
                    playerCamera.orthographicSize += zoomSpeed;
                if (Input.GetAxis("Mouse ScrollWheel") > 0)
                    playerCamera.orthographicSize -= zoomSpeed;

                playerCamera.orthographicSize = Mathf.Clamp(playerCamera.orthographicSize, orthographicSizeMin, orthographicSizeMax);
            }
            else
            {
                if (Input.GetAxis("Mouse ScrollWheel") < 0)
                {
                    playerCamera.fieldOfView += zoomSpeed;
                }

                if (Input.GetAxis("Mouse ScrollWheel") > 0)
                {
                    playerCamera.fieldOfView -= zoomSpeed;
                }


                //  Debug.Log("Cam zoom " + playerCamera.fieldOfView.ToString());

                playerCamera.fieldOfView = Mathf.Clamp(playerCamera.fieldOfView, fovMin, fovMax);
            }


            //   Debug.Log("cam position " + playerCamera.fieldOfView.ToString());

        }
        return (int)playerCamera.fieldOfView;

    }




    public void rotateCam(float dir)
    {

        offset = (playerCamera.transform.position - transform.parent.position);

        Quaternion q = Quaternion.AngleAxis(dir, Vector3.up);
        offset = q * offset;

        playerCamera.transform.rotation = q * playerCamera.transform.rotation;
        playerCamera.transform.position = transform.parent.position + offset;

        // playerCamera.transform.position = new Vector3(player.transform.position.x + offset.x, _camHeightY, player.transform.position.z + offset.z);

    }


    void getCommands()
    {
        if (Input.GetKeyDown(cam_FreeMouse))
        {
            if (!freeMouse)
            {
                freeMouse = true;
            }
            else
            {
                if (freeMouse)
                    freeMouse = false;
            }
            
            return;
        }

        if (Input.GetKey(cam_Up))
        {
          //  _fps_Height = _fps_Height + camFlySpeed;
         //   playerCamera.transform.localPosition = new Vector3(_fps_Offset, _fps_Height, _fps_Distance);
            return;
        }


        if (Input.GetKey(cam_Dn))
        {
          //  _fps_Height = _fps_Height - camFlySpeed;
          //  playerCamera.transform.localPosition = new Vector3(_fps_Offset, _fps_Height, _fps_Distance);
            return;
        }


        if (Input.GetKey(cam_Home))
        {
            playerCamera.transform.localPosition = new Vector3(0, 0, 0);
            return;
        }


        // if (Input.GetKey(obj_Back))
        // {

        // }


        if (Input.GetKey(cam_OrbitLeft))
        {
            camOrbit = true;
            rotateCam(1f * orbitSensitivity);
        }

        if (Input.GetKey(cam_OrbitRight))
        {
            camOrbit = true;
            rotateCam(-1f * orbitSensitivity);
        }

    }
    
   void moveController()
    {
        float grav=0; 
        moveDirection = new Vector3(Input.GetAxis("Horizontal"), 0, Input.GetAxis("Vertical"));
        moveDirection = transform.TransformDirection(moveDirection);
        moveDirection *= currentSpeed;

        if (Input.GetKey(obj_Up))
        {
            moveDirection.y = jumpSpeed;
            grav = 0;

        }
        if(Input.GetKey(obj_Down))
        { 
            moveDirection.y = -jumpSpeed;
           
        }
         moveDirection.y -= gravity * Time.deltaTime;
        controller.Move(moveDirection * Time.deltaTime);
    }
   

   public void endDemo()
    {
        Application.Quit();
    }


}

