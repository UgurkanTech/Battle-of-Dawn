using UnityEngine;
using UnityEditor;

public class RandomPrefabGenerator : MonoBehaviour
{
    public Terrain terrain;
    public int numberOfObjects; // number of objects to place
    private int currentObjects; // number of placed objects
    public GameObject objectToPlace; // GameObject to place
    private int terrainWidth; // terrain size (x)
    private int terrainLength; // terrain size (z)
    private int terrainPosX; // terrain position x
    private int terrainPosZ; // terrain position z
    public GameObject Parent;
    public float extraHeight = 0;
    
    public void ExecuteManually()
    {
        terrainWidth = (int)terrain.terrainData.size.x;
        // terrain size z
        terrainLength = (int)terrain.terrainData.size.z;
        // terrain x position
        terrainPosX = (int)terrain.transform.position.x;
        // terrain z position
        terrainPosZ = (int)terrain.transform.position.z;
        for (int i = 0; i < numberOfObjects; i++)
        {
            int posx = Random.Range(terrainPosX, terrainPosX + terrainWidth);
            // generate random z position
            int posz = Random.Range(terrainPosZ, terrainPosZ + terrainLength);
            // get the terrain height at the random position
            float posy = terrain.SampleHeight(new Vector3(posx, 0, posz));
            //float posy = Terrain.activeTerrain.SampleHeight(new Vector3(posx, 0, posz));
            // create new gameObject on random position
            GameObject newObject = (GameObject)Instantiate(objectToPlace, new Vector3(posx, posy + extraHeight, posz), Quaternion.identity);
            newObject.transform.parent = Parent.transform;
        }
        
        Debug.Log("Generating " + objectToPlace.name + " completed! " + "(" + currentObjects + " pieces)");

    }
    void Start()
    {
        // terrain size x
        terrainWidth = (int)terrain.terrainData.size.x;
        // terrain size z
        terrainLength = (int)terrain.terrainData.size.z;
        // terrain x position
        terrainPosX = (int)terrain.transform.position.x;
        // terrain z position
        terrainPosZ = (int)terrain.transform.position.z;

    }
    // Update is called once per frame
    void Update()
    {
        // generate objects
        if (currentObjects <= numberOfObjects)
        {
            // generate random x position
            int posx = Random.Range(terrainPosX, terrainPosX + terrainWidth);
            // generate random z position
            int posz = Random.Range(terrainPosZ, terrainPosZ + terrainLength);
            // get the terrain height at the random position
            float posy = terrain.SampleHeight(new Vector3(posx, 0, posz));
            //float posy = Terrain.activeTerrain.SampleHeight(new Vector3(posx, 0, posz));
            // create new gameObject on random position
            GameObject newObject = (GameObject)Instantiate(objectToPlace, new Vector3(posx, posy + extraHeight, posz), Quaternion.identity);
            newObject.transform.parent = Parent.transform;
            currentObjects += 1;
        }
        if (currentObjects == numberOfObjects)
        {
            Debug.Log("Generating " + objectToPlace.name + " completed! " + "(" + currentObjects + " pieces)");
        }
    }

    public static GameObject[] Spawn(Terrain _terrain, int _numberOfObjects, GameObject _objectToPlace, GameObject _parent, float _extraHeight)
    {
        int terrainWidth; // terrain size (x)
        int terrainLength; // terrain size (z)
        int terrainPosX; // terrain position x
        int terrainPosZ; // terrain position z
        int _currentObjects = 0; // number of placed objects

        GameObject[] placed = new GameObject[_numberOfObjects];
        // terrain size x
        terrainWidth = (int)_terrain.terrainData.size.x;
        // terrain size z
        terrainLength = (int)_terrain.terrainData.size.z;
        // terrain x position
        terrainPosX = (int)_terrain.transform.position.x;
        // terrain z position
        terrainPosZ = (int)_terrain.transform.position.z;


        while (_currentObjects < _numberOfObjects)
        {
            // generate random x position
            int posx = Random.Range(terrainPosX, terrainPosX + terrainWidth);
            // generate random z position
            int posz = Random.Range(terrainPosZ, terrainPosZ + terrainLength);
            // get the terrain height at the random position
            float posy = _terrain.SampleHeight(new Vector3(posx, 0, posz));
            //float posy = Terrain.activeTerrain.SampleHeight(new Vector3(posx, 0, posz));
            // create new gameObject on random position
            GameObject newObject = (GameObject)Instantiate(_objectToPlace, new Vector3(posx, posy + _extraHeight, posz), Quaternion.identity, _parent.transform);
            placed[_currentObjects] = newObject;
            _currentObjects += 1;
        }
        if (_currentObjects == _numberOfObjects)
        {
            Debug.Log("Generating " + _objectToPlace.name + " completed! " + "(" + _currentObjects + " pieces)");
        }
        return placed;
    }
}
#if UNITY_EDITOR
[CustomEditor(typeof(RandomPrefabGenerator))]
class RandomPrefabGeneratorEditor : Editor{
    public override void OnInspectorGUI(){
        DrawDefaultInspector();
        RandomPrefabGenerator rp = (RandomPrefabGenerator) target;
        if (GUILayout.Button("Create Prefabs"))
            rp.ExecuteManually();
    }
}
#endif