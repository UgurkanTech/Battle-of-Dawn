using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

public class World : MonoBehaviour
{
    private static int worldSize = 51;
    private static int worldSizeHalf = 25;
    public GameObject[,] world = new GameObject[worldSize,worldSize];
    public List<GameObject> npcs = new List<GameObject>();
    
    [SerializeField] private GameObject townhallPrefab;
    [SerializeField] private GameObject treePrefab;
    [SerializeField] private GameObject npcPrefab;
    
    
    [SerializeField] private Transform buildingsParent;
    [SerializeField] private Transform treesParent;
    [SerializeField] private Transform npcsParent;
    
    [Header("World Generation")]
    [SerializeField] private int treeCount;
    [SerializeField] private int npcCount;
    void Start()
    {
        GenerateWorld();
    }

    void GenerateWorld()
    {
        //Place Townhall
        GameObject th = Instantiate(townhallPrefab, Vector3.zero, Quaternion.identity, buildingsParent);
        placeObjectOnGrid(Vector3.zero, th, false);
        //Plant Trees
        for (int i = 0; i < treeCount; i++)
        {
            int x, y;
            do
            {
                x = Random.Range(0, worldSize);
                y = Random.Range(0, worldSize);
            } while (world[x, y] != null);
            
            Vector3 worldPos = new Vector3(x - worldSizeHalf, 0, y - worldSizeHalf) * 2.5f;
            world[x, y] = Instantiate(treePrefab, worldPos, Quaternion.identity, treesParent);
        }
        //Spawn Npcs
        for (int i = 0; i < npcCount; i++)
        {
            int x, y;
            do
            {
                x = Random.Range(0, worldSize);
                y = Random.Range(0, worldSize);
            } while (world[x, y] != null);
            
            Vector3 worldPos = new Vector3(x - worldSize/2, 0, y - worldSize/2) * 2.5f;
            npcs.Add(Instantiate(npcPrefab, worldPos, Quaternion.identity, npcsParent));
        }
        
    }

    public Vector2Int worldToGridPosition(Vector3 pos)
    {
        int x = Mathf.RoundToInt(pos.x / 2.5f + worldSizeHalf);    
        int y = Mathf.RoundToInt(pos.z / 2.5f + worldSizeHalf);
        return new Vector2Int(x, y);
    }

    public bool isGridPositionEmpty(Vector3 pos, GameObject gameObject)
    {
        Vector2Int gPos = worldToGridPosition(pos);
        if (gPos.x < 0 || gPos.x >= worldSize || gPos.y < 0 || gPos.y >= worldSize) return false;
        return world[gPos.x, gPos.y] == null || world[gPos.x, gPos.y].GetInstanceID() == gameObject.GetInstanceID();
    }

    public void placeObjectOnGrid(Vector3 pos, GameObject gameObject, bool moved)
    {
        gameObject.GetComponent<Building>().isGhost = true;
        bool empty = true;
        int size = gameObject.GetComponent<Building>().size;
        Vector2Int gPos = worldToGridPosition(pos);
        Vector2Int oldPos = worldToGridPosition(gameObject.transform.position);
        if (size == 1)
        {
            empty = isGridPositionEmpty(pos, gameObject);
            if (!empty)
                return;

            if(moved)
                world[oldPos.x, oldPos.y] = null;
            world[gPos.x, gPos.y] = gameObject;
            gameObject.transform.position = pos;
            gameObject.GetComponent<Building>().isGhost = false;
        }
        else if (size == 3)
        {
            for (int i = -1; i < 2; i++)
            {
                for (int j = -1; j < 2; j++)
                {
                    Vector3 checkPos = pos + new Vector3(2.5f * i, 0, 2.5f * j);
                    bool check = isGridPositionEmpty(checkPos, gameObject);
                    if (!check)
                        return;

                        
                    
                }
            }

            if (moved)
            {
                for (int i = -1; i < 2; i++)
                {
                    for (int j = -1; j < 2; j++)
                    {
                        int x = oldPos.x + i;
                        int y = oldPos.y + j;
                        world[x, y] = null;
                    }
                }
            }
            for (int i = -1; i < 2; i++)
            {
                for (int j = -1; j < 2; j++)
                {
                    int x = gPos.x + i;
                    int y = gPos.y + j;
                    world[x, y] = gameObject;
                }
            }
            gameObject.transform.position = pos;
            gameObject.GetComponent<Building>().isGhost = false;
        }
        else
        {
            throw new NotImplementedException("Other building sizes are not implemented yet!");
        }



    }

    void Update()
    {
        
    }
}
