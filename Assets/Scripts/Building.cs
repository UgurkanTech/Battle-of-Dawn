using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Building : MonoBehaviour
{
    public GameObject arrows;

    public bool canMove
    {
        get
        {
            return moveState;
        }
        set
        {
            moveState = value;
            if(!value)
                arrows.SetActive(false);
        }
    }
    [SerializeField] private bool moveState;
    public int size;
    public GameObject ghostObject;
    public GameObject owner;
    
    [SerializeField] private bool ghostState;
    public bool isGhost
    {
        get
        {
            return ghostState; 

        }
        set
        {
            ghostState = value;
            ghostObject.SetActive(value);

        }
    }
    
}