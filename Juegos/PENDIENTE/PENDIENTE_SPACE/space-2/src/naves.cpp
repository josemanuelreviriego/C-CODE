#include "naves.h"

#define TAM_NAVES 7

#define DERECHA 1
#define IZQUIERDA 0

#define VELOCIDAD_NAVES 0.001

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

	for(int i=0;i<MAX_NAV;i++){

		static double mover = VELOCIDAD_NAVES;
		static bool direccion = DERECHA;
		static double saltar = 0;

			if(mostrar->en_juego[i]->y >9 && mostrar->en_juego[i]->y < 150 ){

				if(direccion == DERECHA)
					mvprintw(mostrar->en_juego[i]->x + saltar ,mostrar->en_juego[i]->y += mover," > ");
				
				if(direccion == IZQUIERDA)
					mvprintw(mostrar->en_juego[i]->x + saltar,mostrar->en_juego[i]->y -= mover," < ");
				
						
			}

			//TOPE DERECHA

			if(mostrar->en_juego[i]->y >= 150){

				mostrar->en_juego[i]->y = 149;
				saltar+=2;
				direccion^=1;
				system("clear");

			}

			//TOPE IZQUIERDA

			if(mostrar->en_juego[i]->y <=9){
				
				mostrar->en_juego[i]->y = 10;
				saltar+=2;
				direccion^=1;
				system("clear");

			}

	
	}

	refresh();

}

