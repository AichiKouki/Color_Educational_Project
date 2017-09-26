using UnityEngine;
using System.Collections;
using Uniduino;

public class ArduinoController : MonoBehaviour {

	private Arduino arduino;
	private int leg = 11;
	private int down = 12;
	private int up = 13;
	private int i = 0;

	void Start () {
		// インスタンスを取得
		arduino = Arduino.global;
		if (arduino == null) {
			Debug.Log ("arduino's instanse is null");
		}
		arduino.Setup (ConfigurePins);

		// コルーチンでループ
		StartCoroutine (Loop());
	}

	// Pinの設定
	void ConfigurePins()
	{
		arduino.pinMode(up, PinMode.OUTPUT);
		arduino.pinMode(down, PinMode.OUTPUT);
		arduino.pinMode (leg, PinMode.OUTPUT); 
	}

	private IEnumerator Loop()
	{
		while (i < 200) {
			arduino.digitalWrite(leg, Arduino.HIGH);
			yield return new WaitForSeconds(1);
			arduino.digitalWrite(leg, Arduino.LOW);
			arduino.digitalWrite(down, Arduino.HIGH);
			yield return new WaitForSeconds(1); 
			arduino.digitalWrite(down, Arduino.LOW);
			arduino.digitalWrite(up, Arduino.HIGH);
			yield return new WaitForSeconds(1);
			arduino.digitalWrite(up, Arduino.LOW);
			i++; 
		}
	}
}