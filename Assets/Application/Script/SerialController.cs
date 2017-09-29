using System.Collections;
using System.Collections.Generic;
using System.Threading;
using System;
using System.IO.Ports;
using UnityEngine;
using UniRx;//UniRxを使うために、これを追加している

public class SerialController : MonoBehaviour {

	public string portName;
	public int baurate;

	SerialPort serial;
	bool isLoop = true;

	//他のスクリプトに値を取得してもらいたいから、そのための変数
	public string[] RGB=new string[3];//RGBだから、三つ文初期化
	//Arduino側では、一つの文字列として取得するので、文字列を分割してすyとくするので、RGBに分ける
	public int r;
	public int g;
	public int b;

	//Startメソッドの中でSerialクラスのインスタンスを作成した後、Scheduleメソッドを使ってReadDataスレッドを立ちあげています。
	void Start () 
	{
		this.serial = new SerialPort (portName, baurate, Parity.None, 8, StopBits.One);

		try
		{
			this.serial.Open();
			Scheduler.ThreadPool.Schedule (() => ReadData ()).AddTo(this);
		} 
		catch(Exception e)
		{
			Debug.Log ("can not open serial port");
		}
	}

	//ReadDataメソッドの中ではSerialクラスのReadLineメソッドを使って、シリアルで送られてくるデータを読んで表示しています。
	public void ReadData()
	{
		while (this.isLoop)
		{
			string message = this.serial.ReadLine();
			Debug.Log(message);//Arduino側の、printlnの部分を取得している
			RGB=message.Split(',');//「,」で区切り文字で分割して配列に変換している
			//文字列で取得している部分をint型に変換して、このスクリプトのrgb変数に代入している
			r = int.Parse (RGB[0]);
			g = int.Parse (RGB[1]);
			b = int.Parse (RGB[2]);
		}
	}

	//ゲームを終了する場合はこのメソッドが実行される
	void OnDestroy()
	{
		this.isLoop = false;
		this.serial.Close ();
	}
}