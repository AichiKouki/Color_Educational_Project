using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CrabController : MonoBehaviour {
	//移動処理関連
	private float move_time;//動く時間
	private bool once_process=false;

	//アニメーション処理関連
	public Animator animator;

	// Use this for initialization
	void Start () {
		//animator.GetComponent<Animator> ();
	}
	
	// Update is called once per frame
	void Update () {
		move_time += Time.deltaTime;
		if (move_time < 4) {
			transform.Translate (-1 * Time.deltaTime, 0, 0);
		} else {//動き終わったらIdleアニメーション再生
			if(once_process==false)animator.SetTrigger ("Idle");
			once_process = true;
		}
	}
}
