using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class OpeningController : MonoBehaviour {

	[SerializeField]
	Image fadeIn_fadeOut_image;
	private float fadeIn_fadeOut_time=0;
	private float fadeIn_fadeOut_value=255;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		FadeIn_and_FadeOut ();
	}

	//フェードインから入り、フェードアウトしてシーン遷移する
	void FadeIn_and_FadeOut(){
		fadeIn_fadeOut_image.color = new Color (0/255,0/255,0/255,fadeIn_fadeOut_value/255);
		fadeIn_fadeOut_time += Time.deltaTime;
		if (fadeIn_fadeOut_time < 4) {
			if(fadeIn_fadeOut_value>0)fadeIn_fadeOut_value -= 1.5f;
		} else if (fadeIn_fadeOut_time > 6) {
			if(fadeIn_fadeOut_value<255)fadeIn_fadeOut_value += 1.5f;
		} 

		if (fadeIn_fadeOut_time > 10) {
			SceneManager.LoadScene ("StoryScene");
		}
	}
}
