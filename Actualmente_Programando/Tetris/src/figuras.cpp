#include "figuras.h"
#define VELOCIDAD 1.5
#define GRAVEDAD 0.5

void pintar_figura(Pila pila){

		while(pila.tetris[pila.cima-1]){

				attron(COLOR_PAIR(pila.tetris[pila.cima-1]->color));
				mvaddch(pila.tetris[pila.cima-1]->coor.y,pila.tetris[pila.cima-1]->coor.x,ACS_CKBOARD);
				attroff(COLOR_PAIR(pila.tetris[pila.cima-1]->color));
				pila.tetris[pila.cima-1] = pila.tetris[pila.cima-1]->sig_estructura;
		}

}

void gravedad_figura(Pila pila){

		while(pila.tetris[pila.cima-1]){
			pila.tetris[pila.cima-1]->coor.y+=GRAVEDAD;
			pila.tetris[pila.cima-1] = pila.tetris[pila.cima-1]->sig_estructura;
		}

}

void mover_figura(Pila pila){

 	int direccion = getch();
 	switch(direccion){

		case KEY_RIGHT:
			while(pila.tetris[pila.cima-1]){
				pila.tetris[pila.cima-1]->coor.x+=VELOCIDAD;
				pila.tetris[pila.cima-1] = pila.tetris[pila.cima-1]->sig_estructura;
			}
			break;

		case KEY_LEFT:
			while(pila.tetris[pila.cima-1]){
				pila.tetris[pila.cima-1]->coor.x-=VELOCIDAD;
				pila.tetris[pila.cima-1] = pila.tetris[pila.cima-1]->sig_estructura;
			}
			break;
	}

}
