#include "tablero.h"

void tablero(int y,int x){
/*
	mvprintw(y-INF_Y,x-INF_X,"a"); //Esquina inferior DERECHA
	mvprintw(y-SUP_Y,x-INF_X,"a"); //Esquina superior DERECHA

	mvprintw(y-INF_Y,x-SUP_X,"a"); //Esquina inferior IZQUIERDA
	mvprintw(y-SUP_Y,x-SUP_X,"a"); //Esquina superior IZQUIERDA
*/

	for(int i=INF_Y; i<SUP_Y; i++){
	
		attron(COLOR_PAIR(7));

		mvaddch(y-i,x-INF_X,ACS_VLINE); //Muro parte DERECHA --->
		mvaddch(y-i,x-SUP_X,ACS_VLINE); //Muro parte IZQUIERDA <---

		attron(COLOR_PAIR(7));

	}

	mvaddch(y-INF_Y,x-INF_X,ACS_LRCORNER); //Esquina inferior DERECHA
	mvaddch(y-SUP_Y,x-INF_X,ACS_URCORNER); //Eesquina superior DERECHA
	
	mvaddch(y-INF_Y,x-SUP_X,ACS_LLCORNER); //Esquina inferior IZQUIERDA
	mvaddch(y-SUP_Y,x-SUP_X,ACS_ULCORNER); //Eesquina superior IZQUIERDA

	for( int i=INF_X; i<SUP_X-1; i++){

		attron(COLOR_PAIR(7));

		mvaddch(y-SUP_Y,x-i-1,ACS_HLINE); //Muro parte de arriba ---
		mvaddch(y-INF_Y,x-i-1,ACS_HLINE); //Muro parte de abajo ___

		attron(COLOR_PAIR(7));
	
	}

}
