using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CameraController : MonoBehaviour  {
	public WebCamTexture webCameraTexture = null;
	public GameObject plane;
	[SerializeField]
	Image image;

	// Use this for initialization
	void Start ()
	{
		webCameraTexture = new WebCamTexture ();
		//plane.GetComponent<Renderer>().material.mainTexture = webCameraTexture;
		image.material.mainTexture = webCameraTexture;
		webCameraTexture.Play ();
	}

	// Update is called once per frame
	void Update ()
	{

	}
}