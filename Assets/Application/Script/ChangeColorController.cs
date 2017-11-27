using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeColorController : MonoBehaviour {

	//使う色を、実際に線を描く処理を担当するスクリプトに渡すために必要
	public DrawLineController drawLineController;

	//レインボー機能実装処理関連
	private float rainbow_time;//色を切り替える時間
	private bool is_rainbow=false;//レインボー機能を使うかどうかのフラグ

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		//レインボーペンを使うフラグがtrueなら、インクがレインボーになる機能を使う。
		if (is_rainbow == true) Rainbow_Pen ();
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
		} else if (name == "Rainbow_Button") {
			Debug.Log ("レインボーボタンが押された");
			is_rainbow = true;
		}
			
		is_rainbow = false;//何かしらの色の種類が選択されたということは、レインボーにする必要がないので、フラグをfalseにする。
	}

	//レインボーペンを作成(時間ごとに色を変化させるのが仕組み)
	public void Rainbow_Pen(){
		rainbow_time += Time.deltaTime;
		if (rainbow_time > 0 && rainbow_time < 1)
			drawLineController.changeColorNum = 0;
		else if (rainbow_time > 1 && rainbow_time < 2)
			drawLineController.changeColorNum = 1;
		else if (rainbow_time > 2 && rainbow_time < 3)
			drawLineController.changeColorNum = 2;
		else if (rainbow_time > 3 && rainbow_time < 4)
			drawLineController.changeColorNum = 3;
		else if (rainbow_time > 4 && rainbow_time < 5)
			drawLineController.changeColorNum = 4;
		else if (rainbow_time > 5 && rainbow_time < 6)
			drawLineController.changeColorNum = 5;
		else if (rainbow_time > 6 && rainbow_time < 7)
			drawLineController.changeColorNum = 6;
		else if (rainbow_time > 7 && rainbow_time < 8) {
			drawLineController.changeColorNum = 7;
			rainbow_time = 0;//最後の色の種類まで回ってきたら、レインボー時間をリセットする。
		}
		
	}
}
