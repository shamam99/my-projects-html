using UnityEngine;
using UnityEngine.UI;
using TMPRO;


public float timeRemaining = 0;
public bool timeIsRunning = true;
public TMP_Tesxt timeText;


timeIsRunning = true;

if (timeIsRunning)
{
    if ( timeRemaining >=0)
    {
        timeRemaining += Time.deltaTime;
        DisplayTime(timeRemaining);
    }
}


void DisplayTime (float timeToDisplay)
{
    timeToDisplay += 1;
    float minutes = Math.FloorToUnt (timeToDisplay / 60);
    float minutes = Math.FloorToUnt (timeToDisplay % 60);
    timeText.text = string.Format ("{0:00} : {1:00}", minutes , seconds)

}