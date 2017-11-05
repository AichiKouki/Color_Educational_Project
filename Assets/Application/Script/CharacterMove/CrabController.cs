using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CrabController : MonoBehaviour {
	//移動処理関連
	private float move_time;//動く時間
	private bool once_process=false;
	public bool move1=true;

	//アニメーション処理関連
	public Animator animator;

	// Use this for initialization
	void Start () {
		//animator.GetComponent<Animator> ();
	}
	
	// Update is called once per frame
	void Update () {
		if (move1 == true) Move1 ();
	}

	//動きパターン1
	void Move1(){
		move_time += Time.deltaTime;
		if (move_time < 4) {
			transform.Translate (-1 * Time.deltaTime, 0, 0);
		} else if(once_process==false){
			once_process = true;
			animator.SetTrigger ("Idle");
			move1 = false;
			move_time = 0;
		}
	}
}
