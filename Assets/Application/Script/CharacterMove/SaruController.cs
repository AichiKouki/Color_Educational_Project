using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SaruController : MonoBehaviour {
	//移動処理関連
	private float move_time;//動く時間
	private bool once_process=false;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		move_time += Time.deltaTime;
		if (move_time > 4 && move_time<8) {
			transform.Translate (-2 * Time.deltaTime, 0, 0);
		}
	}
}
