using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ParticleDestroyer : MonoBehaviour {

	private int destroy_time=0;//削除する時間

	// Use this for initialization
	void Start () {
		StartCoroutine ("AutoEffectDestroyer");
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	//自動的に数秒でエフェクトを削除する機能
	IEnumerator AutoEffectDestroyer(){
		if (gameObject.tag == "drawEffect") destroy_time = 1;//線を描く際に発生するエフェクトの場合は2秒で削除
		yield return new WaitForSeconds (destroy_time);//処理を指定した時間だけ止める処理
		Destroy (gameObject);//アタッチされたオブジェクトは削除される
	}
}
