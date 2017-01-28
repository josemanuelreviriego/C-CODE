#include <stdio.h>
#include <stdlib.h>

#define CARACTER_POSICION '1'

void rellenar (char tablero [3][3]){

	char poner_numeros = CARACTER_POSICION;

	for(int filas = 0; filas<3; filas++){
		for(int columnas = 0; columnas<3; columnas++){
			tablero[filas][columnas] = poner_numeros++;	
		}
	}
}

void dibujar (char tablero[3][3]){

	for(int filas = 0; filas<3; filas++){
		for(int columnas = 0; columnas<3; columnas++){
			printf(" %c ",tablero[filas][columnas]);	
		}
		printf("\n\n");
	}
}

void primer_jugador(char tablero[3][3]){

	char posicion_J1;

		do{

			printf("JUGADOR 1: Escribe el numero donde quieres jugar ");
			scanf(" %c",&posicion_J1);		

		}while (posicion_J1<'1' || posicion_J1>'9');

		for(int filas = 0; filas<3; filas++){
			for(int columnas = 0; columnas<3; columnas++){
				if(tablero[filas][columnas] == posicion_J1){
				tablero[filas][columnas] = 'X';
				}
			}
		}
}

void segundo_jugador (char tablero[3][3]){

	char posicion_J2;

		do{

			printf("JUGADOR 2: Escribe el numero donde quieres jugar ");
			scanf(" %c",&posicion_J2);		

		}while (posicion_J2<'1' || posicion_J2>'9');

		for(int filas = 0; filas<3; filas++){
			for(int columnas = 0; columnas<3; columnas++){
				if(tablero[filas][columnas] == posicion_J2){
				tablero[filas][columnas] = 'O';
				}
			}
		}

}

int ganador (char tablero[3][3]){





}

void refrescar (char tablero[3][3]){

	rellenar (tablero);

	int numero_jugadas = 0;

	do{
		system("clear");
		dibujar(tablero);

		if (numero_jugadas % 2 == 0)
			primer_jugador(tablero);
		
		else
			segundo_jugador(tablero);

		numero_jugadas++;
		
	}while(numero_jugadas < 9);

	system("clear");
	dibujar(tablero);

}

int main (int argc,char *argv[]){

	char tablero[3][3];
	refrescar(tablero);

	return EXIT_SUCCESS;

}

