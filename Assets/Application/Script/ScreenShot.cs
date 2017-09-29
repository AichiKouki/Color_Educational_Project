using System.Collections;
using System.IO;
using System;
using UnityEngine.UI;
using UnityEngine;

public class ScreenShot : MonoBehaviour {
	public Camera ArCam;//カメラのプレファブ

	//ここを呼び出すことによって、UIをのぞいた部分のスクリーンショットができる
	public void CaptchaScreen()
	{
		Texture2D screenShot = new Texture2D(Screen.width, Screen.height, TextureFormat.RGB24, false);
		RenderTexture rt = new RenderTexture(screenShot.width, screenShot.height, 24);
		RenderTexture prev = ArCam.targetTexture;
		ArCam.targetTexture = rt;
		ArCam.Render();
		ArCam.targetTexture = prev;
		RenderTexture.active = rt;
		screenShot.ReadPixels(new Rect(0, 0, screenShot.width, screenShot.height), 0, 0);
		screenShot.Apply();

		byte[] bytes = screenShot.EncodeToPNG();
		UnityEngine.Object.Destroy(screenShot);

		//スクショが保存される場所
		//Users/[ユーザ名]/Library/Application Support/[Company Name]/[Product Name]
		///Users/aichitakumiki/Library/Application Support/DefaultCompany/HUE_Educational_Project
		string fileName = "cap_" + DateTime.Now.ToString("screenSoot") + ".png";//DataTime.Now.ToStringは、現在の時間をファイル名にしている

		//File.WriteAllBytesで、ローカルにファイルを保存できる
		//persistentDataPathは実行中に保存されるファイルがあるパス。アプリ内での永続的なデータを保存するパス
		File.WriteAllBytes(Application.persistentDataPath + "/" + fileName, bytes);
	}
}