#if UNITY_EDITOR_OSX || UNITY_EDITOR_WIN
using System.Runtime.InteropServices;
using UnityEditor;
using UnityEngine;
using System.IO;

namespace Kakera
{
	internal class Picker_editor : IPicker
	{ 
		public void Show(string title, string outputFileName, int maxSize)
		{
			var path = EditorUtility.OpenFilePanel(title, "","png");
			if (path.Length != 0) {
				string destination = Application.persistentDataPath + "/" + outputFileName;
				if (File.Exists(destination))
					File.Delete(destination);
				File.Copy(path, destination);
				Debug.Log ("PickerOSX:" + destination);
				if (title == "Select Image") {//自分の編集部分。元のコードが、receiverにUnimgpickerとなっていた。二つの画像を読み込みたいので、Unimgpicker2も作成したので、使うスクリプトファイルによって条件分岐する
					var receiver = GameObject.Find ("Unimgpicker");//ここが、画像を帰る空のオブジェクトを見つける処理
					receiver.SendMessage("OnComplete", Application.persistentDataPath + "/" + outputFileName);
				} else if (title == "Select Image2") {//自分が追加した部分
					var receiver = GameObject.Find ("Unimgpicker2");//ここが、画像を帰る空のオブジェクトを見つける処理
					receiver.SendMessage("OnComplete", Application.persistentDataPath + "/" + outputFileName);
				}
				/*
				if (receiver != null)
				{
					receiver.SendMessage("OnComplete", Application.persistentDataPath + "/" + outputFileName);
				}
				*/
			}
		}
	}
}
#endif