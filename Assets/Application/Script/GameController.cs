using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameController : MonoBehaviour {

	//やり直し機能を作成
	private string sceneName;//現在のシーン名を取得

	// Use this for initialization
	void Start () {
		sceneName = SceneManager.GetActiveScene ().name;//現在のシーン名を取得
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	//リトライボタンが押されたらシーンを再読み込みする処理
	public void RetryButton(){
		SceneManager.LoadScene (sceneName);//現在のシーンを再読み込みして、やり直しを実現する。
	}

	//メニューボタンが押されたらメニューシーンに繊維する処理
	public void MenuButton(){
		SceneManager.LoadScene ("MenuScene");
	}

	//ボタンが絵画された時の
}
