using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class AlbumSceneController : MonoBehaviour {

	public GameObject menu_panel;

	//メニューボタンが押されたら
	public void MunuButton(){
		menu_panel.SetActive (true);
	}

	//再開ボタンが押されたら
	public void ResumeButton(){
		menu_panel.SetActive (false);
	}

	//メニューへボタンが押されたら
	public void MoveToMenuScene(){
		SceneManager.LoadScene ("MenuScene");
	}

}
