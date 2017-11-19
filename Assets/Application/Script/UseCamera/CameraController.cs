using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CameraController : MonoBehaviour  {
	public WebCamTexture webCameraTexture = null;
	//public GameObject plane;
	//[SerializeField]
	//Image image;
	[SerializeField]
	RawImage camera_videos_Image;

	// Use this for initialization
	void Start ()
	{
		webCameraTexture = new WebCamTexture (750,1334,30);//幅、高さ、FPSを引数に入れている(iPhone6Sの値)
		//image.material.mainTexture = webCameraTexture;//mainTextureでやってしまうと、他のImageにも同じ映像が表示されてしまう
		camera_videos_Image.texture=webCameraTexture;
		webCameraTexture.Play ();
	}

	// Update is called once per frame
	/*
	void Update ()
	{

	}
	*/
}