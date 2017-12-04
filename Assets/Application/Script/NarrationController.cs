using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//BGMとかその他効果音との音量を調整したいから、ナレーション専用のフィアルを作った。
public class NarrationController : MonoBehaviour {

	AudioSource aud;
	[SerializeField]
	AudioClip[] narration;

	//オープニングを再生したかどうかはStorySelectControllerにあるがstaticでアクセスできないので宣言
	public static bool played_opening = false;

	// Use this for initialization
	void Start () {
		aud = GetComponent<AudioSource> ();
		played_opening = true;//デバッグ用。最終的にはこの部分は削除する。

		if (played_opening == true) {//OpeningControllerから再生したかどうあkのフラグが変更される。
			aud.PlayOneShot (narration [0]);
			Debug.Log ("最初のナレーションが再生された");
		}

	}

	//PageControllerから呼ばれる。
	public void Narration_reproducing(int page){
		//PageControllerから現在のページ数が渡されて、ページに応じたナレーションを再生する。
		aud.PlayOneShot (narration[page]);
	}
}
