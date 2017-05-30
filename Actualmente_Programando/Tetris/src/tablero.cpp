#include "tablero.h"

#define DERECHA_JUEGO 100
#define ABAJO_JUEGO 5
#define IZQUIERDA_JUEGO 50
#define ARRIBA_JUEGO 5

#define DERECHA_PUNTUACION 5
#define ABAJO_PUNTUACION 5
#define IZQUIERDA_PUNTUACION 150
#define ARRIBA_PUNTUACION 5

/*  PENDIENTE BUSCAR ALGUNA FORMA PARA QUE LAS 2 SIGUIENTE FUNCIONES SEA SOLO 1
 *  YA QUE SE ESTA REPITIENDO EL MISMO CODIGO
 *  */

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

void dibuja_tablero(Interfaz dibujar){

	//JUEGO

	//Muro inferior		
	for(int i=0; i<dibujar.fin.x-dibujar.principio.x; i++)
		mvaddch(dibujar.fin.y,dibujar.fin.x-i,ACS_HLINE);
		mvaddch(dibujar.fin.y,dibujar.fin.x,ACS_LRCORNER);
		mvaddch(dibujar.principio.y,dibujar.principio.x,ACS_ULCORNER);

	//Muro superior
	for(int i=0; i<dibujar.fin.x-dibujar.principio.x; i++)
		mvaddch(dibujar.principio.y,dibujar.fin.x-i,ACS_HLINE);
		mvaddch(dibujar.principio.y,dibujar.fin.x,ACS_URCORNER);
		mvaddch(dibujar.fin.y,dibujar.principio.x,ACS_LLCORNER);

	//Muro izquierda
	for(int i=1;i<dibujar.fin.y-dibujar.principio.y; i++)
		mvaddch(dibujar.principio.y+i,dibujar.principio.x,ACS_VLINE);
		
	//Muro derecha
	for(int i=1;i<dibujar.fin.y-dibujar.principio.y; i++)
		mvaddch(dibujar.principio.y+i,dibujar.fin.x,ACS_VLINE);

	refresh();

}

void tablero(Pantalla *pantalla){

	tam_tablero_juego(pantalla);
	tam_tablero_puntuacion(pantalla);
	dibuja_tablero(pantalla->juego);
	dibuja_tablero(pantalla->puntuacion);

}
