using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectSpawner : MonoBehaviour
{
    private World world;
    private UIController uic;
    

    private void Start()
    {
        world = GameObject.Find("World").GetComponent<World>();
        uic = GetComponent<UIController>();
    }

    public void SpawnObject(GameObject prefab)
    {
        int price = 500;
        bool isNPC = false;
        switch (prefab.name)
        {
            case "Villager":
                price = 10;
                isNPC = true;
                break;
            case "Wall":
                price = 5;
                break;
        }
        
        if (uic.logCount >= price)
        {
            uic.logCount -= price;
            uic.updateUI();
            world.SpawnPrefabAtRandomLocation(prefab, isNPC);
            uic.showMessage("A " + prefab.name + " bought for " + price +"!", 1, Color.green);
        }
        else
        {
            uic.showMessage("No money!", 1, Color.red);
        }
        

    }
}
