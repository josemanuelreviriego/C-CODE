#include <stdio.h>
#include <stdlib.h>

typedef struct {

	char dni[9];
	int sueldo;
	char nombre[50];

}TEmpleado;

void incrementa_sueldo(TEmpleado *empleo,double incremento){

	empleo->sueldo +=incremento;
	printf("Nuevo sueldo %i\n",empleo->sueldo);

}

int main (){

	TEmpleado empleo;
	
	empleo.sueldo = 50;

	incrementa_sueldo(&empleo,50);
	


	return EXIT_SUCCESS;

}
