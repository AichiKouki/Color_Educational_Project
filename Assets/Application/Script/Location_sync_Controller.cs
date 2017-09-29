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

	void Update () {

		Location_sync ();//位置を同期させる処理
	}


	//位置を同期させる処理
	void Location_sync(){
		if (Input.GetMouseButton (0)) {
			// クリックしたスクリーン座標をrayに変換
			Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
			// Rayの当たったオブジェクトの情報を格納する
			RaycastHit hit = new RaycastHit();
			// Vector3でマウス位置座標を取得する
			position = Input.mousePosition;
			// Z軸修正
			position.z = 10f;
			// マウス位置座標をスクリーン座標からワールド座標に変換する
			screenToWorldPointPosition = Camera.main.ScreenToWorldPoint (position);

			// オブジェクトにrayが当たった時
			if (Physics.Raycast(ray, out hit, distance)) {
				// rayが当たったオブジェクトの名前を取得
				string objectName = hit.collider.gameObject.name;
				//Rayに当たったオブジェクトによって、動かすオブジェクとを変更する。
				if (objectName == "Cube") {
					// ワールド座標に変換されたマウス座標を代入
					ImageCube.gameObject.transform.position = screenToWorldPointPosition;

				} else if (objectName == "Cube2") {
					ImageCube2.gameObject.transform.position = screenToWorldPointPosition;
				}
				Debug.Log(objectName);
			}
		}
	}
}
