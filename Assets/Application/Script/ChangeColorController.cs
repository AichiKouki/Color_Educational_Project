using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeColorController : MonoBehaviour {

	//使う色を、実際に線を描く処理を担当するスクリプトに渡すために必要
	public DrawLineController drawLineController;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	//線の色を変更する処理
	//全てのボタンのスクリプト呼び出しを共通化
	public void ClickButton(){
		ChangeColor (gameObject.name);//クリックしたオブジェクトの名前を取得してそれを渡して処理を分岐させている
	}

	//ボタンによって処理を分岐させる処理
	void ChangeColor(string name){
		if (name == "ChangeBlackButton") {//ボタンの名前がChangeBlackButtonだったら処理
			drawLineController.changeColorNum = 0;//色のオブジェクトの配列の添え字の部分の値を変更
			Debug.Log ("黒のボタンが押されました");
		} else if (name == "ChangeBlueButton") {//青
			drawLineController.changeColorNum = 1;//色のオブジェクトの配列の添え字の部分の値を変更
		} else if (name == "ChangeGreenButton") {//緑
			drawLineController.changeColorNum = 2;//色のオブジェクトの配列の添え字の部分の値を変更
		} else if (name == "ChangeRedButton") {
			drawLineController.changeColorNum = 3;//色のオブジェクトの配列の添え字の部分の値を変更
		} else if (name == "ChangeYellowButton") {//あか
			drawLineController.changeColorNum = 4;//色のオブジェクトの配列の添え字の部分の値を変更
		} else if (name == "ChangeBrownButton") {//茶色
			drawLineController.changeColorNum = 5;//色のオブジェクトの配列の添え字の部分の値を変更
		} else if (name == "ChangePurpleButton") {//紫
			drawLineController.changeColorNum = 6;
		} else if (name == "ChangePinkButton") {//ピンク
			drawLineController.changeColorNum = 7;
		}
	}
}
