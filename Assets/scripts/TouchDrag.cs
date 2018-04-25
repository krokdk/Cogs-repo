using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchDrag : TouchSprite {

	// Use this for initialization
	void Start () {
		TouchInput (GetComponent<BoxCollider2D> ());
	}
	
	// Update is called once per frame
	void Update () {
		TouchInput (GetComponent<BoxCollider2D> ());
	}

	void OnFirstTouch(){
		Vector3 pos;

		Vector3 touchInput = Camera.main.ScreenToWorldPoint (Input.GetTouch (0).position);
		pos = new Vector3 (touchInput.x, touchInput.y, transform.position.z);
		transform.position = pos;
	}
}
