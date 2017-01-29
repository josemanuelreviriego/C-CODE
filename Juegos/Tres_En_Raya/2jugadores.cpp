#include <stdio.h>
#include <stdlib.h>
#define CARACTER_MINIMO '1'
#define CARACTER_MAXIMO '9'
#define JUGADOR1 'X'
#define JUGADOR2 'O'
#define GANA_J1 1
#define GANA_J2 2

void rellenar(char letras [3][3]){

	char sucesion = CARACTER_MINIMO;

	for(int filas = 0 ; filas < 3; filas++){
		for(int columnas = 0; columnas < 3; columnas++){
			letras[filas][columnas] = sucesion++;
		}
	}
}

void imprimir(char dibujar [3][3]){

	for(int filas = 0 ; filas < 3; filas++){
		for(int columnas = 0; columnas < 3; columnas++){
			printf(" %c ",dibujar[filas][columnas]);
		 }
		printf("\n");
	}

}

void primer_jugador(char jugar[3][3]){

	char jugada;

	do{
		printf("¿Donde quieres poner una X ");
		scanf(" %c",&jugada);

	}while(jugada < CARACTER_MINIMO || jugada > CARACTER_MAXIMO);

	for(int filas = 0 ; filas < 3; filas++){
		for(int columnas = 0; columnas < 3; columnas++){
			if(jugar[filas][columnas] == jugada)
				jugar[filas][columnas] = JUGADOR1;
		}
	}
}

void segundo_jugador(char jugar[3][3]){

	char jugada;

	do{
		printf("¿Donde quieres poner una Y ");
		scanf(" %c",&jugada);

	}while(jugada < CARACTER_MINIMO || jugada > CARACTER_MAXIMO);

	for(int filas = 0 ; filas < 3; filas++){
		for(int columnas = 0; columnas < 3; columnas++){
			if(jugar[filas][columnas] == jugada)
				jugar[filas][columnas] = JUGADOR2;
		}
	}
}
int ganador(char ficha[3][3]){

	if(ficha[0][0] == JUGADOR1 || ficha[0][0] == JUGADOR2){
		if(ficha[0][0] == ficha[0][1] && ficha[0][0] == ficha[0][2]){
			if(ficha[0][0] == JUGADOR1)
				return GANA_J1;
			if(ficha[0][0] == JUGADOR2)
				return GANA_J2;

		}
		
		if(ficha[0][0] == ficha[1][0] && ficha[0][0] == ficha[2][0]){

			if(ficha[0][0] == JUGADOR1)
				return GANA_J1;
			if(ficha[0][0] == JUGADOR2)
				return GANA_J2;

		}
		
		if(ficha[0][0] == ficha[1][1] && ficha[0][0] == ficha[2][2]){

			if(ficha[0][0] == JUGADOR1)
				return GANA_J1;
			if(ficha[0][0] == JUGADOR2)
				return GANA_J2;

		}

	}
		
	if(ficha[0][1] == JUGADOR1 || ficha[0][1] == JUGADOR2){
		if(ficha[0][1] == ficha[1][1] && ficha[0][1] == ficha[2][1]){

			if(ficha[0][1] == JUGADOR1)
				return GANA_J1;
			if(ficha[0][1] == JUGADOR2)
				return GANA_J2;

		}
		
	}

	if(ficha[0][2] == JUGADOR1 || ficha[0][2] == JUGADOR2){
		if(ficha[0][2] == ficha[1][2] && ficha[0][2] == ficha[2][2]){

			if(ficha[0][2] == JUGADOR1)
				return GANA_J1;
			if(ficha[0][2] == JUGADOR2)
				return GANA_J2;

		}
		if(ficha[0][2] == ficha[1][1] && ficha[0][2] == ficha[2][0]){

			if(ficha[0][2] == JUGADOR1)
				return GANA_J1;
			if(ficha[0][2] == JUGADOR2)
				return GANA_J2;

		}
	}

	if(ficha[1][0] == JUGADOR1 || ficha[1][0] == JUGADOR2){
		if(ficha[1][0] == ficha[1][1] && ficha[1][0] == ficha[1][2]){

			if(ficha[1][0] == JUGADOR1)
				return GANA_J1;
			if(ficha[1][0] == JUGADOR2)
				return GANA_J2;

		}
	}

	if(ficha[2][0] == JUGADOR1 || ficha[2][0] == JUGADOR2){
		if(ficha[2][0] == ficha[2][1] && ficha[2][0] == ficha[2][2]){

			if(ficha[2][0] == JUGADOR1)
				return GANA_J1;
			if(ficha[2][0] == JUGADOR2)
				return GANA_J2;

		}
	}



	return 0;
}

void felicitar (char raya[3][3]){

	int comprobar = ganador(raya);

		if (comprobar == 1)
			printf("HA GANADO EL JUGADOR 1\n");
		
		if (comprobar == 2)
			printf("HA GANADO EL JUGADOR 2\n");
}

int main (int argc,char *argv[]){

	char tablero[3][3];
	int jugadas;
	int comprobar = 0;
	rellenar(tablero);

	do{
		system("clear");
		imprimir(tablero);
		if(jugadas%2 == 0)
			primer_jugador(tablero);
		else
			segundo_jugador(tablero);

		jugadas++;

		comprobar = ganador(tablero);
		
	}while(jugadas < 9 && comprobar == 0);

	system("clear");
	imprimir(tablero);
	felicitar(tablero);

	return EXIT_SUCCESS;

}
