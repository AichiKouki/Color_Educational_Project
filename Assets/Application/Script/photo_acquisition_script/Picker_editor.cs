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
				if (title == "Select Image") {
					var receiver = GameObject.Find ("Unimgpicker");//ここが、画像を帰る空のオブジェクトを見つける処理
					receiver.SendMessage("OnComplete", Application.persistentDataPath + "/" + outputFileName);
				} else if (title == "Select Image2") {
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