﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameController : MonoBehaviour {

	public GameObject coloring_illust_panel;
	public GameObject menu_panel;

	//やり直し機能を作成
	private string sceneName;//現在のシーン名を取得

	// Use this for initialization
	void Start () {
		sceneName = SceneManager.GetActiveScene ().name;//現在のシーン名を取得
	}
	
	// Update is called once per frame
	void Update () {
		
	}
		
	//塗り絵のイラストを選択するパネルを表示する
	public void coloring_illustButton(){
		coloring_illust_panel.SetActive (true);
	}

	//メニューパネルを表示する
	public void MenuButton(){
		menu_panel.SetActive (true);
	}

	//メニューシーンに遷移するボタン
	public void MoveToMenuButton(){
		SceneManager.LoadScene ("MenuScene");
	}

	//メニューパネルの再開ボタンの処理。パネルを非表示にするだけ
	public void ResumeButton(){
		menu_panel.SetActive (false);
	}
}
