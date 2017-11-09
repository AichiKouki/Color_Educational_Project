using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class MenuSceneController : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	//全てのボタンのスクリプト呼び出しを共通化
	public void ClickButton(){
		ChangeColor (gameObject.name);//クリックしたオブジェクトの名前を取得してそれを渡して処理を分岐させている
	}

	//ボタンによって処理を分岐させる処理
	void ChangeColor(string name){
		if (name == "StorySceneButton") {//ストーリーボタンが押されたら処理
			SceneManager.LoadScene ("StoryScene");
		} else if (name == "AlbumSceneButton") {//アルバムボタンが押されたら処理
			SceneManager.LoadScene ("AlbumScene");
		} else if (name == "DrawingSceneButton") {//お絵かきボタンが押されたら処理
			SceneManager.LoadScene ("DrawingScene");
		} else if (name == "ColoringSceneButton") {//塗り絵ボタンが押されたら処理
			SceneManager.LoadScene ("ColoringScene");
		}
	}

}
