using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PageController : MonoBehaviour {
	//画像変更処理関連
	Image image;//色を変更するための部分
	// publicで宣言し、inspectorで設定可能にする
	SpriteRenderer renderer;
	public Sprite[] sprite;//使う物語の画像を使う

	//色をランダムに指定(実験中はランダムに指定されるようにする。)
	public Text specified_color_Label;
	private string specified_color;//色の名前が入る
	private int ran=0;//ランダムに色を決めるための乱数を入れる
	private bool finished=false;//指定される色を洗濯するたびにこのフラグが変更される

	//ページ関連
	private int page=0;//色を読み取るたびに、この変数の値を増加させる。ページ数をそのまま表示する。

	void Start () {
		image = GetComponent<Image> ();//コンポーネンチ取得
		specified_color="red";//最初は赤色に指定
		specified_color_Label.text = "「あか」をもってきてね";//UIの文字を変更
	}
		
	void FixedUpdate () {
		//Debug.Log (specified_color);//常に色の状態を確認する。
	}

	//赤のボタンが押された時の処理
	public void RedButton(){
		//指定されている色が赤だったら、次のページを表示する。
		if(specified_color=="red" && page<8){//現在指定されている色が赤色だったら処理
			page++;//ページ数を進める
			image.sprite = sprite [page];//画像変更。
			Specified_Next_Color();//次の色をランダムに指定
		}
	}

	//青が押された時のボタン
	public void BlueButton(){
		//指定されている色が青だったら次のページを表示する。
		if (specified_color == "blue" && page<8) {//現在指定されている色が青色だったら処理
			page++;//ページ数を進める
			image.sprite = sprite [page];//画像変更。
			Specified_Next_Color();//次の色をランダムに指定
		}
	}

	//黄色のボタンが押されたら処理
	public void YellowButton(){
		if (specified_color == "yellow" && page<8) {//現在指定されている色が黄色だったら処理
			page++;//ページ数を進める
			image.sprite = sprite [page];//画像変更。
			Specified_Next_Color();//次の色をランダムに指定
		}
	}

	//白のボタンが押されたら処理
	public void WhiteButton(){
		if (specified_color == "white" && page<8) {//現在指定されている色が白だったら、処理
			page++;//ページ数を進める
			image.sprite = sprite [page];//画像変更。
			Specified_Next_Color();//次の色をランダムに指定
		}
	}

	//次の色を指定する処理をまとめている。実際にはランダムにはしない。指定された色を読み取れた場合にこの関数が呼ばれる
	void Specified_Next_Color(){
		//テスト用。ランダムに色を指定する。本番では、実際の物語を使って色を決めるので、ランダムにはしないで、固定にする。
		ran = Random.Range (0, 4);
		if (ran == 0) {
			specified_color = "red";//指定する色を変更
			specified_color_Label.text = "「あか」をもってきてね";//UIの文字を変更
		} else if (ran == 1) {
			specified_color = "blue";
			specified_color_Label.text = "「あお」をもってきてね";
		} else if (ran == 2) {
			specified_color = "yellow";
			specified_color_Label.text = "「きいろ」をもってきてね";
		} else if (ran == 3) {
			specified_color = "white";
			specified_color_Label.text = "「しろ」をもってきてね";
		}
	}
}
