using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIController : MonoBehaviour {
	[SerializeField]
	GameObject menu_panel;
	[SerializeField]
	GameObject drawing_related_ui_panel;

	//お絵かき関連のUIをカットインするような動き
	private bool move_UI=false;
	private bool UI_slide=false;
	private float moveTime = 0;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		if(move_UI==true) Move_UI ();
	}

	//複数のお絵かき関連のボタンをスライドさせる
	public void MenuButton(){
		move_UI = true;
	}

	//ポーズボタンの処理
	public void PauseButton(){
		menu_panel.SetActive (true);
	}

	//UIが移動して表示する処理
	void Move_UI(){
		moveTime += Time.deltaTime;
		if (moveTime < 0.72f) {
			if (UI_slide == false) {
				drawing_related_ui_panel.transform.Translate (-0.5f,0,0);
			} else {
				drawing_related_ui_panel.transform.Translate (0.5f,0,0);
			}
		} else {//移動が終わったら
			move_UI=false;
			moveTime = 0;
			UI_slide = !UI_slide;
		}
	}
}
