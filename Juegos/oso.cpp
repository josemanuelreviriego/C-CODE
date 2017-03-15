#include "tablero.h"


void rellenar(char tablero[][MAX]){

	char numero = 'A';

	for(int i=0; i<MAX; i++){	
		for(int j=0; j<MAX; j++){
			tablero[i][j] = numero++;
	
		}

	}
}

void imprimir(char tablero[][MAX]){

	char numero = '0';

	for(int i=0; i<MAX; i++){	
		for(int j=0; j<MAX; j++){
			printf("%2c",tablero[i][j]);
	
		}

		printf("\n");

	}
}
int main (){

	char tablero [MAX][MAX];

	rellenar(tablero);
	imprimir(tablero);

	return EXIT_SUCCESS;

}
