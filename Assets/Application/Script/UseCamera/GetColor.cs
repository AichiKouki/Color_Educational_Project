using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
//Texture2D.ReadPixelsで画面のピクセルが取得できるので、その１ドットだけ取得して色を抽出している。
public class GetColor : MonoBehaviour
{
	public Color color;
	private Texture2D tex = null;

	[SerializeField]
	Image testImage;

	void Start()
	{
		tex = new Texture2D(1,1, TextureFormat.RGB24, false);
		StartCoroutine ("OnPostRender");
	}

	void Update(){
		Debug.Log ("R="+color.r*255+"G="+color.g*255+"B="+color.b*255);//インスペクタからの場合RGBの最高値は255だが、スクリプトの場合最高値が1である。だから、スクリプトから取得する場合255かける必要がある。

		testImage.color = new Color(color.r*255/255,color.g*255/255,color.b*255/255,255/255);
		//testImage.color=new Color(255/255,0/255,0/255,255/255);
	}

	IEnumerator OnPostRender(){
		while (true) {
			//レンダリングが完了するまで待つ
			yield return new WaitForEndOfFrame();//これをしないとエラーがでる
			Vector2 pos = Input.mousePosition ;
			//tex.ReadPixels(new Rect(pos.x, pos.y, 1, 1), 0, 0);
			tex.ReadPixels(new Rect(670, 377, 1, 1), 0, 0);//(670,377)がiPhone 6Sの真ん中の座標となる
			//tex.ReadPixels(new Rect(screenToWorldPointPosition.x, screenToWorldPointPosition.y, 1, 1), 0, 0);
			color = tex.GetPixel(0,0);
			//Debug.Log (pos);
		}
	}
}