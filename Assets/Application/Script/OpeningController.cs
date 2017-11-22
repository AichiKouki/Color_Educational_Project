using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
public class OpeningController : MonoBehaviour {

	[SerializeField]
	Image fadeIn_fadeOut_image;//フェードインとフェードアウトをするための黒い画像
	private float fadeIn_fadeOut_time=0;//フェードインとかフェードアウトする時間
	private float fadeIn_fadeOut_value=255;//黒の画像の黒の透明度
	// Use this for initialization
	void Start () {
		//staitcな変数だから、スクリプトの変数を取得しなくてもいい
		StorySelectController.startOpening = true;//staticな変数を変更して、オープニング映像を再生したことを伝える
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		FadeIn_and_FadeOut ();//オープニング再生のシーンが開かれた瞬間に、フェードインとフェードアウトを開始する。
	}

	//フェードインから入り、フェードアウトしてシーン遷移する
	void FadeIn_and_FadeOut(){
		fadeIn_fadeOut_image.color = new Color (0/255,0/255,0/255,fadeIn_fadeOut_value/255);
		fadeIn_fadeOut_time += Time.deltaTime;
		if (fadeIn_fadeOut_time < 4) {//4秒の間フェードイン開始
			if(fadeIn_fadeOut_value>0)fadeIn_fadeOut_value -= 1.5f;
		} else if (fadeIn_fadeOut_time > 6) {//6秒経ったらフェードアウト開始
			if(fadeIn_fadeOut_value<255)fadeIn_fadeOut_value += 1.5f;
		} 

		if (fadeIn_fadeOut_time > 10) {
			SceneManager.LoadScene ("StoryScene");
		}
	}
}
