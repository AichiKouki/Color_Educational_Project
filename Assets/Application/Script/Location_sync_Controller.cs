using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Location_sync_Controller : MonoBehaviour {

	// 位置座標
	private Vector3 position;

	// スクリーン座標をワールド座標に変換した位置座標
	private Vector3 screenToWorldPointPosition;

	// rayが届く範囲
	public float distance = 100f;

	//動かすオブジェクト関連
	public GameObject ImageCube;//一名めのオブジェクト
	public GameObject ImageCube2;//二つ目のオブジェクト

	//Rayの衝突で処理しているので、①枚目の画像移動中にRayが②枚目に当たったら二枚目が移動してしまう問題を修正
	private bool first_processing=false;//一個目の写真を処理している最中か
	private bool second_processing=false;//②こ目の写真を処理している最中か
	//Rayが遮られないように、移動中のオブジェクトのz軸を少し手前に移動させるため
	Vector3 ImageCubePos;//一個めの写真のポジションを格納
	Vector3 ImageCube2Pos;//二つめの写真のポジションを格納

	void Update () {

		Location_sync ();//位置を同期させる処理
	}


	//位置を同期させる処理
	void Location_sync(){
		if (Input.GetMouseButton (0)) {

			//他の写真に影響を与えないための処理

			// クリックしたスクリーン座標をrayに変換
			Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);
			// Rayの当たったオブジェクトの情報を格納する
			RaycastHit hit = new RaycastHit ();
			// Vector3でマウス位置座標を取得する
			position = Input.mousePosition;
			// Z軸修正
			position.z = 10f;
			// マウス位置座標をスクリーン座標からワールド座標に変換する
			screenToWorldPointPosition = Camera.main.ScreenToWorldPoint (position);

			// オブジェクトにrayが当たった時
			if (Physics.Raycast (ray, out hit, distance)) {
				// rayが当たったオブジェクトの名前を取得
				string objectName = hit.collider.gameObject.name;
				//Rayに当たったオブジェクトによって、動かすオブジェクとを変更する。
				if (objectName == "Cube" && second_processing==false) {
					// ワールド座標に変換されたマウス座標を代入
					ImageCube.gameObject.transform.position = screenToWorldPointPosition;
					first_processing = true;//一個目の写真を移動していることを知らせるフラグ
					ImageCubePos=new Vector3(ImageCube.transform.position.x,ImageCube.transform.position.y,-2);
					ImageCube.transform.position = ImageCubePos;

					//丸い写真側のオブジェクトをそうさしていて、もう片方の写真を操作していなかったら処理
				} else if (objectName == "Image_Cylinder" && first_processing==false) {
					ImageCube2.gameObject.transform.position = screenToWorldPointPosition;//二つねの写真のポジションをマウスの位置を同期させる
					second_processing = true;//二つ目の写真を移動していることを知らせる処理
					ImageCube2Pos=new Vector3(ImageCube2.transform.position.x,ImageCube2.transform.position.y,-2);
					ImageCube2.transform.position = ImageCube2Pos;//z軸を少しずらしたポジションを新たに適応させる

				}
				Debug.Log (objectName);//Rayに触れているオブジェクト名を取得
			}
		} else if (Input.GetMouseButtonUp(0)) {//ボタンを話した時の処理
			//処理中華どうかのリセット
			first_processing = false;
			second_processing = false;

			//Rayが遮られないように、z軸の位置調整を下ので、元に戻す処理
			ImageCubePos=new Vector3(ImageCube.transform.position.x,ImageCube.transform.position.y,0);
			ImageCube2Pos=new Vector3(ImageCube2.transform.position.x,ImageCube2.transform.position.y,0);
			ImageCube.transform.position = ImageCubePos;
			ImageCube2.transform.position = ImageCube2Pos;

		}
	}
}
