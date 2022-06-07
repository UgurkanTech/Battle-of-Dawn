using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Building : MonoBehaviour
{
    public GameObject arrows;
    public bool canMove = false;
    public int size;
    public GameObject ghostObject;

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