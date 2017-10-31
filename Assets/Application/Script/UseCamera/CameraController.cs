using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour  {
	public WebCamTexture webCameraTexture = null;
	public GameObject plane;

	// Use this for initialization
	void Start ()
	{
		webCameraTexture = new WebCamTexture ();
		plane.GetComponent<Renderer>().material.mainTexture = webCameraTexture;
		webCameraTexture.Play ();
	}

	// Update is called once per frame
	void Update ()
	{

	}
}