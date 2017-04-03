#include "naves.h"

#define TAM_NAVES 7

#define DERECHA 1
#define IZQUIERDA 0

DatosNave posicion_inicial(double *x, double *y){

	DatosNave coor;
	static int horizontal = 10; //y
	static int vertical = 0; //x

	coor.x = vertical;  //LA X/Y ESTAN INTERCAMBIADAS POR ERROR
	coor.y = horizontal; //LA X/Y ESTAN INTERCAMBIADAS POR ERROR

	horizontal+=TAM_NAVES;

	return coor;

}


void mover_naves(RegistroNave *mostrar){

	static double mover = 0.0005;
	static bool direccion = DERECHA;
	static double saltar = 0;

	//DERECHA

	for(int i=0;i<MAX_NAV;i++){

			if(mostrar->en_juego[i]->y >9 && mostrar->en_juego[i]->y < 150 ){

				if(direccion == DERECHA)
					mvprintw(mostrar->en_juego[i]->x + saltar ,mostrar->en_juego[i]->y += mover," > ");
				
				if(direccion == IZQUIERDA)
					mvprintw(mostrar->en_juego[i]->x + saltar,mostrar->en_juego[i]->y -= mover," < ");
				
						
			}

			if(mostrar->en_juego[i]->y >= 150){

				mvprintw(mostrar->en_juego[i]->x,mostrar->en_juego[i]->y,"  ");
				mostrar->en_juego[i]->y = 149;
				saltar+=2;
				direccion^=1;

			}

			if(mostrar->en_juego[i]->y <=9){
				
				mvprintw(mostrar->en_juego[i]->x,mostrar->en_juego[i]->y,"  ");
				mostrar->en_juego[i]->y = 10;
				saltar+=2;

				direccion^=1;

			}

	
	}

	refresh();

}

