using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ImageSaveController : MonoBehaviour {

	[SerializeField]
	UnityiOS unityIOS;

	// Use this for initialization
	void Start () {
		unityIOS.RequestPermissions_forUGUI ();//端末にカメラとカメラロールのアクセスをリクエストする処理
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
