using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PageController : MonoBehaviour {
	//全てのページ
	public Image set_story_image;//色を変更するための部分
	// publicで宣言し、inspectorで設定可能にする
	SpriteRenderer renderer;
	//使う物語をここにセットする
	public Sprite[] useStory;//Unityエディタ側でsizeの部分であらかじめ数値を指定しないと配列のエラーがでる。

	//色をランダムに指定(実験中はランダムに指定されるようにする。)
	public Text specified_color_Label;
	private string specified_color;//色の名前が入る
	private int ran=0;//ランダムに色を決めるための乱数を入れる
	private bool finished=false;//指定される色を洗濯するたびにこのフラグが変更される

	//ページ関連
	public int page=0;//色を読み取るたびに、この変数の値を増加させる。ページ数をそのまま表示する。
	public int story_page_number=0;//物語によってページ数が異なるので、StorySelectControllerで指定する。

	//色を取得した時の処理関連
	[SerializeField]
	GetColor getColor;//GetColorスクリプトから読み取っている色を取得
	private bool colors_reading_start=false;
	private float time_read_color=0;//色を読み取る時間

	void Start () {
		set_story_image = GetComponent<Image> ();//コンポーネント取得
		specified_color="orange";//最初は赤色に指定●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●
	}
		
	void FixedUpdate () {
		//Debug.Log (specified_color);//常に色の状態を確認する。
		if(colors_reading_start==true) ReadColor();
	}

	//色を読み取る処理。読み取りボタンが押されたら開始
	public void ReadColor(){
		colors_reading_start = true;
		time_read_color += Time.deltaTime;
		if (time_read_color > 2) {//2秒間読み取り中と表示するための演出処理
			Debug.Log ("読み取り完了");
			time_read_color=0;
			colors_reading_start = false;//一度だけ処理するためのもの
			if (getColor.color_name == "あか")
				SetColor ("red");
			else if (getColor.color_name == "黄色")
				SetColor ("yellow");
			else if (getColor.color_name == "緑")
				SetColor ("green");
			else if (getColor.color_name == "シアン")
				SetColor ("cyan");
			else if (getColor.color_name == "青")
				SetColor ("blue");
			else if (getColor.color_name == "もも")
				SetColor ("pink");
			else if (getColor.color_name == "オレンジ")
				SetColor ("orange");
			else if (getColor.color_name == "黄緑")
				SetColor ("yellow_green");
			else if (getColor.color_name == "青緑")
				SetColor ("blue_green");
			else if (getColor.color_name == "水色")
				SetColor ("light_blue");
			else if (getColor.color_name == "紫")
				SetColor ("purple");
			else if (getColor.color_name == "赤紫")
				SetColor ("red_purple");
			else if (getColor.color_name == "モノトーン")
				SetColor ("monotone");
		}
		Debug.Log ("読み取り中");
	}

	//StorySelectControllerで物語を選んだら最初の色指定を表示する。
	public void FirstColorDisplay(string storyName){
		if (storyName == "sarukani") {
			specified_color_Label.text = "「オレンジ」をもってきてね";//デフォルトの値●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●
		} else if (storyName == "kasa") {
			specified_color_Label.text = "「あお」をもってきてね";

		} else if (storyName == "omusubi") {
			specified_color_Label.text = "「きいろ」を持ってきてね";
		}
	}

	//12色⇨赤、黄色、緑、シアン、青、もも、オレンジ、黄緑、青緑、水色、紫、赤紫、モノトーン
	//現在書いている色⇨赤、青、黄色、白
	//現在たりていない色⇨緑、シアン、もも、オレンジ、黄緑、青緑、水色、紫、赤紫、モノトーン

	//ここの巻数だけで、読み取った色を指定されている色を比較して正しいかったら次のページに進む処理をする。
	void SetColor(string get_color_name){
		Debug.Log ("GetColorスクリプトから取得してきた色は"+get_color_name);
		if (get_color_name == specified_color) {
			page++;
			set_story_image.sprite=useStory[page];
			Specified_Next_Color ();//次の色をランダムに指定
		}
	}

	//赤のボタンが押された時の処理
	public void SelectRed(){
		//指定されている色が赤だったら、次のページを表示する。
		if (specified_color == "red" && page < story_page_number) {//現在指定されている色が赤色で、物語によって異なる最後のページ数に達していなかったら処理
			page++;//ページ数を進める
			set_story_image.sprite = useStory [page];//imageに、物語1をセットしている。
			Specified_Next_Color ();//次の色をランダムに指定
		} 
	}

	//青が押された時のボタン
	public void SelectBlue(){
		//指定されている色が青だったら次のページを表示する。
		if (specified_color == "blue" && page<story_page_number) {//現在指定されている色が青色で、物語によって異なる最後のページ数に達していなかったら処理
			page++;//ページ数を進める
			set_story_image.sprite = useStory [page];//画像変更。
			Specified_Next_Color();//次の色をランダムに指定
		}
	}

	//黄色のボタンが押されたら処理
	public void SelectYellow(){
		if (specified_color == "yellow" && page<story_page_number) {//現在指定されている色が黄色で、物語によって異なる最後のページ数に達していなかったら処理
			page++;//ページ数を進める
			set_story_image.sprite = useStory [page];//画像変更。
			Specified_Next_Color();//次の色をランダムに指定
		}
	}

	//白のボタンが押されたら処理
	public void SelectWhite(){
		if (specified_color == "white" && page<story_page_number) {//現在指定されている色が白で、物語によって異なる最後のページ数に達していなかったら処理
			page++;//ページ数を進める
			set_story_image.sprite = useStory [page];//画像変更。
			Specified_Next_Color();//次の色をランダムに指定
		}
	}

	//次の色を指定する処理をまとめている。実際にはランダムにはしない。指定された色を読み取れた場合にこの関数が呼ばれる
	void Specified_Next_Color(){
		//テスト用。ランダムに色を指定する。本番では、実際の物語を使って色を決めるので、ランダムにはしないで、固定にする。
		ran = Random.Range (0, 4);
		ran = 4;//デバッグ用
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
		} else if (ran == 4) {
			specified_color = "orange";
			specified_color_Label.text = "「オレンジ」をもってきてね";
		}
	}

	//最後のページに行ったかどうかを判定
	void FinishCheck(){
	}
}
