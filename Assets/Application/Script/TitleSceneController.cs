using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
public class TitleSceneController : MonoBehaviour {

	//スクリーンをタップしてくださいの文字をフェードインしたりフェードアウトさせたり
	public Text tap_screenLabel;//画面をタップしてくださいと表示するラベル
	private float blackValue;//フェードアウトする時の暗い部分の値
	private float fadeInTime;//タップしてくださいラベルをフェードアウトとフェードインさせて点滅演出を実装するので、フェードアウトとフェードインの時間を設定する
	private bool onceTap=false;//画面は一回しかタップできないようにする処理。連続でタップしてボタン効果音が連続で再生させないように対策

	//フェードアウトして次のシーンに遷移さセル処理
	public Image fadeOutImage;//フェードアウトに使用するImage
	private float blackValue2;//たっぷしてくださいのラベルをゆっくりチカチカさせる処理
	private float fadeOutTime;//フェードアウトする時間
	private bool is_fade_out = false;//フェードアウトしたかどうかのフラグ

	//スクリーンをタップしたら効果音再生
	AudioSource aud;

	// Use this for initialization
	void Start () {
		aud = GetComponent<AudioSource> ();
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		Screen_tap_and_game_start ();//画面をタップしたかどうかを調べる処理
		Fade_in_Fade_out_Label ();//画面をタップしてくださいラベルを点滅させる処理
		if (is_fade_out == true) FadeOut ();//画面をタップしたら、画面全体フェードアウトさせ、セレクトシーンに背にさせる処理
	}

	//スクリーンをタップしてゲームスタート
	void Screen_tap_and_game_start(){
		if (Input.GetMouseButtonUp (0) && onceTap==false) {//クリックしたら、& 
			onceTap = true;
			aud.Play ();
			is_fade_out = true;
		}
	}

	//スクリーンをタップしてくださいの文字をフェードインしたりフェードアウトさせたり
	void Fade_in_Fade_out_Label(){
		tap_screenLabel.color = new Color(0/255,0/255,0/255,blackValue/255);
		fadeInTime += Time.deltaTime;
		if (fadeInTime < 1) {
			if(blackValue<255) blackValue += 8.0f;
		}else{
			if (blackValue > 0) blackValue -= 8.0f;
			if (fadeInTime > 2) fadeInTime = 0;
		}
	}

	//全体をフェードアウトして次のシーンに遷移する処理
	void FadeOut(){
			fadeOutTime += Time.deltaTime;
			fadeOutImage.color = new Color (0 / 255, 0 / 255, 0 / 255, blackValue2 / 255);
			if (blackValue2 < 255) blackValue2 += 5.0f;
			if (fadeOutTime > 2) {//2秒以上たってから、シーン遷移処理
				SceneManager.LoadScene ("MenuScene");
			}
	}

	//ランキングボタンが押されたら、ランキングを表示
}
