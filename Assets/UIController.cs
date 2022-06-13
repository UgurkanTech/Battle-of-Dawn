using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UIController : MonoBehaviour
{
    // Start is called before the first frame update
    public int logCount = 0;
    public int logMax = 1000;

    
    public int exp = 0;
    public int level = 0;
    
    public TextMeshProUGUI logText;
    public Image logFill;
    
    public TextMeshProUGUI levelText;
    public Image levelFill;

    public GameObject buyMenu;

    public GameObject bottomMenu;

    public TextMeshProUGUI bottomText;

    public World world;

    private int nextLevelUpReward = 1;

    public TextMeshProUGUI levelRequirementText;

    public void levelUpReward()
    {
        int xp = (int)(((level)*(level)) / (0.5f*0.5f));
        int xpNext = (int)(((level+1)*(level+1)) / (0.5f*0.5f));
        
        world.SpawnRandomTree(xpNext - xp);
    }

    public void updateUI()
    {
        if (logCount > logMax)
            logCount = logMax;
        
        logText.text = logCount.ToString();
        logFill.fillAmount = logCount / (float)logMax;

        
        level = Mathf.FloorToInt(0.5f * Mathf.Sqrt(exp));
        float xpRate = 0.5f * Mathf.Sqrt(exp) - level;
        
        levelText.text = level.ToString();
        levelFill.fillAmount = xpRate;
        
        if (level == nextLevelUpReward)
        {
            nextLevelUpReward++;
            levelUpReward();
        }
        
        int xp = (int)(((level)*(level)) / (0.5f*0.5f));
        int xpNext = (int)(((level+1)*(level+1)) / (0.5f*0.5f));
        levelRequirementText.text = "Tree Delivery: " + (exp - xp) + "/" + (xpNext - xp);
    }

    public void toggleBuyMenu(bool state)
    {
        buyMenu.SetActive(state);
        bottomMenu.SetActive(!state);
    }

    public void showMessage(string message, float delay, Color color)
    {
        StartCoroutine(showMessageEnumerator(message, delay, color));
        
    }
    private IEnumerator showMessageEnumerator(string message, float delay, Color color) {
        Debug.Log("message");
        bottomText.text = message;
        bottomText.gameObject.SetActive(true);
        bottomText.color = color;
        yield return new WaitForSeconds(delay);
        bottomText.gameObject.SetActive(false);
    }
    
}
