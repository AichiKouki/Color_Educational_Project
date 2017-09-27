using UnityEngine;
using System.Collections;
using Uniduino;
using System.IO.Ports;
using System.Runtime.InteropServices;

//Arduino関連の処理をするスクリプト
public class BlinkyLight : MonoBehaviour
{
	private Arduino arduino;
	//S0は、ポート4
	//S1は、ポート5
	//S2は、ポート6
	//S3は、ポート7
	//sensorOutは、ポート8

	//あらかじめ設定する値
	private int whiteR = 180;
	private int whiteG = 240;
	private int whiteB = 170;
	private int blackR = 20;
	private int blackG = 20;
	private int blackB = 16;

	//取得するRGBの値の変数
	private int r;
	private int g;
	private int b;

	void Start()
	{
		// Arduino クラスのインスタンスを取得
		arduino = Arduino.global;

		// Arduino の設定
		arduino.Setup(ConfigurePins);

		// コルーチンで定期的な処理を行う
		StartCoroutine(BlinkLoop());
	}
		
	//Arduino言語でのSetUP関数の中で設定する培養
	void ConfigurePins()
	{
		// ピンの設定
		arduino.pinMode(4, PinMode.ANALOG);//カラーセンサを扱うサイトでは、S0ピンをポート4に接続しているから
		arduino.pinMode(5, PinMode.ANALOG);//カラーセンサを扱うサイトでは、S1ピンをポート5に接続しているから
		arduino.pinMode(6, PinMode.ANALOG);//カラーセンサを扱うサイトでは、S2ピンをポート6に接続しているから
		arduino.pinMode(7, PinMode.ANALOG);//カラーセンサを扱うサイトでは、S3ピンをポート7に接続しているから
		arduino.pinMode(8, PinMode.ANALOG);//カラーセンサを扱うサイトでは、OUTピンをポート8に接続しているから

		arduino.digitalWrite(4, Arduino.HIGH);//ポート4。センサーのS0の部分
		arduino.digitalWrite(5, Arduino.LOW);//ポート5。センサーのS1の部分

	}

	//Arduinoでの、loop関数の処理をここに記述する
	void Update(){
	}

	//Arduino IDEでのloop関数の部分の処理
	IEnumerator BlinkLoop()
	{
		while (true) {
			/*
//加速度センサーのサンプルコード
			arduino_.digitalWrite(8, Arduino.HIGH);
			yield return new WaitForSeconds(1);
			arduino_.digitalWrite(8, Arduino.LOW);
			yield return new WaitForSeconds(1);
			*/
			//S2とS3でRBGのセンサを切り替えながら、各センサから得られる周波数をRGBの輝度に変換している
			arduino.digitalWrite(6, Arduino.LOW);//ポート6(センサーではS2)
			arduino.digitalWrite(7, Arduino.LOW);//ポート7(センサーではS3)

			r=arduino.analogRead(8);
			Debug.Log (r);
			yield return new WaitForSeconds(0.1f);//0.1秒処理を停止

			arduino.digitalWrite(6, Arduino.HIGH);//ポート6(センサーではS2)
			arduino.digitalWrite(7, Arduino.HIGH);//ポート7(センサーではS3)
			g=arduino.analogRead(8);//Rの値を取得
			Debug.Log(g);
			yield return new WaitForSeconds(0.1f);//0.1秒処理を停止

			arduino.digitalWrite(6, Arduino.LOW);//ポート6(センサーではS2)
			arduino.digitalWrite(7, Arduino.HIGH);//ポート7(センサーではS3)
			b=arduino.analogRead(8);//Rの値を取得
			Debug.Log(b);
			yield return new WaitForSeconds(0.1f);//0.1秒処理を停止
		}
	}
}
