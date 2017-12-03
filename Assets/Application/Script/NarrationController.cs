using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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

		if (played_opening == true) {
			aud.PlayOneShot (narration [0]);
			Debug.Log ("最初のナレーションが再生された");
		}

	}

	//PageControllerから呼ばれる。
	public void Narration_reproducing(int page){
		aud.PlayOneShot (narration[page]);
	}
}
