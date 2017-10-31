using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GetColor : MonoBehaviour
{
	public Color color;
	private Texture2D tex = null;

	void Start()
	{
		tex = new Texture2D(1,1, TextureFormat.RGB24, false);
		StartCoroutine ("OnPostRender");
	}

	void Update(){
		//Debug.Log (color);
	}

	IEnumerator OnPostRender(){
		while (true) {
			//レンダリングが完了するまで待つ
			yield return new WaitForEndOfFrame();
			Vector2 pos = Input.mousePosition ;
			//tex.ReadPixels(new Rect(pos.x, pos.y, 1, 1), 0, 0);
			tex.ReadPixels(new Rect(670, 377, 1, 1), 0, 0);//(670,377)がiPhone 6Sの真ん中の座標となる
			//tex.ReadPixels(new Rect(screenToWorldPointPosition.x, screenToWorldPointPosition.y, 1, 1), 0, 0);
			color = tex.GetPixel(0,0);
			Debug.Log (pos);
		}
	}
}