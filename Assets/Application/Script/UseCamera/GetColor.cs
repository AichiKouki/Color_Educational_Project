using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
//Texture2D.ReadPixelsで画面のピクセルが取得できるので、その１ドットだけ取得して色を抽出している。
public class GetColor : MonoBehaviour
{
	public Color color;
	private Texture2D tex = null;

	[SerializeField]
	Image testImage;

	//色判定処理関連
	[SerializeField]
	Text color_label;//色の名前を表示するためのUI
	private float r;//UnityエディタではRGBの最高値は255だが、スクリプト上では最高値は1なので、*255したものを扱うので、あらかじめ計算したものを扱うので、その結果を変数に入れておきたいので、宣言した。
	private float g;
	private float b;
	private string color_code="";//カラーコード
	public string color_name="";//色の名前。PageControllerからアクセスされる。

	//シーンによって読み取る座標を変更するため
	string sceneName;

	void Start()
	{
		tex = new Texture2D(1,1, TextureFormat.RGB24, false);
		StartCoroutine ("OnPostRender");//シーンが開始されたタイミングで、指定した画面の座標の色を取得する処理を開始する。
		sceneName = SceneManager.GetActiveScene ().name;//シーン名を取得
	}

	void Update(){
		//インスペクタからの場合RGBの最高値は255だが、スクリプトの場合最高値が1である。だから、スクリプトから取得する場合255かける必要がある。
		testImage.color = new Color(color.r*255/255,color.g*255/255,color.b*255/255,255/255);
		Distinction_Color ();//７えされた色が何色なのかをひらがなで表示するための処理
		//Debug.Log ("R="+color.r*255+"G="+color.g*255+"G="+color.b*255);
	}

	//指定した座標に位置する色情報を取得
	IEnumerator OnPostRender(){
		while (true) {
			//レンダリングが完了するまで待つ
			yield return new WaitForEndOfFrame();//これをしないとエラーがでる
			Vector2 pos = Input.mousePosition ;//クリックされた位置の色を取得する処理を一番最初はやっていたので、今回は使わない。
			//tex.ReadPixels(new Rect(pos.x, pos.y, 1, 1), 0, 0);
			//if(sceneName=="Use_SumahoCamera") tex.ReadPixels(new Rect(670, 377, 1, 1), 0, 0);//(670,377)がiPhone 6Sの真ん中の座標となる
			//else if(sceneName=="StoryScene") tex.ReadPixels(new Rect(200, 650, 1, 1), 0, 0);//(670,377)が左上に画面を表示した時の真ん中となる
			tex.ReadPixels(new Rect(670, 377, 1, 1), 0, 0);//画面をいっぱい使って色を読み取らせたいので、画面の真ん中の位置の座標を指定する。
			//tex.ReadPixels(new Rect(screenToWorldPointPosition.x, screenToWorldPointPosition.y, 1, 1), 0, 0);
			color = tex.GetPixel(0,0);//画面のピクセルを取得したのでその1ビットだけ取得して色を抽出した
			//Debug.Log (pos);
		}
	}

