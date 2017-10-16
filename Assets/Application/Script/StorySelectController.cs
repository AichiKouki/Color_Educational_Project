using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StorySelectController : MonoBehaviour {

	[SerializeField]
	PageController pageController;//ページコントローラーに、使う物語をセットする。

	//今回使う物語を扱う処理
	[SerializeField]
	Sprite[] story1;//使う物語の画像一つ目
	[SerializeField]
	Sprite[] story2;//使う物語の画像二つ目
	[SerializeField]
	Sprite[] story3;//使う物語の画像三つ目


	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	//パネルの子要素にあるため、ボタンの共通化ができないため、一個ずつ処理する。

	//猿カニ合戦の物語をセットする処理
	public void SetSarukaniStory(){
		Debug.Log("猿カニ合戦のボタンが押されました");
		for(int i=0;i<8;i++){//ページが8枚の場合
			pageController.useStory[i]=story1[i];
			pageController.story_page_number = 8;//猿カニ合戦でのページ数を8枚であることを知らせる
		}
	}

	//笠地蔵の物語をセットいする処理
	public void SetKasaStory(){
		for(int i=0;i<1;i++){//ページが8枚の場合
			pageController.useStory[i]=story2[i];
			pageController.story_page_number = 1;//笠地蔵の物語のページ数が1枚であることを知らせる
		}
	}

	//おむすびころりんのもが足りをセットする処理
	public void SetOmusubiStory(){
		for(int i=0;i<1;i++){//ページが8枚の場合
			pageController.useStory[i]=story3[i];
			pageController.story_page_number = 1;//おむすびころりんのものがたrちのページ数が1枚であることを知らせる
		}
	}
}
