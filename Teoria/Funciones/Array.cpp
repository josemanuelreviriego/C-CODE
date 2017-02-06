//Meter datos en un array con una funcion
#include <stdio.h>
#include <stdlib.h>

#define MAX 2

void meter_datos(int valores[]);

void imprimir(int pantalla[]);

int main (){

	int array[MAX];

	meter_datos(array);
	imprimir(array);
	return EXIT_SUCCESS;

}

void meter_datos(int valores[]){

	for (int i=0; i<MAX; i++){
		printf("Dame %i valores para el array ",MAX);
		scanf(" %i",&valores[i]);
	}

}

void imprimir(int pantalla[]){

	for (int i=0; i<MAX; i++){
		printf("%i\n",pantalla[i]);
	
	}



}
