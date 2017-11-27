using UnityEngine;
using System;//Convertを使うからインポートする
using System.Collections;

//カラーぴっかーを表示して、自由に色を選択可能にする。
public class ColorPicker : MonoBehaviour {
	public Texture2D colorPicker;
	//カラーピッカーのサイズを指定
	public int ImageWidth = 100;
	public int ImageHeight = 100;

	void OnGUI(){
		//ここで、ポジションとサイズを設定している
		if (GUI.RepeatButton(new Rect(1400, 400, ImageWidth, ImageHeight), colorPicker)) {
			Vector2 pickpos = Event.current.mousePosition;
			//文字から数値に変換
			//intParseとの違いは、nullが渡されても例外は発生しない
			int aaa = Convert.ToInt32(pickpos.x);
			int bbb = Convert.ToInt32(pickpos.y);
			Color col = colorPicker.GetPixel(aaa,41-bbb);

			Debug.Log(col);
		}
	}
}
