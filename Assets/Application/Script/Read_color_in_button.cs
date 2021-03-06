﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Read_color_in_button : MonoBehaviour {

	[SerializeField]
	GameObject GetColorPanel;

	//色を取得した時の処理関連
	[SerializeField]
	GetColor getColor;//GetColorスクリプトから読み取っている色を取得
	private bool colors_reading_start=false;//色を読み取り始めたら処理。色の読み取りが終わったらfalseになる。
	private float time_read_color=0;//色を読み取る時間


	//読み取り中の処理関連
	[SerializeField]
	GameObject loading_movie;//読み込み中動画を表示するvideoplayerが入る
	[SerializeField]
	GameObject readButton;//読み取り中の時は、読み取り開始ボタンが邪魔になるので
	[SerializeField]
	GameObject camera_boot;//読み取り中の時は、カメラ起動ボタンが邪魔になるので

	//今後このスクリプトを流用していくなら、ここの部分はいらない。今回だけになる
	//取得した色をペンの色に設定する
	[SerializeField]
	DrawLineController drawLineController;//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
	[SerializeField]
	ChangeColorController changeColorController;//レインボー機能を止めるため//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない

	//色を読み取るタイミングなどに、メニュー内のボタンが邪魔なので非表示にするため
	[SerializeField]
	GameObject UI1;
	[SerializeField]
	GameObject UI2;
	[SerializeField]
	GameObject UI3;
	[SerializeField]
	GameObject UI4;
	[SerializeField]
	GameObject UI5;
	[SerializeField]
	GameObject UI6;
	[SerializeField]
	GameObject Line_Hidden_button;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		if(colors_reading_start==true) ReadColor();//色を読み取る処理
	}

	//色を読み取る処理。読み取りボタンが押されたら開始
	public void ReadColor(){
		colors_reading_start = true;//Update関数で、ループ処理を開始するためのフラグ
		time_read_color += Time.deltaTime;//色を読み取る時間を計算する。
		loading_movie.SetActive (true);//読み取り中動画を表示する。
		readButton.SetActive (false);//読み込み開始ボタンは邪魔なので、読み取り中は非表示にする。
		camera_boot.SetActive (false);//読み込み中は、カメラ起動ボタンは邪魔なので、非表示にする。

		Show_and_hide_in_bulk_button (false);//UIをまとめて非表示にする処理をまとめた

		if (time_read_color > 2) {//2秒間読み取り中と表示するための演出処理
			Debug.Log ("読み取り完了");
			loading_movie.SetActive (false);//読み取りが終了したら、読み取り中動画は非表示にする。
			readButton.SetActive (true);//読み取りが終了したら、読み取り開始ボタンを表示する。
			camera_boot.SetActive (true);//読み取りが終了したら、カメラ起動ボタンをまた表示する。
			GetColorPanel.SetActive (false);//色を読み取るだけなので、読み取るたびに読み取りパネルを非表示にする。
			time_read_color=0;//色読み取り時間をリセットする。
			colors_reading_start = false;//一度だけ処理するためのもの

			changeColorController.start_rainbow = false;//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない

			Show_and_hide_in_bulk_button (true);//UIをまとめてfalseにしたりtrueにしたりする機会があったので、処理をまとめた関数にbool型を引数として渡す

			//GetColorPanelの中の線を隠すボタンを押した状態で色を読み取ると、線が隠れたままを改善
			drawLineController.summarize_object.SetActive(true);
			drawLineController.done_line_to_invisible = true;

			//ここから、取得した色を引数にして正しい色かを確かめる関数を呼び出す
			if (getColor.color_name == "あか") {
				Debug.Log ("あか");
				drawLineController.changeColorNum = 3;//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
				drawLineController.current_color.text="あか";
			} else if (getColor.color_name == "きいろ") {
				Debug.Log ("きいろ");
				drawLineController.changeColorNum = 4;//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
				drawLineController.current_color.text="きいろ";
			} else if (getColor.color_name == "みどり") {
				Debug.Log ("みどり");
				drawLineController.changeColorNum = 2;//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
				drawLineController.current_color.text="みどり";
			} else if (getColor.color_name == "シアン") {
				Debug.Log ("シアン");
				drawLineController.changeColorNum = 1;//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
				drawLineController.current_color.text="シアン";
			} else if (getColor.color_name == "あお") {
				Debug.Log ("あお");
				drawLineController.changeColorNum = 1;//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
				drawLineController.current_color.text="あお";
			} else if (getColor.color_name == "もも") {
				Debug.Log ("もも");
				drawLineController.changeColorNum = 7;//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
				drawLineController.current_color.text="もも";
			} else if (getColor.color_name == "オレンジ") {
				Debug.Log ("オレンジ");
				drawLineController.changeColorNum = 10;//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
				drawLineController.current_color.text="オレンジ";
			}else if (getColor.color_name == "きみどり"){
				Debug.Log ("きみどり");
				drawLineController.changeColorNum = 11;//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
				drawLineController.current_color.text="きみどり";
			}else if (getColor.color_name == "あおみどり"){
				Debug.Log ("あおみどり");
				drawLineController.changeColorNum = 9;//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
				drawLineController.current_color.text="あおみどり";
			}else if (getColor.color_name == "みずいろ"){
				Debug.Log ("みずいろ");
				drawLineController.changeColorNum = 8;//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
				drawLineController.current_color.text="みずいろ";
			}else if (getColor.color_name == "むらさき"){
				Debug.Log ("むらさき");
				drawLineController.changeColorNum = 6;//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
				drawLineController.current_color.text="むらさき";
			}else if (getColor.color_name == "あかむらさき"){
				Debug.Log ("あかむらさき");
			}else if (getColor.color_name == "モノトーン"){
				Debug.Log ("モノトーン");
				drawLineController.changeColorNum = 0;//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
				drawLineController.current_color.text="モノトーン";
			}
		}
		//Debug.Log ("読み取り中");
	}

	//物語を選択し直すために、物語選択パネルを表示する処理
	public void Display_GetColorPanel(){
		GetColorPanel.SetActive (true);

		camera_boot.SetActive (false);//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
		UI1.SetActive(false);//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
		UI2.SetActive(false);//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
		UI3.SetActive(false);//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
		UI4.SetActive(false);//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
		UI5.SetActive(false);//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
	}

	//色を読み取る時には他のボタンが邪魔になるので、読み取る前は非表示にして読み取ったら表示する処理
	void Show_and_hide_in_bulk_button(bool judge){//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
		UI1.SetActive(judge);//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
		UI2.SetActive(judge);//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
		UI3.SetActive(judge);//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
		UI4.SetActive(judge);//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
		UI5.SetActive(judge);//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
		UI6.SetActive(judge);//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
		Line_Hidden_button.SetActive(judge);//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
	}

	//色を取得するのをやめる処理
	public void Color_abort_acquisition(){
		UI1.SetActive(true);//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
		UI2.SetActive(true);//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
		UI3.SetActive(true);//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
		UI4.SetActive(true);//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
		UI5.SetActive(true);//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●流用するならいらない
		GetColorPanel.SetActive(false);
		camera_boot.SetActive (true);

	}
}
