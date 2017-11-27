using System.Collections;
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
		if (time_read_color > 2) {//2秒間読み取り中と表示するための演出処理
			Debug.Log ("読み取り完了");
			loading_movie.SetActive (false);//読み取りが終了したら、読み取り中動画は非表示にする。
			readButton.SetActive (true);//読み取りが終了したら、読み取り開始ボタンを表示する。
			camera_boot.SetActive (true);//読み取りが終了したら、カメラ起動ボタンをまた表示する。
			time_read_color=0;//色読み取り時間をリセットする。
			colors_reading_start = false;//一度だけ処理するためのもの

			//ここから、取得した色を引数にして正しい色かを確かめる関数を呼び出す
			if (getColor.color_name == "あか") {
				Debug.Log ("あか");
			} else if (getColor.color_name == "きいろ") {
				Debug.Log ("きいろ");
			} else if (getColor.color_name == "みどり") {
				Debug.Log ("みどり");
			} else if (getColor.color_name == "シアン") {
				Debug.Log ("シアン");
			} else if (getColor.color_name == "あお") {
				Debug.Log ("あお");
			} else if (getColor.color_name == "もも") {
				Debug.Log ("もも");
			} else if (getColor.color_name == "オレンジ") {
				Debug.Log ("オレンジ");
			}else if (getColor.color_name == "きみどり"){
				Debug.Log ("きみどり");
			}else if (getColor.color_name == "あおみどり"){
				Debug.Log ("あおみどり");
			}else if (getColor.color_name == "みずいろ"){
				Debug.Log ("みずいろ");
			}else if (getColor.color_name == "むらさき"){
				Debug.Log ("むらさき");
			}else if (getColor.color_name == "あかむらさき"){
				Debug.Log ("あかむらさき");
			}else if (getColor.color_name == "モノトーン"){
				Debug.Log ("モノトーン");
			}
		}
		//Debug.Log ("読み取り中");
	}

	//物語を選択し直すために、物語選択パネルを表示する処理
	public void Display_GetColorPanel(){
		GetColorPanel.SetActive (true);
	}


}
