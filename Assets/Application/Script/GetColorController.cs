using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GetColorController : MonoBehaviour {

	public SerialController serialController;//シリアル通信を行うスクリプト
	public Text R_Label;
	public Text G_Label;
	public Text B_Label;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		R_Label.text = serialController.r;
		G_Label.text = serialController.b;
		B_Label.text = serialController.b;
	}
}
