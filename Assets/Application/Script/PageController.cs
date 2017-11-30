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
	private bool colors_reading_start=false;//色を読み取り始めたら処理。色の読み取りが終わったらfalseになる。
	private float time_read_color=0;//色を読み取る時間

	//アニメーションつきのキャラをまとめたページを処理するため
	[SerializeField]
	StorySelectController storySelectController;

	//音声関連
	AudioSource aud;
	[SerializeField]
	AudioClip[] se;//正解したときや間違ったときや物語読み上げの声などの効果音を再生する。

	//読み取り中の処理関連
	[SerializeField]
	GameObject loading_movie;//読み込み中動画を表示するvideoplayerが入る
	[SerializeField]
	GameObject readButton;//読み取り中の時は、読み取り開始ボタンが邪魔になるので
	[SerializeField]
	GameObject camera_boot;//読み取り中の時は、カメラ起動ボタンが邪魔になるので

	//1ページ目でカニの色を決定する
	[SerializeField]
	SpriteRenderer[] spriteRenderer_object;//StorySceneの中の色を変更するオブジェクト全てをここに入れる
	private bool determining_color_once = false;//最初に読み取った色をカニの色に設定するので、その処理は一度しかしないので、このフラグがある。

	//最後のページになった時の処理
	public int configured_page_number=0;//StorySelectControllerで、配列の数(自分で設定したページ数によってページ数が変わるようにしているので、その値を取得する)
	private bool story_last_until_read=false;

	//次のページを表示する時に、ページ自体はSetActiveされているが、画面全体はフェードアウトとフェードインする。
	[SerializeField]
	Image fadeIn_fadeOut_image;//フェードインとフェードアウトをするための黒い画像
	private bool page_fadeIn_fadeOut=false;//Update関数で関数を呼び出すので、フラグを使って、処理するときとしないときを区別する。
	private float fadeIn_fadeOut_time=0;//フェードインとかフェードアウトする時間
	private float fadeIn_fadeOut_value=0;//黒の画像の黒の透明度

	//間違った色を読み込んでしまった時、音声だけでなく、文字列として可視化する。
	[SerializeField]
	Text visualization_mistake_label;//何を読み取ったかを表示するラベル
	[SerializeField]
	GameObject visualization_mistake;//間違ったことを知らせる。
	private string obtained_color;//別のメソッドの引数でもともと扱っていたので、別の用途で取得した色を扱うので、そのための変数を宣言した。

	//読み取ってもらう色を指定する部分の背景の部分もその色に変更する
	[SerializeField]
	Image specified_color_background_image;


	void Start () {
		set_story_image = GetComponent<Image> ();//コンポーネント取得
		specified_color="orange";//最初は赤色に指定●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●
		aud=GetComponent<AudioSource>();
		Debug.Log("最終的なページは"+configured_page_number);//最終的なページ数を表示する。
	}
		
	void FixedUpdate () {
		//Debug.Log (specified_color);//常に色の状態を確認する。
		if(colors_reading_start==true) ReadColor();//色を読み取る処理
		if (page_fadeIn_fadeOut == true) next_page_display_when_fade_in_with_fade_out ();//次のページをフェードインで表示する処理
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
				SetColor ("red");
				Determining_color_of_object (255f, 0f, 0f);//色を読み取るたびに、カニの色を変更する。
			} else if (getColor.color_name == "きいろ") {
				SetColor ("yellow");
				Determining_color_of_object (255f, 255f, 0f);
			} else if (getColor.color_name == "みどり") {
				SetColor ("green");
				Determining_color_of_object (0f, 200f, 0f);
			} else if (getColor.color_name == "シアン") {
				SetColor ("cyan");
				Determining_color_of_object (143f, 251f, 253f);
			} else if (getColor.color_name == "あお") {
				SetColor ("blue");
				Determining_color_of_object (60f, 100f, 255f);
			} else if (getColor.color_name == "もも") {
				SetColor ("pink");
				Determining_color_of_object (220f, 115f, 160f);
			} else if (getColor.color_name == "オレンジ") {
				SetColor ("orange");
				Determining_color_of_object (242f, 167f, 59f);
			}else if (getColor.color_name == "きみどり"){
				SetColor ("yellow_green");
				Determining_color_of_object (0f,255f,0f);
			}else if (getColor.color_name == "あおみどり"){
				SetColor ("blue_green");
				Determining_color_of_object (72f,161f,151f);
			}else if (getColor.color_name == "みずいろ"){
				SetColor ("light_blue");
				Determining_color_of_object (142f,252f,251f);
			}else if (getColor.color_name == "むらさき"){
				SetColor ("purple");
				Determining_color_of_object (140f,35f,197f);
			}else if (getColor.color_name == "あかむらさき"){
				SetColor ("red_purple");
				Determining_color_of_object (118f,41f,80f);
			}else if (getColor.color_name == "モノトーン"){
				SetColor ("monotone");
				Determining_color_of_object (255f,255f,255f);
			}
		}
		//Debug.Log ("読み取り中");
	}

	//StorySelectControllerで物語を選んだら最初の色指定を表示する。
	public void FirstColorDisplay(string storyName){
		if (storyName == "sarukani") {
			specified_color_Label.text = "「オレンジ」をもってきてね";//デフォルトの値●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●
			specified_color_background_image.color=new Color(242f/255,167f/255,59f/255,255/255);//242f, 167f, 59f
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
		obtained_color = get_color_name;//間違った色を読み取った時の可視化演出のために使う。
		Debug.Log ("GetColorスクリプトから取得してきた色は"+get_color_name);
		if (get_color_name == specified_color) {//指定されている色と同じ色を読み取れたら処理
			aud.PlayOneShot (se [0]);//正解したので、正解の効果音を再生する。
			StartCoroutine("Character_color_change_after_next_page_go");//数秒経ってから処理をしたいから、コルーチンを使っている
			page_fadeIn_fadeOut=true;//次のページをSetActiveで表示する前に、がめん全体をフェードアウトしてフェードインする処理を行うためのフラグ
		} else {//間違った色を読み取った場合
			aud.PlayOneShot(se[1]);//間違った色を読みとったので、間違った効果音を再生する。
			Debug.Log ("間違った");
			StartCoroutine ("Mistake_visualization_staging");//間違いを可視化するための演出コルーチンを開始する。
		}
		storySelectController.GetColorPanel.SetActive (false);//読み取る色を間違った時に、キャラクターに変な色がつくのを見ることができても面白いと思って、正解不正解問わず非表示にする
		Debug.Log ("pageの値は"+page);//進んだページ数を表示
	}

	//正しい色を読み取れた場合は、色が反映されたページを表示してから数秒たってから次のページを表示する。
	IEnumerator Character_color_change_after_next_page_go(){
		yield return new WaitForSeconds (4);//3秒経ったら処理する。
		if (page < configured_page_number) {//最終的な指定した数のページよりまだ進んでいなかったら、進む処理
			storySelectController.story1_gameObject [page].SetActive (false);//ページ数を増加する前に現在のページを非表示にする。
			page++;//正しい色を読み取れたので、ページを更新するためのページ数を増加させる
			if(page<configured_page_number)storySelectController.story1_gameObject [page].SetActive (true);//次のページを表示する。
			if(page<configured_page_number)set_story_image.sprite = useStory [page];//実際にページをセットする。(現在は使っていない)
			Specified_Next_Color ();//次の色をランダムに指定
			//storySelectController.GetColorPanel.SetActive (false);//正解したので、色を読みよるパネルは非表示にする。
			if(page==configured_page_number) Last_page_termination();//最後のページが終わったら最後の処理をする関数を呼び出す
		}
	}

	//間違った色を読み取った時の間違い可視化の演出
	IEnumerator Mistake_visualization_staging(){
		visualization_mistake.SetActive (true);//読み取った色と正解の色を表示するラベルと、その背景ImageをまとめたGameObjectを表示する。
		visualization_mistake_label.text = "よみとった色は"+getColor.color_name+"だよ";//読み取った色を正解の色を文字列として表示。
		yield return new WaitForSeconds (3);//3秒表示したら、次は非表示にする。
		visualization_mistake.SetActive (false);
	}

	//次のページを表示する時に、ページ自体はSetActiveされているが、画面全体はフェードアウトとフェードインする。
	void next_page_display_when_fade_in_with_fade_out(){
		fadeIn_fadeOut_time += Time.deltaTime;
		fadeIn_fadeOut_image.color = new Color (0/255,0/255,0/255,fadeIn_fadeOut_value/255);
		if (fadeIn_fadeOut_time>2 && fadeIn_fadeOut_time <= 4) {//フェードアウト
			if (fadeIn_fadeOut_value < 255) fadeIn_fadeOut_value += 3f;	
		} else if (fadeIn_fadeOut_time>4 && fadeIn_fadeOut_time <= 6) {//フェードイン
			if (fadeIn_fadeOut_value > 0) fadeIn_fadeOut_value -= 5f;
		}

		//フェードアウトとフェードインの処理に必要な変数をリセットする。
		if (fadeIn_fadeOut_time > 6) {//フェードインとフェードアウトのために使う変数をリセットする処理
			page_fadeIn_fadeOut = false;//フェードアウトとフェードインをするかどうかのフラグをfalseにした。(Updateの中に関数呼び出しがあるから。)
			fadeIn_fadeOut_time = 0;
		}
	}
		

	//次の色を指定する処理をまとめている。実際にはランダムにはしない。指定された色を読み取れた場合にこの関数が呼ばれる
	void Specified_Next_Color(){
		//テスト用。ランダムに色を指定する。本番では、実際の物語を使って色を決めるので、ランダムにはしないで、固定にする。
		//もも、黄色、オレンジ、水色を読み取るとシアンとなる、黄緑
		if (page==1 || page==6 || page==11) {
			specified_color = "pink";//指定する色を変更
			specified_color_Label.text = "「もも」をもってきてね";//UIの文字を変更
			specified_color_background_image.color=new Color(220f/255,115f/255,160f/255,255/255);//220f, 115f, 160f
		} else if (page==2 || page==7 || page==12) {
			specified_color = "yellow";//指定する色を変更
			specified_color_Label.text = "「きいろ」をもってきてね";
			specified_color_background_image.color=new Color(255f/255,255f/255,0/255,255/255);//255f, 255f, 0f
		} else if (page==3 || page==8) {
			specified_color = "orange";//指定する色を変更
			specified_color_Label.text = "「オレンジ」をもってきてね";
			specified_color_background_image.color=new Color(242f/255,167f/255,59f/255,255/255);//242f, 167f, 59f
		} else if (page==4 || page==9) {
			specified_color = "light_blue";//指定する色を変更
			specified_color_Label.text = "「水色」をもってきてね";
			specified_color_background_image.color=new Color(142f/255,252f/255,251f/255,255/255);//142f,252f,251f
		} else if (page==5 || page==10) {
			specified_color = "yellow_green";//指定する色を変更
			specified_color_Label.text = "「きみどり」をもってきてね";
			specified_color_background_image.color=new Color(0f/255,255f/255,0f/255,255/255);//0f,255f,0f
		}
	}

	//1ページ目でカニの色を決定する。(処理は一度だけ)
	void Determining_color_of_object(float r,float g,float b){
		for(int i=0;i<spriteRenderer_object.Length;i++){//使うカニの数だけ繰り返す
			//spriteRenderer_crab[i].color=new Color(getColor.color.r*255/255,getColor.color.g*255/255,getColor.color.b*255/255,255/255);//最初に読み取った色を全てのカニオブジェクトのRTBに設定する。
			spriteRenderer_object[i].color=new Color(r/255,g/255,b/255,255/255);//最初に読み取った色を全てのカニオブジェクトのRTBに設定する。
		}
	}

	//デバッグボタン処理(本番ではカメラを使って物語を進めるので)
	public void DebugButton(){
		SetColor (specified_color);//デバッグ用に全ページオレンジに設定しているので、
	}

	//最後のページになった時の処理
	void Last_page_termination(){
		Debug.Log ("全ページ数を読み終わった");
		story_last_until_read = true;//最後のページを読み終わったことを示すフラグをtrueにした。
		camera_boot.SetActive (false);//全てのページを読み終わったので、カメラを使うボタンを非表示にする。
		storySelectController.GetColorPanel.SetActive(false);
	}
}
