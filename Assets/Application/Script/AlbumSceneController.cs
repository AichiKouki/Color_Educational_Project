using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class AlbumSceneController : MonoBehaviour {

	public GameObject menu_panel;//複数のUIを持つパベルを使う

	//メニューボタンが押されたら
	public void MunuButton(){
		menu_panel.SetActive (true);//メニューパネルを表示
	}

	//再開ボタンが押されたら
	public void ResumeButton(){
		menu_panel.SetActive (false);//メニューパネルを非表示
	}

	//メニューへボタンが押されたら
	public void MoveToMenuScene(){
		SceneManager.LoadScene ("MenuScene");//UIパネルの中にある複数のボタンの中の一つのメニューボタンがされたら処理
	}

}
