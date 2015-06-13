using UnityEngine;
using System.Collections;

public class estatistica : MonoBehaviour{

private int n;
private double Somatorio_fi, Somatorio_fiYi;
private float Media, h, Xo;

	void set_Somatorio_fi(){
		for(int i = 1; i<=A.n; ++i){
			Somatorio_fi += A.fi(i);
		}
	}
	void set_Media(){
		Media = A.Xo + ((A.h * Somatorio_fiYi)/A.n);
	}
	float get_Media(){return Media;}
	float get_Mediana(){return Mediana;}
	float get_Somatoriofi(){return Somatorio_fi;}
}
