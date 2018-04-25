using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class CogSpinner : MonoBehaviour {

	private Cog cog;

	void OnCollisionEnter2D(Collision2D other){
		Cog otherCog = other.transform.GetComponent<Cog>();

		if (!cog.touchingCogs.ContainsKey (otherCog.cogId)) {
			cog.touchingCogs.Add (otherCog.cogId, otherCog.Speed);
		} 
		else {
			cog.touchingCogs [otherCog.cogId] = otherCog.Speed;
		}
	}

	void OnCollisionStay2D(Collision2D other){
		Cog otherCog = other.transform.GetComponent<Cog> ();

	
	}

	private void OnCollisionExit2D(Collision2D other){
		Cog otherCog = other.transform.GetComponent<Cog>();
		cog.touchingCogs.Remove (otherCog.cogId);
		otherCog.touchingCogs.Remove (cog.cogId);
		}
		

	// Use this for initialization
	void Start () {
		cog = transform.GetComponent<Cog>();
	}
}
