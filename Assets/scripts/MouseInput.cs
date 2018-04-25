using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MouseInput : MonoBehaviour {

	float dist = 10;

	void OnMouseDrag(){
	
		Vector3 mousePos = new Vector3(Input.mousePosition.x, Input.mousePosition.y, dist);
		Vector3 objPos = Camera.main.ScreenToWorldPoint(mousePos);

		transform.position = objPos;
	}
}
