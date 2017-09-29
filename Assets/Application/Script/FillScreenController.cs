using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FillScreenController : MonoBehaviour {
	public Image image;

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	//画面にフィットさせる
	public void FillScreen()
	{
		//SpriteRenderer sr = GetComponent<SpriteRenderer>();

		// カメラの外枠のスケールをワールド座標系で取得
		float worldScreenHeight=Camera.main.orthographicSize*2f;
		float worldScreenWidth=worldScreenHeight/Screen.height*Screen.width;

		// スプライトのスケールもワールド座標系で取得
		float width  = image.sprite.bounds.size.x;
		float height = image.sprite.bounds.size.y;

		//  両者の比率を出してスプライトのローカル座標系に反映
		transform.localScale = new Vector2(worldScreenWidth / width, worldScreenHeight / height);

		// カメラの中心とスプライトの中心を合わせる
		Vector2 camPos = Camera.main.transform.position;
		transform.position = camPos;
	}
}
