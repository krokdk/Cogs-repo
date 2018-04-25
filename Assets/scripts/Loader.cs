using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Loader : MonoBehaviour {


	public GameObject gameManeger;

	void Awake () {
		if (GameManeger.instance == null) {
			Instantiate (gameManeger);
		}
	}

}
