using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

//canvasにアタッチする
public class ColorPicker : MonoBehaviour {
	GameObject canvas,picker;
	float c(float f){  return f<0 ? 0 : f>256 ? 1 : f/256f; }
	void Start () {
		canvas  = GameObject.Find("Canvas"); //キャンバス
		picker  = new GameObject("Picker");  //メイン部分

		int w = 256*3-1,h=256;
		Texture2D tex = new Texture2D(w,h);
		float r,g,b,ex;
		for(int i=0;i<w;i++)for(int j=0;j<h;j++){
				r = Mathf.Max(256-i,i-512,0);
				g = i<256 ? i : Mathf.Max(512-i,0);
				b = i<512 ? Mathf.Max(i-256,0) : 768-i;
				ex= j-h/2;
				tex.SetPixel(i,j,new Color(c(r+ex) , c(g+ex) , c(b+ex) , 1));
			}
		tex.Apply();

		// ピッカーの設定
		picker.transform.parent = canvas.transform;
		Image img = picker.AddComponent<Image>();
		picker.GetComponent<RectTransform>().anchoredPosition = Vector2.zero;
		picker.GetComponent<RectTransform>().sizeDelta = new Vector2(1024,1024);
		img.sprite = Sprite.Create(tex, new Rect(0, 0, tex.width, tex.height), Vector2.zero);
	}
}