using UnityEngine;
using System.Collections;

namespace Kakera
{
    public class PickerController : MonoBehaviour
    {
        [SerializeField]
        private Unimgpicker imagePicker;

        [SerializeField]
        private MeshRenderer imageRenderer;//3Dオブジェクトのマテリアルを変更するので、ここではマテリアルの部分を宣言する。UIのImageを変更したかったら、ここでImageをせんげんすr。

        void Awake()
        {
            imagePicker.Completed += (string path) =>
            {
                StartCoroutine(LoadImage(path, imageRenderer));//imageRendererの部分を変更したい部分にする。
            };
        }

        public void OnPressShowPicker()
        {
            imagePicker.Show("Select Image", "unimgpicker", 1024);
        }

        private IEnumerator LoadImage(string path, MeshRenderer output)
        {
            var url = "file://" + path;
            var www = new WWW(url);
            yield return www;//テクスチャを取得するまで、次の処理をしない

            var texture = www.texture;
            if (texture == null)//テクスチャを取得できなかったら、ここが処理される
            {
                Debug.LogError("Failed to load texture url:" + url);
            }

            output.material.mainTexture = texture;//ここで、実際にテクスチャが反映されている
        }
    }
}