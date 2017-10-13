using UnityEngine;
using System;//Convertを使うからインポートする
using System.Collections;

public class ColorPicker : MonoBehaviour {
	public Texture2D colorPicker;
	public int ImageWidth = 100;
	public int ImageHeight = 100;

	void OnGUI(){
		//ここで、ポジションとサイズを設定している
		if (GUI.RepeatButton(new Rect(500, 500, ImageWidth, ImageHeight), colorPicker)) {
			Vector2 pickpos = Event.current.mousePosition;
			//文字から数値に変換
			//int aaa = Convert.ToInt32(pickpos.x);
			//int bbb = Convert.ToInt32(pickpos.y);
			int aaa=Convert.ToInt64(pickpos.x);
			int bbb=Convert.ToInt64(pickpos.y);
			Color col = colorPicker.GetPixel(aaa,41-bbb);

			Debug.Log(col);
		}
	}
}