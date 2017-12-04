using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterMoveController : MonoBehaviour {

	//移動処理関連。
	private float move_time_crab;//カニの動く時間
	private float move_time_saru;//猿の動く時間
	private bool once_process=false;//移動が終了したあとに一度だけアニメーション再生処理をしたいので、このフラグを用意
	//以下のフラグをPageControllerから変更することによって、任意のタイミングでキャラクターの指定した動きを再生することができる。
	public bool move1_crab=true;//移動の許可フラグ。移動が終了したらfalseになる
	public bool move1_saru=true;//移動の許可フラグ。移動が終了したらfalseになる

	//アニメーション関連
	[SerializeField]
	Animator animator_crab;//カニのAnimator
	[SerializeField]
	Animator animator_saru;//猿のAnimator

	//少しジャンプさせる処理
	Rigidbody2D rigid2D;

	//フェードインで表示させるため
	SpriteRenderer spriteRenderer;
	private float fadeIn_value=0;//フェードインでのオブジェクトの透明度を扱う、
	private float time_starting_fadeIn;//フェードインを開始するまでの時間。
	private bool is_fadeIn=true;//フェードインをするかどうかのフラグ

	// Use this for initialization
	void Start () {
		rigid2D = GetComponent<Rigidbody2D> ();
		if (gameObject.tag == "crab_rigid") StartCoroutine ("Move2_Crab");//タグがcrab_rigidの場合はジャンプする処理を開始する。
		//ブルブル震えるような動き
		if (gameObject.name == "crab_vibrate" || gameObject.name=="saru_dark" || gameObject.name=="saru") StartCoroutine ("Vibrate");

		spriteRenderer = GetComponent<SpriteRenderer> ();//フェードインで表示させるために使う。
	}

	// Update is called once per frame
	void Update () {
		//キャラクターによって動く時間とかを変更している。
		if (gameObject.tag == "crab") {//スクリプトをアタッチしてるオブジェクトがカニだったら、
			if (move1_crab == true)
				Move1_Crab ();
		} else if (gameObject.tag == "saru") {//スクリプトがアタッチされてるオブジェクトのタグがsaruだったら処理
			if (move1_saru == true)
				Move1_Saru ();
		}
			
		//芽であればフェードインで登場させる
		if ((gameObject.name=="tree_NoBackground" || gameObject.name=="saru_dark") && is_fadeIn==true) Appearance_at_FadeIn ();
	}

	//カニの動きパターン1
	void Move1_Crab(){
		move_time_crab += Time.deltaTime;
		if (move_time_crab < 4) {//4秒までは横に移動する
			transform.Translate (-1 * Time.deltaTime, 0, 0);
		} else if(once_process==false){//4秒より時間がすぎたら、移動をやめてIdleアニメーションにする。
			once_process = true;//一度だけ処理するためのフラグ
			animator_crab.SetTrigger ("Idle");//Idleアニメーションに変更
			move1_crab = false;//移動をやめるためのフラグ変更
			move_time_crab = 0;//移動する時間をリセットする。
		}
	}

	//カニの動きパターン2(AddForceでカニを少しジャンプさせる)
	IEnumerator Move2_Crab(){
		yield return new WaitForSeconds (2);//ページを変更する際は、ふぇーどいんとフェードアウトをしているので、その関係で、数秒たってからジャンプする処理をする。
		rigid2D.AddForce (Vector2.up*300f);//少し上におす
	}

	//定期的にブルブル震えているような動き
	IEnumerator Vibrate(){
		while (true) {//ブルブルを永遠に繰り返す。
			for (int i = 1; i < 5; i++) {
				if (!(i % 2 == 0))
					transform.Translate (0, 0.5f, 0);
				else
					transform.Translate (0,-0.5f,0);
				yield return new WaitForSeconds (0.1f);//0.1秒感覚で震える。
			}
			yield return new WaitForSeconds (1);//1秒ずつ動く。
		}
	}

	//猿の動きパターン1
	void Move1_Saru(){
		move_time_saru += Time.deltaTime;
		if (move_time_saru > 4 && move_time_saru < 8) {//カニの移動が終了してから動くので、4〜8秒の間に移動する
			transform.Translate (-2 * Time.deltaTime, 0, 0);//実際の移動処理
		} else if(move_time_saru>8){//8秒たったら移動を終了して、フラグ変更して、移動時間をリセットする。
			move1_saru = false;
			move_time_saru = 0;
		}
	}

	//フェードインして登場するキャラクターやそのほか。
	void Appearance_at_FadeIn(){
		time_starting_fadeIn += Time.deltaTime;//フェードインは数秒後に開始したいので、そのための時間計算。
		if (time_starting_fadeIn > 2 && time_starting_fadeIn < 5) {//2〜3秒の間にフェードインの処理をする。
			spriteRenderer.color = new Color (255 / 255, 255 / 255, 255 / 255, fadeIn_value / 255);
			if (fadeIn_value < 255) fadeIn_value += 3f;//実際に透明度を計算。
		} else if (time_starting_fadeIn > 5) {//4秒後にはフェードインを終了するための処理をしている。
			is_fadeIn = false;//フェードインをするかのフラグをオフにする
		}
	}
}
