using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

public class BoardManeger : MonoBehaviour {
	private Transform boardholder;
	public GameObject[] cogs;

	private List<Vector3> gridPositions = new List<Vector3>();


	void InitializeList(){
		gridPositions.Clear();
	}

	void BoardSetup(){
		boardholder = new GameObject ("GameBoard").transform;

		for (int i = 0; i < 4; i++){
			GameObject gameObjectToInstatiate = cogs[0];

			GameObject instance = Instantiate (gameObjectToInstatiate, new Vector3 (i,i,0), Quaternion.identity) as GameObject;
			instance.GetComponent<Cog> ().cogId = i;
			instance.GetComponent<Cog> ().InitialSpeed = i == 0 ? 100 : 0;

			instance.transform.SetParent (boardholder);
		}

	}


	public void SetupScene(int level){

		BoardSetup ();

	
	}

}
