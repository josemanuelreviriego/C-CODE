#include <stdio.h>
#include <stdlib.h>

#define MAX 2

#define Y 0
#define X 1

#define DELTA .1

typedef struct{

	double aceleracion;
	double velocidad;
	double espacio;

}trayecto;


int main(int argc,char *argv[]){

	double tiempo = 0;
	trayecto bala[MAX];

	bala[Y].aceleracion = -10.;
	bala[Y].velocidad = 40.;
	bala[Y].espacio = 0.;

	bala[X].aceleracion = 0.;
	bala[X].velocidad = 20.;
	bala[X].espacio = 0.;


	for(tiempo = 0; bala[Y].espacio>=0.; tiempo += DELTA){
	        printf("  tiempo[%.2lf segundos] => "
			"velocidad: (%.2lf, %.2lf)m/s => "
			"espacio: (%.2lf, %.2lf)m\n " ,tiempo,bala[X].velocidad,bala[Y].velocidad,bala[X].espacio,bala[Y].espacio);
	                
	
	        bala[Y].velocidad += bala[Y].aceleracion * DELTA;
	        bala[Y].espacio += bala[Y].velocidad * DELTA;
	
	        bala[X].velocidad += bala[X].aceleracion * DELTA;
	        bala[X].espacio += bala[X].velocidad * DELTA;
	        
	}







	return EXIT_SUCCESS;

}
