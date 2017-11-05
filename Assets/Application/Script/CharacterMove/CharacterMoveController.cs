using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterMoveController : MonoBehaviour {

	private float move_time_crab;//動く時間
	private float move_time_saru;
	private bool once_process=false;
	public bool move1_crab=true;
	public bool move1_saru=true;

	//アニメーション関連
	[SerializeField]
	Animator animator_crab;
	[SerializeField]
	Animator animator_saru;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (gameObject.tag == "crab") {
			if (move1_crab == true)
				Move1_Crab ();
		} else if (gameObject.tag == "saru") {
			if (move1_saru == true)
				Move1_Saru ();
		}
	}

	//動きパターン1
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

	void Move1_Saru(){
		move_time_saru += Time.deltaTime;
		if (move_time_saru > 4 && move_time_saru < 8) {
			transform.Translate (-2 * Time.deltaTime, 0, 0);
		} else if(move_time_saru>8){
			move1_saru = false;
			move_time_saru = 0;
		}
	}
}
