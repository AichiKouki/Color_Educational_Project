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
	//アニメーションのあるキャラクターをまとめたページ
	public GameObject[] use_story_gameObject;

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

	//アニメーションつきのキャラをまとめたページを処理するため
	[SerializeField]
	StorySelectController storySelectController;

	//音声関連
	AudioSource aud;
	[SerializeField]
	AudioClip[] se;//正解したときや間違ったときの効果音を再生する。

	//読み取り中の処理関連
	[SerializeField]
	GameObject loading_movie;//読み込み中動画を表示するvideoplayerが入る
	[SerializeField]
	GameObject readButton;//読み取り中の時は、読み取り開始ボタンが邪魔になるので
	[SerializeField]
	GameObject camera_boot;//読み取り中の時は、カメラ起動ボタンが邪魔になるので

	//1ページ目でカニの色を決定する
	[SerializeField]
	SpriteRenderer[] spriteRenderer_crab;//StorySceneに出てくるカニのオブジェクト全てをここに入れる
	private bool determining_color_once = false;//最初に読み取った色をカニの色に設定するので、その処理は一度しかしないので、このフラグがある。

	void Start () {
		set_story_image = GetComponent<Image> ();//コンポーネント取得
		specified_color="orange";//最初は赤色に指定●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●
		aud=GetComponent<AudioSource>();
	}
		
	void FixedUpdate () {
		//Debug.Log (specified_color);//常に色の状態を確認する。
		if(colors_reading_start==true) ReadColor();
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
			if (determining_color_once == false) Determining_color_of_crab ();//最初にカニの色を決定する。(一度だけ処理)

			//ここから、取得した色を引数にして正しい色香を確かめる関数を呼び出す
			if (getColor.color_name == "あか")
				SetColor ("red");
			else if (getColor.color_name == "きいろ")
				SetColor ("yellow");
			else if (getColor.color_name == "みどり")
				SetColor ("green");
			else if (getColor.color_name == "シアン")
				SetColor ("cyan");
			else if (getColor.color_name == "あお")
				SetColor ("blue");
			else if (getColor.color_name == "もも")
				SetColor ("pink");
			else if (getColor.color_name == "オレンジ")
				SetColor ("orange");
			else if (getColor.color_name == "きみどり")
				SetColor ("yellow_green");
			else if (getColor.color_name == "あおみどり")
				SetColor ("blue_green");
			else if (getColor.color_name == "みずいろ")
				SetColor ("light_blue");
			else if (getColor.color_name == "むらさき")
				SetColor ("purple");
			else if (getColor.color_name == "あかむらさき")
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

	//ここの関数だけで、読み取った色を指定されている色を比較して正しいかったら次のページに進む処理をする。
	void SetColor(string get_color_name){
		Debug.Log ("GetColorスクリプトから取得してきた色は"+get_color_name);
		if (get_color_name == specified_color) {//指定されている色と同じ色を読み取れたら処理
			storySelectController.story1_gameObject [page].SetActive (false);//ページ数を増加する前に現在のページを非表示にする。
			page++;//正しい色を読み取れたので、ページを更新するためのページ数を増加させる
			storySelectController.story1_gameObject [page].SetActive (true);//次のページを表示する。
			set_story_image.sprite = useStory [page];//実際にページをセットする。(現在は使っていない)
			Specified_Next_Color ();//次の色をランダムに指定
			aud.PlayOneShot(se[0]);//正解したので、正解の効果音を再生する。
			storySelectController.GetColorPanel.SetActive (false);//正解したので、色を読みよるパネルは非表示にする。
		} else {//間違った色を読み取った場合
			aud.PlayOneShot(se[1]);//間違った色を読みとったので、間違った効果音を再生する。
			Debug.Log ("間違った");
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

	//1ページ目でカニの色を決定する。(処理は一度だけ)
	void Determining_color_of_crab(){
		determining_color_once = true;
		for(int i=0;i<spriteRenderer_crab.Length;i++){//使うカニの数だけ繰り返す
			spriteRenderer_crab[i].color=new Color(getColor.color.r*255/255,getColor.color.g*255/255,getColor.color.b*255/255,255/255);//最初に読み取った色を全てのカニオブジェクトのRTBに設定する。
		}
	}

	//最後のページに行ったかどうかを判定
	void FinishCheck(){
	}
}
