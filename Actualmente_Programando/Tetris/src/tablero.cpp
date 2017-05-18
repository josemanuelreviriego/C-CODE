#include "tablero.h"

#define DERECHA_JUEGO 70
#define ABAJO_JUEGO 5
#define IZQUIERDA_JUEGO 5
#define ARRIBA_JUEGO 5

#define DERECHA_PUNTUACION 5
#define ABAJO_PUNTUACION 5
#define IZQUIERDA_PUNTUACION 150
#define ARRIBA_PUNTUACION 5

void tam_tablero_juego(Pantalla *juego){

	juego->fin.x = juego->max.x-DERECHA_JUEGO;
	juego->fin.y = juego->max.y-ABAJO_JUEGO;
	juego->principio.x = IZQUIERDA_JUEGO;
	juego->principio.y = ARRIBA_JUEGO;

}

void tam_tablero_puntuacion(Pantalla *puntuacion){

   	puntuacion->fin.x = puntuacion->max.x-DERECHA_PUNTUACION;
	puntuacion->fin.y = puntuacion->max.y-ABAJO_PUNTUACION;
	puntuacion->principio.x = IZQUIERDA_PUNTUACION;
	puntuacion->principio.y = ARRIBA_PUNTUACION;

	mvprintw(50,50,"x_o--> %i",puntuacion->principio.x);
	mvprintw(30,30,"x_f --> %i",puntuacion->fin.x);
	refresh();

}

void dibuja_tablero(Pantalla juego){

	//Muro inferior		
	for(int i=0; i<juego.fin.x-juego.principio.x; i++)
		mvaddch(juego.fin.y,juego.fin.x-i,ACS_HLINE);
		mvaddch(juego.fin.y,juego.fin.x,ACS_LRCORNER);
		mvaddch(juego.principio.y,juego.principio.x,ACS_ULCORNER);

	//Muro superior
	for(int i=0; i<juego.fin.x-juego.principio.x; i++)
		mvaddch(juego.principio.y,juego.fin.x-i,ACS_HLINE);
		mvaddch(juego.principio.y,juego.fin.x,ACS_URCORNER);
		mvaddch(juego.fin.y,juego.principio.x,ACS_LLCORNER);

	//Muro izquierda
	for(int i=1;i<juego.fin.y-juego.principio.y; i++)
		mvaddch(juego.principio.y+i,juego.principio.x,ACS_VLINE);
		
	//Muro derecha
	for(int i=1;i<juego.fin.y-juego.principio.y; i++)
		mvaddch(juego.principio.y+i,juego.fin.x,ACS_VLINE);

	refresh();

}

void tablero(Pantalla juego,Pantalla puntuacion){

	puntuacion.max.x = juego.max.x;
	puntuacion.max.y = juego.max.y;

	tam_tablero_juego(&juego);
	dibuja_tablero(juego);

	tam_tablero_puntuacion(&puntuacion);
	dibuja_tablero(puntuacion);

}
