using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SaruController : MonoBehaviour {
	//移動処理関連
	private float move_time;//動く時間
	private bool once_process=false;
	public bool move1 = true;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if(move1==true) Move1 ();
	}

	//動き一つ目
	void Move1(){
		move_time += Time.deltaTime;
		if (move_time > 4 && move_time < 8) {
			transform.Translate (-2 * Time.deltaTime, 0, 0);
		} else if(move_time>8){
			move1 = false;
			move_time = 0;
		}
	}
}
