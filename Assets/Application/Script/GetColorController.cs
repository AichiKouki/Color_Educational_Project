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

	public Image color_Display_Image;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		this.r = serialController.r;
		this.g = serialController.g;
		this.b = serialController.b;
		R_Label.text = "" + this.r;
		G_Label.text = "" + this.g;
		B_Label.text = "" + this.b;

		color_Display_Image.color=new Color(this.r/255,this.g/255,this.b/255,255/255);

	}
}
