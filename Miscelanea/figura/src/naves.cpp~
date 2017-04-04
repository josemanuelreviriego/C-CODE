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

	static double mover = 0.006;
	static bool direccion = DERECHA;
	static double saltar = 0;

	for(int i=0;i<MAX_NAV;i++){

			if(mostrar->en_juego[i]->y >9 && mostrar->en_juego[i]->y < 150 ){
	
				if(direccion == DERECHA){
					
					attron(COLOR_PAIR( rand() % 8));
					mvprintw(mostrar->en_juego[i]->x,mostrar->en_juego[i]->y += mover," > ");
					attroff(COLOR_PAIR( rand() %8));

				}

				if(direccion == IZQUIERDA){

					attron(COLOR_PAIR( rand() % 8));
					mvprintw(mostrar->en_juego[i]->x + saltar,mostrar->en_juego[i]->y -= mover,"/");
					attroff(COLOR_PAIR( rand() % 8));

				}
						
			}

			//TOPE DERECHA

			if(mostrar->en_juego[i]->y >= 150){

				mostrar->en_juego[i]->y = 149;
				saltar+=0.5;
				direccion^=1;


			}

			//TOPE IZQUIERDA

			if(mostrar->en_juego[i]->y <=9){
				
				mostrar->en_juego[i]->y = 10;
				saltar+=2;
				direccion^=1;


			}

	
	}

	refresh();

}

