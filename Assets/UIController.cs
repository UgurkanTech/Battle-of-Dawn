using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UIController : MonoBehaviour
{
    // Start is called before the first frame update
    public int logCount = 0;
    public float logMax = 300;
    
    public TextMeshProUGUI logText;
    public Image logFill;

    public GameObject buyMenu;

    public GameObject bottomMenu;

    public TextMeshProUGUI bottomText;
    
    public void updateUI()
    {
        logText.text = logCount.ToString();
        logFill.fillAmount = logCount / logMax;
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
