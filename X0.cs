using UnityEngine;
using System.Collections;



public class X0 : MonoBehaviour {
private int n;
private float Xo;
	void set_Xo()
	{
		for(int i = 1; i <= A.n; ++i)
		{
			if(A.Xo < A.fi(i))
				A.Xo = A.fi(i);
		}
	}
	float get_Xo()
	{
		return Xo;
	}
}
