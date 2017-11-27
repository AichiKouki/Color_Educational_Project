using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Profiling;//処理を軽くするに
//画面に線を絵画する処理
public class DrawLineController : MonoBehaviour
{

	public GameObject[] linePrefab;//黒とか赤とか青のインクオブジェクトを入れる。
	public float lineLength = 0.2f;//最低限この距離を書かないと絵画されない
	public float lineWidth = 0.1f;//線の太さ

	private Vector3 touchPos;//マウスを使っている間のポジションを格納

	//線を引く際のエフェクト
	public GameObject[] effectPre;//絵画する時に使うエフェクトをここに格納する。
	GameObject effect;

	//全ての線を格納する空のオブジェクト指定
	public GameObject summarize_object;

	//操作説明シーンで、線がかけたかどうか判定処理
	public bool painting_termination=false;//線を書いた瞬間(絵画時間が0.01秒以上ならフラグを変更する)
	private float draw_time;//絵画している時間を格納

	//いっぱい複製したオブジェクトを空のオブジェクトにまとめる
	public GameObject summarize_linePre;//下に落ちる線の一個一個のオブジェクトをまとめる
	GameObject summarize_ink_NoGravity;//線の中の一個一個のオブジェクトをまとめるオブジェクト

	//消しゴム機能の処理関連
	public GameObject eraser;//消しゴムのアイコン
	private Vector3 screenToWorldPointPosition;//マウスと消しゴムの位置を同期させるための処理
	public float distance = 100f;//最低でもこの距離を絵画しないと絵画されない
	GameObject deleting_target_object;//消しゴムを使っている状態で、Rayが衝突したものを削除対象のオブジェクト

	//どの機能を選択しているか
	private string selected_feature="drawLine";//線を描く機能と消しゴム機能どちらを選んでいるか

	//色の変更処理関連
	public int changeColorNum=0;//インク自体の配列の添え字の部分
	private int changeColorEffectNum=0;//線を描いた時のエフェクトの配列の添え字

	//描いた線を一つ前に戻す処理関連
	private int summarize_ink_NoGravity_number=1;//線を作る一つ一つのオブジェクトをまとめる空オブジェクトを全て異なる名前にするため(描いた線を一つ前に戻す処理に必要)
	private int delete_object_number;//描いた回数と線を作る一つ一つのオブジェクトをまとえる空のオブジェクトの名前の数値の部分を比較して一個前の線の状態を表現する処理に必要
	GameObject recent_object_pre;//最後に描いた線たちをまとめるオブジェクト(親)
	GameObject recent_object;//最後に書いた線を格納する

	//線を全て削除する処理に必要なもの
	[SerializeField]
	Transform summarize_object_parent;

	void Start(){
		effect = gameObject;//エフェクトは最初から生成されている訳ではないので、てきとうに初期化
		selected_feature="drawLine";//デフォルトは線を描く機能を選択する。
	}

	void Update (){
		//選択されている機能によって、呼び出す機能を変更する。
		if (selected_feature == "drawLine")
			drawLine ();//線を絵画する処理
		else if (selected_feature == "eraser")
			Eraser ();//消しゴム機能を担う処理
		//Debug.Log("線に名前をつけた時の番号は"+summarize_ink_NoGravity_number);//線に名前をつけた時の番号を表示
		//Debug.Log("削除する線の名前の番号は"+delete_object_number);//削除する線の番号を表示する
		Debug.Log("summarize_line" + (summarize_ink_NoGravity_number-1));
	}

	//会がスタートから終了までの処理全般
	void drawLine(){
		Profiler.BeginSample ("線を絵画する処理のループ処理");//BeginSampleとEndSampleの間の処理をサンプリングすることができる
		if(Input.GetMouseButtonDown(0))//マウスが押したら(一度だけ)
		{
			touchPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);//UIの座標をワールド座標に変換して代入する
			touchPos.z=0;//2Dなので、奥行きは無視する
			summarize_ink_NoGravity = (GameObject)Instantiate (summarize_linePre,transform.position,Quaternion.identity);
			summarize_ink_NoGravity.gameObject.name = "summarize_line" + summarize_ink_NoGravity_number;//線を作る一つ一つのオブジェクトをまとめる空オブジェクトを全て異なる名前にするため(描いた線を一つ前に戻す処理に必要)
			summarize_ink_NoGravity.transform.parent=gameObject.transform;//インクをまとめるオブジェクトはこのスクリプトがアタッチされてるオブジェクトの子要素にする。
			summarize_ink_NoGravity_number++;//線を作る一つ一つのオブジェクトをまとめる空のオブジェクトの名前を異なるようにするために数値の部分を加算する。
		}

