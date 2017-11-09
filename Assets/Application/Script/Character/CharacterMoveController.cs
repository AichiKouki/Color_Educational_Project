using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterMoveController : MonoBehaviour {

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

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		//キャラクターによって動く時間とかを変更している。
		if (gameObject.tag == "crab") {
			if (move1_crab == true)
				Move1_Crab ();
		} else if (gameObject.tag == "saru") {
			if (move1_saru == true)
				Move1_Saru ();
		}
	}

	//カニの動きパターン1
	void Move1_Crab(){
		move_time_crab += Time.deltaTime;
		if (move_time_crab < 4) {
			transform.Translate (-1 * Time.deltaTime, 0, 0);
		} else if(once_process==false){
			once_process = true;
			animator_crab.SetTrigger ("Idle");
			move1_crab = false;
			move_time_crab = 0;
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
}
