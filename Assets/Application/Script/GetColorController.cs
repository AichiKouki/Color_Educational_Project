using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GetColorController : MonoBehaviour {

	public SerialController serialController;//シリアル通信を行うスクリプト
	private int r;
	private int g;
	private int b;
	public Text R_Label;
	public Text G_Label;
	public Text B_Label;

	public Image color_Display_Image;//センサーから取得した値を使って、色を反映させるためのImageのUI

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		//直接RGBを読み取っている処理
		this.r = serialController.r;
		this.g = serialController.g;
		this.b = serialController.b;
		//数値調整処理
		//rの数値の調整
		if (r < 0) r = 0;
		else if (r > 255) r = 255;
		//gの値の調整
		if(g<0) g=0;
		else if(g>255) g=255;
		//bの値の調子
		if(b<0) b=0;
		else if(b>255) b=255;

		//　調整した後の値を実際に設定する
		R_Label.text = "" + this.r;
		G_Label.text = "" + this.g;
		B_Label.text = "" + this.b;

		//取得したRGB値を使って、UIのImageのcolorの部分を変更している
		color_Display_Image.color=new Color(this.r/255,this.g/255,this.b/255,255/255);

	}
}
