using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class Cog : MonoBehaviour {


	public int InitialSpeed = 0;

	public Dictionary<int, int> touchingCogs;

	public int cogId; // lav en id provider?

	public int Speed = 0;// { get{ return 1.0f;} set{ this.Speed = value;}}

	// Use this for initialization
	void Start () {
		
		touchingCogs = new Dictionary<int, int>();
		Speed = InitialSpeed;

	}

	public Cog(int cogId){
		this.cogId = cogId;
	}
		
	// Update is called once per frame
	void Update () {
	


		var speedPos = touchingCogs.Any (x => x.Value > 0);
		var speedNeg = touchingCogs.Any (x => x.Value < 0);

		if (speedPos && speedNeg) {
			Speed = 0;
		} 
		else {


			foreach (KeyValuePair<int, int> pair in touchingCogs) {
				if (pair.Value != 0) {
					Speed = -pair.Value;
					break;
				}
			
			}

			if (!touchingCogs.Any ()) {
				Speed = InitialSpeed;
			}
			//Speed = InitialSpeed;

		}

			
			transform.Rotate (new Vector3 (0, 0, Speed * Time.deltaTime));

		}

}