		//線を絵画している最中の処理
		if(Input.GetMouseButton(0))
		{

			Vector3 startPos = touchPos;//一番最初の座標は42行目での処理で、スクリーン座標を取得している
			Vector3 endPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);//ボタンを押している間取得し続ける
			endPos.z=0;//2Dなので、z軸の座標は常に0に設定する。

			if((endPos-startPos).magnitude > lineLength){//最後のポジションから最初にクリックされたポジションの差が、指定した長さより長かったら処理
				GameObject obj = Instantiate(linePrefab[changeColorNum], transform.position, transform.rotation) as GameObject;//線を作る3Dオブジェクトを作成
				obj.transform.position = (startPos+endPos)/2;
				obj.transform.right = (endPos-startPos).normalized;//ベクトルを正規化

				obj.transform.localScale = new Vector3( (endPos-startPos).magnitude, lineWidth , lineWidth );//何かの子要素に作成するので、相対的なサイズ

				summarize_ink_NoGravity.transform.parent = summarize_object.transform;//一個一個のオブジェクトを空のオブジェクトにまとめる。これでバラバラにならない。
				obj.transform.parent = summarize_ink_NoGravity.transform;//線をまとめたオブジェクトをさらに空のオブジェクトにまとめる

				touchPos = endPos;//マウスのポジションを、マウスが押されている間、更新し続ける

				//線を引く際のエフェクト生成
				changeColorEffectNum=changeColorNum;//インク自体とエフェクトの配列の添え字は同いなので、それを利用する
				effect=(GameObject)Instantiate(effectPre[changeColorEffectNum],obj.transform.position,Quaternion.identity);

				//描いてる時間を測定
				draw_time+=Time.deltaTime;

			}
		}

		//書き終わるたびに処理
		if (Input.GetMouseButtonUp (0)) {
			if (draw_time > 0.01f) {//書いている時間が0.01fだったた処理
				painting_termination = true;//ここで、線を絵画したことを知らせる
			}
		}
		Profiler.EndSample ();//ここまでの負荷をみる

	}//drawLine

	//消しゴム機能を実装
	void Eraser(){
		if (Input.GetMouseButton(0)) {//クリックされている間処理
			// クリックしたスクリーン座標をrayに変換
			Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);//マウスのポジションに光線を作成
			// Rayの当たったオブジェクトの情報を格納する
			RaycastHit hit = new RaycastHit();
			// Rayの可視化
			Debug.DrawRay(ray.origin, ray.direction, Color.red, 3.0f);

			//消しゴムの画像とマウスのポジションを同期させる(消しゴムはただ表示しているだけでこの画像に衝突判定はない)
			eraser.transform.position = Input.mousePosition;
			// オブジェクトにrayが当たった時に処理
			if (Physics.Raycast(ray, out hit, distance)){
			//if(Physics.SphereCast(ray, 5.0f, out hit, 10.0f)) {//球型のRayを作成する
				// rayが当たったオブジェクトの名前を取得
				string objectName = hit.collider.gameObject.name;//Rayに衝突したオブジェクト名を格納する
				deleting_target_object=hit.collider.gameObject;//Rayに衝突したオブジェクトを格納する
				Destroy(deleting_target_object);//Rayに衝突したオブジェクトを削除する
				Debug.Log(objectName);//Rayが衝突したオブジェクトの名前を取得
			}
		}
	}

	//線を描くボタンを選択したら処理
	public void DrawLineButton(){
		selected_feature = "drawLine";
		eraser.SetActive (false);//線を描く機能ボタンを押したら、消しゴムは非表示にする
	}

	//消しゴムボタンを選択したら処理
	public void EraserButton(){
		selected_feature = "eraser";
		eraser.SetActive (true);//消しゴムを使う機能を選択したら、消しゴムを表示する。
	}

	//一つ前に戻る処理のボタン
	public void Back_before_one(){
		delete_object_number = summarize_ink_NoGravity_number - 1;
		Debug.Log ("オブジェクトの数値の部分は"+delete_object_number);
		recent_object_pre = GameObject.Find ("summarize_object");//線をまとめるオブジェクトを取得(親)
		recent_object=recent_object_pre.transform.Find("summarize_line" + (summarize_ink_NoGravity_number-1)).gameObject;//上の線をまとめるオブジェクトの中に線があるので、子要素を取得
		Destroy (recent_object);
		summarize_ink_NoGravity_number--;//線のオブジェクトを削除したら名前の数値の部分も減らす
	}

	//シーン再読み込みではなく、線をまとめるオブジェクトの子要素を全て削除して、線を全て削除する方法をとる
	public void Line_all_deletion(){
		foreach ( Transform n in summarize_object_parent.transform )//線をまとめるオブジェクトを指定して、その空のオブジェクトの子要素を全て取得して、それらを削除して全削除を実現し
		{
			GameObject.Destroy(n.gameObject);
		}
	}

}
