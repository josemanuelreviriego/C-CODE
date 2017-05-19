#include "tablero.h"

#define DERECHA_JUEGO 70
#define ABAJO_JUEGO 5
#define IZQUIERDA_JUEGO 5
#define ARRIBA_JUEGO 5

#define DERECHA_PUNTUACION 5
#define ABAJO_PUNTUACION 5
#define IZQUIERDA_PUNTUACION 150
#define ARRIBA_PUNTUACION 5

void tam_tablero_juego(Pantalla *pantalla){

	pantalla->juego.fin.x = pantalla->juego.max.x-DERECHA_JUEGO;
	pantalla->juego.fin.y = pantalla->juego.max.y-ABAJO_JUEGO;
	pantalla->juego.principio.x = IZQUIERDA_JUEGO;
	pantalla->juego.principio.y = ARRIBA_JUEGO;

}

void tam_tablero_puntuacion(Pantalla *pantalla){

  pantalla->puntuacion.fin.x = pantalla->puntuacion.max.x-DERECHA_PUNTUACION;
	pantalla->puntuacion.fin.y = pantalla->puntuacion.max.y-ABAJO_PUNTUACION;
	pantalla->puntuacion.principio.x = IZQUIERDA_PUNTUACION;
	pantalla->puntuacion.principio.y = ARRIBA_PUNTUACION;

	//mvprintw(50,50,"x_o--> %i",pantalla->puntuacion.principio.x);
	//mvprintw(30,30,"x_f --> %i",pantalla->puntuacion.fin.x);
	refresh();

}

//PENDIETE CAMBIAR LA SIGUIENTE FUNCION PARA QUE SEA UNA SOLA Y NO REPETIR CODIGO

void dibuja_tablero(Pantalla pantalla){

	//JUEGO

	//Muro inferior		
	for(int i=0; i<pantalla.juego.fin.x-pantalla.juego.principio.x; i++)
		mvaddch(pantalla.juego.fin.y,pantalla.juego.fin.x-i,ACS_HLINE);
		mvaddch(pantalla.juego.fin.y,pantalla.juego.fin.x,ACS_LRCORNER);
		mvaddch(pantalla.juego.principio.y,pantalla.juego.principio.x,ACS_ULCORNER);

	//Muro superior
	for(int i=0; i<pantalla.juego.fin.x-pantalla.juego.principio.x; i++)
		mvaddch(pantalla.juego.principio.y,pantalla.juego.fin.x-i,ACS_HLINE);
		mvaddch(pantalla.juego.principio.y,pantalla.juego.fin.x,ACS_URCORNER);
		mvaddch(pantalla.juego.fin.y,pantalla.juego.principio.x,ACS_LLCORNER);

	//Muro izquierda
	for(int i=1;i<pantalla.juego.fin.y-pantalla.juego.principio.y; i++)
		mvaddch(pantalla.juego.principio.y+i,pantalla.juego.principio.x,ACS_VLINE);
		
	//Muro derecha
	for(int i=1;i<pantalla.juego.fin.y-pantalla.juego.principio.y; i++)
		mvaddch(pantalla.juego.principio.y+i,pantalla.juego.fin.x,ACS_VLINE);


	//PUNTUACION

	//Muro inferior		
	for(int i=0; i<pantalla.puntuacion.fin.x-pantalla.puntuacion.principio.x; i++)
		mvaddch(pantalla.puntuacion.fin.y,pantalla.puntuacion.fin.x-i,ACS_HLINE);
		mvaddch(pantalla.puntuacion.fin.y,pantalla.puntuacion.fin.x,ACS_LRCORNER);
		mvaddch(pantalla.puntuacion.principio.y,pantalla.puntuacion.principio.x,ACS_ULCORNER);

	//Muro superior
	for(int i=0; i<pantalla.puntuacion.fin.x-pantalla.puntuacion.principio.x; i++)
		mvaddch(pantalla.puntuacion.principio.y,pantalla.puntuacion.fin.x-i,ACS_HLINE);
		mvaddch(pantalla.puntuacion.principio.y,pantalla.puntuacion.fin.x,ACS_URCORNER);
		mvaddch(pantalla.puntuacion.fin.y,pantalla.puntuacion.principio.x,ACS_LLCORNER);

	//Muro izquierda
	for(int i=1;i<pantalla.puntuacion.fin.y-pantalla.puntuacion.principio.y; i++)
		mvaddch(pantalla.puntuacion.principio.y+i,pantalla.puntuacion.principio.x,ACS_VLINE);
		
	//Muro derecha
	for(int i=1;i<pantalla.puntuacion.fin.y-pantalla.puntuacion.principio.y; i++)
		mvaddch(pantalla.puntuacion.principio.y+i,pantalla.puntuacion.fin.x,ACS_VLINE);


	refresh();

}

void tablero(Pantalla *pantalla){

	tam_tablero_juego(pantalla);
	tam_tablero_puntuacion(pantalla);
	dibuja_tablero(*pantalla);




}
