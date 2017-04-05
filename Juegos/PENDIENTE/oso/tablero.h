#ifndef __TABLERO_H__
#define __TABLERO_H__

#include <stdio.h>
#include <stdlib.h>

#define MAX 4

void rellenar(char tablero[][MAX],char *letra,char *jugada){

	if(*letra == '?' && *letra == '?'){

		char numero = 'A';

			for(int i=0; i<MAX; i++){	
				for(int j=0; j<MAX; j++){
					tablero[i][j] = numero++;
				}
			}
	}

	if(*letra != '?'){
	
		
		for(int i=0; i<MAX; i++){	
			for(int j=0; j<MAX; j++){

				if(tablero[i][j] == *jugada)
					tablero[i][j] = *letra;
		
			}

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

void preguntar_jugada(char tablero[][MAX],char *jugada){


	printf("Selecciona un sitio donde poner tu letra ");
	scanf(" %c",jugada);

	if(*jugada > 90)
		*jugada-=32; //Paso la letra a mayusculas
}

#endif //__TABLERO_H__
