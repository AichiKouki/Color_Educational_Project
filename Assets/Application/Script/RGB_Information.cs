using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//このプロジェクトで使用する色のRGGBデータをまとめたクラス。このクラスのGet_RGBメソッドを呼び出せば、指定された色のRGBがreturnされる。
public class RGB_Information {
	 
	public static float[] Get_RGB(string color){//staticなメソッド。外部クラスでインスタンス化しなくてもいい。
		if (color == "あか") {
			float[] RGB_data = new float[]{ 255f, 0f, 0f };
			return RGB_data;
		} else if (color == "きいろ") {
			float[] RGB_data = new float[]{ 255f,255f,0f};
			return RGB_data;
		}else if (color == "みどり") {
			float[] RGB_data = new float[]{ 0f,200f,0f};
			return RGB_data;
		}else if (color == "シアン") {
			float[] RGB_data = new float[]{ 143f,251f,253f};
			return RGB_data;
		}else if (color == "あお") {
			float[] RGB_data = new float[]{ 60f,100f,255f};
			return RGB_data;
		}else if (color == "もも") {
			float[] RGB_data = new float[]{ 220f,115f,160f};
			return RGB_data;
		}else if (color == "オレンジ") {
			float[] RGB_data = new float[]{ 242f,167f,59f};
			return RGB_data;
		}else if (color == "きみどり") {
			float[] RGB_data = new float[]{ 0f,255f,0f};
			return RGB_data;
		}else if (color == "あおみどり") {
			float[] RGB_data = new float[]{ 72f,161f,151f};
			return RGB_data;
		}else if (color == "みずいろ") {
			float[] RGB_data = new float[]{ 142f,252f,251f};
			return RGB_data;
		}else if (color == "むらさき") {
			float[] RGB_data = new float[]{ 140f,35f,197f};
			return RGB_data;
		}else if (color == "あかむらさき") {
			float[] RGB_data = new float[]{ 118f,41f,80f};
			return RGB_data;
		}else if (color == "モノトーン") {
			float[] RGB_data = new float[]{ 255f,255f,255f};//とりあえず黒に設定。
			return RGB_data;
		}else {//これをしないと、returnを返さない通り道があるのでここの部分を忘れない。(RGB_Information.Get_RGB(string)': not all code paths return a value)
			float[] RGB_data = new float[]{ 0f, 0f, 0f };
			return RGB_data;
		}

	}
}

