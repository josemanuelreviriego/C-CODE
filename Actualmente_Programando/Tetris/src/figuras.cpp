#include "figuras.h"
#define DESPLAZAMIENTO 2
#define GRAVEDAD 0.5

void pintar_figura(Figura *tetris){

	while(tetris){

			attron(COLOR_PAIR(tetris->color));
			mvaddch(tetris->coor.y,tetris->coor.x,ACS_CKBOARD);
			attroff(COLOR_PAIR(tetris->color));
			tetris = tetris->sig_estructura;
	}

}

void pintar_pila(Pila pila){

	for(int i=0;i<pila.cima;i++){

		while(pila.tetris[i]){

			attron(COLOR_PAIR(pila.tetris[i]->color));
			mvaddch(pila.tetris[i]->coor.y,pila.tetris[i]->coor.x,ACS_CKBOARD);
			attroff(COLOR_PAIR(pila.tetris[i]->color));
			pila.tetris[i] = pila.tetris[i]->sig_estructura;

			} 

	}

}

void gravedad_figura(Figura *tetris){

	while(tetris){
		tetris->coor.y+=GRAVEDAD;
		tetris = tetris->sig_estructura;
	}

}

void mover_figura(Figura *tetris){

 	int direccion = getch();
 	switch(direccion){

		case KEY_RIGHT:
			while(tetris){
				tetris->coor.x+=DESPLAZAMIENTO;
				tetris = tetris->sig_estructura;
			}
			break;

		case KEY_LEFT:
			while(tetris){
				tetris->coor.x-=DESPLAZAMIENTO;
				tetris = tetris->sig_estructura;
			}
			break;
	}

}
