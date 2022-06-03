using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
[ExecuteInEditMode]
public class DemoGrid : MonoBehaviour
{
    private Mesh mesh;
    private static int xSize = 51, ySize = 51;
    
    public static Mesh generateMesh()
    {
        Mesh mesh = new Mesh();
        mesh.name = "Procedural Grid";
        
        int[] triangles = new int[xSize * ySize * 6];
        float scale = 0.5f;
        float offset = 0.00f;
        float posOffset = xSize / -4f;
        Vector3[] vertices = new Vector3[xSize * ySize * 4];
        Color[] colors = new Color[xSize * ySize * 4];
        bool neg = true;
        for (int i = 0, t = 0; i < xSize * ySize * 4; i += 4, t += 6)
        {
            neg = !neg;

            float x = (i/4 % xSize) / 2.0f;
            float y  = (i/4 / xSize) / 2.0f;
            vertices[i] = new Vector3(x + offset + posOffset, 0,y + offset + posOffset); 
            vertices[i+1] = new Vector3(x+scale + posOffset,0, y + offset + posOffset); //1
            vertices[i+2] = new Vector3(x+scale + posOffset, 0,y + scale + posOffset);//2
            vertices[i+3] = new Vector3(x+ offset + posOffset,0, y + scale + posOffset);//3
            
            triangles[t] = i+3;
            triangles[t+1] = i+1;
            triangles[t+2] = i;
            triangles[t+3] = i+2;
            triangles[t+4] = i+1;
            triangles[t+5] = i+3;

            if (neg)
            {
                colors[i] = Color.gray;
                colors[i+1] = Color.gray;
                colors[i+2] = Color.gray;
                colors[i+3] = Color.gray;
                
            }
            else
            {
                colors[i] = Color.black;
                colors[i+1] = Color.black;
                colors[i+2] = Color.black;
                colors[i+3] = Color.black;
            }
                
            
        }

        mesh.vertices = vertices;
        mesh.triangles = triangles;
        mesh.colors = colors;
        mesh.RecalculateNormals();
        
        return mesh;
    }
#if UNITY_EDITOR
    [MenuItem("Assets/Create Procedural Mesh")] static void Create () {   
        string filePath = 
            EditorUtility.SaveFilePanelInProject("Save Procedural Mesh", "Procedural Mesh", "asset", "");
        if (filePath == "") return;
        AssetDatabase.CreateAsset(generateMesh(), filePath);  
    }
#endif
    

    
    
}
