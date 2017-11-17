using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class StorySelectController : MonoBehaviour {

	[SerializeField]
	PageController pageController;//このスクリプトのImageの部分に画像をセットするために必要

	//今回使う物語を扱う処理
	[SerializeField]
	GameObject story_select_panel;//物語を選択しても、選択パネルが表示されたママでは邪魔であるので、物語を選択したらパネルは非表示にする。
	public GameObject GetColorPanel;
	[SerializeField]
	Sprite[] story1;//使う物語の画像一つ目
	[SerializeField]
	Sprite[] story2;//使う物語の画像二つ目
	[SerializeField]
	Sprite[] story3;//使う物語の画像三つ目
	public GameObject[] story1_gameObject;//静止画像や動画ではなく、別シーンでキャラオブジェクトをアニメーションさせたりしたものを一つにまとめたオブジェクトをページごとに入る。

	//物語を選んだら動画を再生して物語洗濯パネルを非表示にする処理関連
	public static bool startOpening=false;//オープニングが始まっていなかったら物語選択パネルを表示して、もう再生してたら物語選択パネルは表示しない処理
	private bool opening_played_after_story_scene_process=false;//オープニングを再生してからのStorySceneを開いた場合の処理がStart関数では失敗したのでUpdateで一度だけ処理するために

	// Use this for initialization
	void Start () {
		Debug.Log (startOpening);
		pageController.configured_page_number = story1_gameObject.Length;//最後のページになったら任意の処理をしたいので、最終的なページ数をPageControllerの変数に代入する
		//オープニングが再生されていたら、動くページを表示する。
		//if (startOpening == true) SetSarukaniStory ();
	}
	
	// Update is called once per frame
	void Update () {
		if (startOpening == true && opening_played_after_story_scene_process == false) {
			opening_played_after_story_scene_process = true;
			SetSarukaniStory ();
		}
	}

	//物語を選択し直すために、物語選択パネルを表示する処理
	public void Display_GetColorPanel(){
		GetColorPanel.SetActive (true);
	}

	//物語が選択されたら、オープニング映像を再生するシーンに遷移する処理
	public void StartOpening(){
		SceneManager.LoadScene ("Sarukani_Opening");
	}

	//パネルの子要素にあるため、ボタンの共通化ができないため、一個ずつ処理する
	//猿カニ合戦の物語をセットする処理
	public void SetSarukaniStory(){
		Debug.Log("猿カニ合戦のボタンが押されました");
		for(int i=0;i<story1_gameObject.Length;i++){//ページが8枚の場合
			pageController.useStory[i]=story1[i];
			pageController.set_story_image.sprite=story1[0];//ストーリーを決定したら、表示されるストーリーの一ページ目の画像をセットする。
		}
		pageController.story_page_number = 12;//猿カニ合戦でのページ数を12枚であることを知らせる
		pageController.page=0;//途中で物語を変更したら、進んでる分のページ数を0にリセットする。
		pageController.FirstColorDisplay("sarukani");//使用する物語によって1ページ目の指定される色は違うので、ここで指定する。
		story_select_panel.SetActive(false);//物語を選択したら物語選択パネルは非表示にする。

		story1_gameObject [0].SetActive (true);//アニメーションさせたオブジェクトをまとめたページの1ページ目を表示する。

	}

	//笠地蔵の物語をセットいする処理
	public void SetKasaStory(){
		for(int i=0;i<1;i++){//ページが8枚の場合
			pageController.useStory[i]=story2[i];
			pageController.set_story_image.sprite=story2[0];//ストーリーを決定したら、表示されるストーリーの一ページ目の画像をセットする。
		}
		pageController.story_page_number = 1;//笠地蔵の物語のページ数が1枚であることを知らせる
		pageController.page=0;//途中で物語を変更したら、進んでる分のページ数を0にリセットする。
		pageController.FirstColorDisplay("kasa");
		story_select_panel.SetActive(false);//物語を選択したら物語選択パネルは非表示にする。

	}

	//おむすびころりんのもが足りをセットする処理
	public void SetOmusubiStory(){
		for(int i=0;i<1;i++){//ページが8枚の場合
			pageController.useStory[i]=story3[i];
			pageController.set_story_image.sprite=story3[0];//ストーリーを決定したら、表示されるストーリーの一ページ目の画像をセットする。
		}
		pageController.story_page_number = 1;//おむすびころりんのものがたrちのページ数が1枚であることを知らせる
		pageController.page=0;//途中で物語を変更したら、進んでる分のページ数を0にリセットする。
		pageController.FirstColorDisplay("omusubi");
		story_select_panel.SetActive(false);//物語を選択したら物語選択パネルは非表示にする。

	}
}
