#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <curses.h>

#define MAX 2
#define A 0
#define B 1


#define ARMA '/'
#define CUERPO '~'
#define RUEDAS '*'

struct tanque{

	char ficha[5][5];	

};

void dibujo(){

	struct tanque jugador[MAX];

	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			jugador[A].ficha[i][j] = ' ';

		}
	}
	jugador[A].ficha[0][3] = ARMA; //CABEZA


	jugador[A].ficha[1][2] = CUERPO; //CABEZA

	
	jugador[A].ficha[2][2] = CUERPO; //CENTRO
	jugador[A].ficha[2][1] = CUERPO; //CENTRO
	jugador[A].ficha[2][3] = CUERPO; //CENTRO

	jugador[A].ficha[3][0] = CUERPO; //ABAJO
	jugador[A].ficha[3][1] = CUERPO; //ABAJO
	jugador[A].ficha[3][2] = CUERPO; //ABAJO
	jugador[A].ficha[3][3] = CUERPO; //ABAJO
	jugador[A].ficha[3][4] = CUERPO;

	jugador[A].ficha[4][1] = RUEDAS; 
	jugador[A].ficha[4][3] = RUEDAS; 

	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			printf("%c",jugador[A].ficha[i][j]);
		}
		printf("\n");
}

}
