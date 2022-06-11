using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class CodeExtensions
{
    
    public static float FlatSqrMagnitude(this Vector3 from, Vector3 to)
    {
        return (to - from).sqrMagnitude;
    }
}
