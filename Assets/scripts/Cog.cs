using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class Cog : MonoBehaviour {

	public int numberOfTOuchingCogs;

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
	
		numberOfTOuchingCogs = touchingCogs.Count ();

		Speed = InitialSpeed;

		if (numberOfTOuchingCogs == 1) {


			int touchingCogSpeed = touchingCogs.First ().Value;

			if (touchingCogSpeed == Speed) {
				Speed = InitialSpeed;
			
			} else {
				Speed = touchingCogSpeed != 0 ? -touchingCogSpeed : InitialSpeed;
			}
		}

		if (numberOfTOuchingCogs > 1) {
			var speedPos = touchingCogs.Any (x => x.Value > 0);
			var speedNeg = touchingCogs.Any (x => x.Value < 0);

			if (speedPos && speedNeg) {
				Speed = 0;
			} else {
				foreach (KeyValuePair<int, int> pair in touchingCogs) {
					if (pair.Value != 0) {
						Speed = -pair.Value;
						break;
					}

				}
			}

		}

			
			transform.Rotate (new Vector3 (0, 0, Speed * Time.deltaTime));

		}

	void OnCollisionEnter2D(Collision2D other){
		Cog otherCog = other.transform.GetComponent<Cog>();

		if (!touchingCogs.ContainsKey (otherCog.cogId)) {
			touchingCogs.Add (otherCog.cogId, otherCog.Speed);
		} 
		else {
			touchingCogs [otherCog.cogId] = otherCog.Speed;
		}
	}

	void OnCollisionStay2D(Collision2D other){
		Cog otherCog = other.transform.GetComponent<Cog> ();
		if (!touchingCogs.ContainsKey (otherCog.cogId)) {
			touchingCogs.Add (otherCog.cogId, otherCog.Speed);
		} 
		else {
			touchingCogs [otherCog.cogId] = otherCog.Speed;
		}

	}

	private void OnCollisionExit2D(Collision2D other){
		Cog otherCog = other.transform.GetComponent<Cog>();
		touchingCogs.Remove (otherCog.cogId);
		otherCog.touchingCogs.Remove (cogId);
	}

}
