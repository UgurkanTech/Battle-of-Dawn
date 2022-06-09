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
    public void updateUI()
    {
        logText.text = logCount.ToString();
        logFill.fillAmount = logCount / logMax;
    }
    
}
