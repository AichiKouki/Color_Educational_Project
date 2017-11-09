using System.Collections;
using System.IO;
using System;
using UnityEngine.UI;
using UnityEngine;

//スクリーンショットをする機能をになるプログラム
public class ScreenShot : MonoBehaviour {
	public Camera ArCam;//カメラのプレファブ

	//スクリーンショットした時に、スクショしたことをユーザーに知らせるために、ラベルをフェードインしてフェードアウトする処理
	public Text screenShotLabel;//スクリーンショットをしたことを表示するラベル
	private float screenShot_done_indicate_time;//スクリーンショットをしたことを知らせる時間
	private bool is_screenShot=false;//スクリーンショットをしたかどうかのフラグ

	void FixedUpdate(){
		if (is_screenShot==true) {//スクショしている主な部分でフラグを変更している
			Indicate_done_screenshot ();//スクリーンショットをしたことを知らせる
		}
	}

	//ここを呼び出すことによって、UIをのぞいた部分のスクリーンショットができる
	public void CaptchaScreen()
	{
		Texture2D screenShot = new Texture2D(Screen.width, Screen.height, TextureFormat.RGB24, false);
		RenderTexture rt = new RenderTexture(screenShot.width, screenShot.height, 24);
		RenderTexture prev = ArCam.targetTexture;
		ArCam.targetTexture = rt;
		ArCam.Render();//カメラのプレファブを使って、カメラレンダリングの関数を使っている
		ArCam.targetTexture = prev;//カメラの絵画先が、画面ではなくオフスクリーンになる。
		RenderTexture.active = rt;
		screenShot.ReadPixels(new Rect(0, 0, screenShot.width, screenShot.height), 0, 0);
		screenShot.Apply();//テクスチャの変更を実際に適応させる

		byte[] bytes = screenShot.EncodeToPNG();//Texure2DをPngとして保存
		UnityEngine.Object.Destroy(screenShot);

		//スクショが保存される場所
		//Users/[ユーザ名]/Library/Application Support/[Company Name]/[Product Name]
		///Users/aichitakumiki/Library/Application Support/DefaultCompany/HUE_Educational_Project
		//string fileName = "cap_" + DateTime.Now.ToString("screenShot") + ".png";//DataTime.Now.ToStringは、現在の時間をファイル名にしている
		string fileName = "スクショ" + DateTime.Now.ToString("screenShot") + ".png";//DataTime.Now.ToStringは、現在の時間をファイル名にしている
		//File.WriteAllBytesで、ローカルにファイルを保存できる
		//persistentDataPathは実行中に保存されるファイルがあるパス。アプリ内での永続的なデータを保存するパス
		File.WriteAllBytes(Application.persistentDataPath + "/" + fileName, bytes);

		//スクリーンショットをしたことを表すフラグを変更する
		is_screenShot=true;
	}

	//スクリーンショットをしたことを知らせるための処理
	void Indicate_done_screenshot(){
		screenShotLabel.text = "写真を保存しました";
		screenShot_done_indicate_time += Time.deltaTime;//上記の写真を保存しましたと表示するラベルを表示する時間
		if (screenShot_done_indicate_time > 1.5f) {//ラベルを表示する時間は1.6秒ぐらい
			screenShotLabel.text = "";//スクショをしたことを表示して1.6秒ぐらいたったら、写真保存ラベルの表示をリセットする。
			screenShot_done_indicate_time = 0;//時間をリセット
			is_screenShot = false;//スクショしたことを知らせrフラグをリセットする。
		}
	}
}