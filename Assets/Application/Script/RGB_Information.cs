using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RGB_Information {
	 
	public static float[] Get_RGB(string color){
		if (color == "オレンジ") {
			float[] RGB_data = new float[]{ 220f, 115f, 160f };
			return RGB_data;
		} else {
			float[] RGB_data = new float[]{ 0f, 0f, 0f };
			return RGB_data;
		}
	}
}