	//色を判定する処理
	void Distinction_Color(){
		r = color.r * 255;
		g = color.g * 255;
		b = color.b * 255;
		color_label.text = color_name;//常に色の名前を更新する。
		if(g==b && r>g){
			color_code = "#ff0000";
			color_name = "あか";
			//Debug.Log("あか");
			// 3-0
		}else if(r==g && r>b){
			color_code = "#ffff00";
			color_name = "きいろ";
			//Debug.Log("黄色");
			// 5-0
		}else if(r==b && g>r){
			color_code = "#00ff00";
			color_name = "みどり";
			//Debug.Log("緑");
			// 7-0
		}else if(g==b && g>r){
			color_code = "#00ffff";
			color_name = "シアン";
			//Debug.Log("シアン");
			// 9-0
		}else if(r==g && b>r){
			color_code = "#0000ff";
			color_name = "あお";
			//Debug.Log("青");
			// 11-0
		}else if(r==b && b>g){
			color_code = "#ff00ff";
			color_name = "もも";
			//Debug.Log("もも");
		}else if(r>g && g>b){
			// 1-2 G:0 ~ 4.5
			if(g/r*16 > 0 && g/r*16 <= 4.5){
				color_code = "#ff0000";
				color_name = "あか";
				//Debug.Log("あか");
			}
			// 2-1,2-2 G:4.6 ~ 12.5
			else if(g/r*16 > 4.5 && g/r*16 <= 12.5){
				color_code = "#ff7f00";
				color_name = "オレンジ";
				//Debug.Log("オレンジ");
			}
			// 3-1 G:12.6 ~ 16
			else if(g/r*16 > 12.5 && g/r*16 <= 16){
				color_code = "#ffff00";
				color_name = "きいろ";
				//Debug.Log("黄色");
			}
		}else if(g>r && r>b){
			// 3-2 R:16 ~ 12.6
			if(r/g*16 > 12.5 && r/g*16 <= 16){				
				color_code = "#ffff00";
				color_name = "きいろ";
				//Debug.Log("黄色");
			}
			// 4-1,4-2 R:12.5 ~ 4.6
			else if(r/g*16 > 4.5 && r/g*16 <= 12.5){
				color_code = "#7fff00";
				color_name = "きみどり";
				//Debug.Log("黄緑");
			}
			// 5-1 R:4.5 ~ 0
			else if(r/g*16 > 0 && r/g*16 <= 4.5){
				color_code = "#7fff00";
				color_name = "きみどり";
				//Debug.Log("黄緑");
			}
		}else if(g>b && b>r){
			// 5-2 B:0 ~ 4.5
			if(b/g*16 > 0 && b/g*16 <= 4.5){
				color_code = "#00ff00";
				color_name = "みどり";
				//Debug.Log("緑");
			}
			// 6-1,6-2 B:4.6 ~ 12.5
			else if(b/g*16 > 4.5 && b/g*16 <= 12.5){
				color_code = "#00ff7f";
				color_name = "あおみどり";
				//Debug.Log("青緑");
			}
			// 7-1 B:12.6 ~ 16
			else if(b/g*16 > 12.5 && b/g*16 <= 16){
				color_code = "#00ffff";
				color_name = "シアン";
				//Debug.Log("シアン");
			}
		}else if(b>g && g>r){
			// 7-2 G:16 ~ 12.6
			if(g/b*16 > 12.5 && g/b*16 <= 16){
				color_code = "#00ffff";
				color_name = "シアン";
				//Debug.Log("シアン");
			}
			// 8-1,8-2 G:12.5 ~ 4.6
			else if(g/b*16 > 4.5 && g/b*16 <= 12.5){
				color_code = "#007fff";
				color_name = "みずいろ";
				//Debug.Log("水色");
			}
			// 9-1 B:4.5 ~ 0
			else if(g/b*16 > 0 && g/b*16 <= 4.5){
				color_code = "#0000ff";
				color_name = "あお";
				//Debug.Log("青");
			}
		}else if(b>r && r>g){
			// 9-2 R:0 ~ 4.5
			if(r/b*16 > 0 && r/b*16 <= 4.5){
				color_code = "#0000ff";
				color_name = "あお";
				//Debug.Log("青");
			}
			// 10-1,10-2 R:4.6 ~ 12.5
			else if(r/b*16 > 4.5 && r/b*16 <= 12.5){
				color_code = "#7f00ff";
				color_name = "むらさき";
				//Debug.Log("紫");
			}
			// 11-1 B:12.6 ~ 16
			else if(r/b*16 > 12.5 && r/b*16 <= 16){
				color_code = "#ff00ff";
				//Debug.Log("あか");
			}
		}else if(r>b && b>g){
			// 11-2 B:16 ~ 12.6
			if(b/r*16 > 12.5 && b/r*16 <= 16){
				color_code = "#ff00ff";
				color_name = "もも";
				//Debug.Log("もも");
			}
			// 12-1,12-2 B:12.5 ~ 4.6
			else if(b/r*16 > 4.5 && b/r*16 <= 12.5){
				color_code = "#ff007f";
				//color_name = "あかむらさき";//●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●●本当はこの色。しかし、桃の精度が悪かったので、
				color_name="もも";
				//Debug.Log("赤紫");
				//Debug.Log("もも");
			}
			// 1-1 B:4.5 ~ 0
			else if(b/r*16 > 0 && b/r*16 <= 4.5){
				color_code = "#ff0000";
				color_name = "あか";
				//Debug.Log("あか");
			}
		}else{
			color_code = "#9f9f9f";
			color_name = "モノトーン";
			//Debug.Log("モノトーン");
		}
	}
}