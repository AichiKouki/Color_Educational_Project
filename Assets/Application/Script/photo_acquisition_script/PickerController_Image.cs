using UnityEngine;
using System.Collections;
using UnityEngine.UI;

namespace Kakera
{
    public class PickerController_Image : MonoBehaviour
    {
        [SerializeField]//privateでも、Unityエディタでも編集ができる
        private Unimgpicker imagePicker;

        [SerializeField]
		private Image changeImage_left;//UIのImageを変えてみる
        void Awake()
        {
            imagePicker.Completed += (string path) =>
            {
				StartCoroutine(LoadImage(path, changeImage_left));//imageRendererの部分を変更したい部分にする。
            };
        }

		//ボタンからここが直接呼ばれる
        public void OnPressShowPicker()
        {
			//以下の関数を呼び出す前までは、PickerController2の状態だが、以下の関数を呼び出したあとは、PickerControllerになってしまう
            imagePicker.Show("Select Image", "unimgpicker", 1024);//タイトル、ファイルめい、ファイルのサイズを引数として渡す
        }

		//画像を読みこむ処理
		private IEnumerator LoadImage(string path, Image output)
        {
            var url = "file://" + path;
            var www = new WWW(url);
            yield return www;//テクスチャを取得するまで、次の処理をしない

            var texture = www.texture;
            if (texture == null)//テクスチャを取得できなかったら、ここが処理される
            {
                Debug.LogError("Failed to load texture url:" + url);
            }

			// Texture -> Spriteに変換する
			Sprite texture_sprite = Sprite.Create(texture, new Rect(0,0,256,256), Vector2.zero);
			changeImage_left.sprite = texture_sprite;//textureからspriteに変換したものをImageのspriteに代入
        }
    }
}