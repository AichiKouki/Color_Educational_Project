using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Coloring_illustration_Controller : MonoBehaviour {
//塗り絵のイラストを選択して表示するスクリプト
	public SpriteRenderer spriteRenderer;//UIではなく通常の画像

	// publicで宣言し、inspectorで設定可能にする
	SpriteRenderer renderer;
	public Sprite[] sprite;//使うイラスト格納

	//イラストを選択したあとは、パネルは自動的に消えて欲しいので使う
	public GameObject illustPanel;

	//選択されたイラストを表示するImageUI
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void FixedUpdate () {
	}

	//全てのボタンのスクリプト呼び出しを共通化
	public void ClickButton(){
		TappedButton (gameObject.name);//クリックしたオブジェクトの名前を取得してそれを渡して処理を分岐させている
	}

	//全てのボッタんおを共通化させる
	void TappedButton(string name){
		if (name == "crab1_Button") {//crab1_Buttonが押されたら処理
			spriteRenderer.sprite = sprite [0];//用意していたイラストの0番目を表示する
			illustPanel.SetActive (false);//イラストを選択下なら、選択パネルの表示をやめる
		} else if (name == "crab2_Button") {
			spriteRenderer.sprite = sprite [1];//用意していたイラストの2番目を表示する
			illustPanel.SetActive (false);//イラストを選んだならイラスト選択パネルを非表示にする。
		} else if (name == "crab3_Button") {
			spriteRenderer.sprite = sprite [2];
			illustPanel.SetActive (false);//イラストを選んだなら、イラスト選択パネルを非表示にする。
		}
	}

}
