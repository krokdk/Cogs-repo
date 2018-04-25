using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

public class GameManeger : MonoBehaviour {

	public static GameManeger instance = null;
	public BoardManeger boardScript;

	private int level = 1;
	// Use this for initialization
	void Awake () {
		if (instance == null) {
			instance = this;
		
		} else if (instance = this) {
			Destroy (gameObject);
		}


		boardScript = GetComponent<BoardManeger> ();
		InitGame ();
	}

	void InitGame(){
		boardScript.SetupScene(level);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
