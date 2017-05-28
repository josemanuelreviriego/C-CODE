#include "graficos.h"

void iniciar_colores(){

    start_color();

    init_pair(GRIS,COLOR_WHITE,COLOR_BLACK);
    init_pair(FONDO,COLOR_BLACK,COLOR_BLACK);
    init_pair(ROJO,COLOR_RED,COLOR_BLACK);
    init_pair(VERDE,COLOR_GREEN,COLOR_BLACK);
    init_pair(AMARILLO,COLOR_YELLOW,COLOR_BLACK);
    init_pair(AZUL,COLOR_BLUE,COLOR_BLACK);
    init_pair(MORADO,COLOR_MAGENTA,COLOR_BLACK);
    init_pair(AQUA,COLOR_CYAN,COLOR_BLACK);

}


void iniciar(Pantalla *pantalla){

	WINDOW *w;
	w = initscr();
	iniciar_colores();
	curs_set(0);			//Desactiva el cursor
	noecho();			//No mostrar caracter pulsado
	keypad(stdscr,1); 		//Activa teclas especiales
	halfdelay(1);			//getch espera un tiempo
	getmaxyx(w,pantalla->principal.max.y,pantalla->principal.max.x);	//Me devuelve el tamaño máximo de la pantalla

	pantalla->puntuacion.max.y = pantalla->principal.max.y;
	pantalla->puntuacion.max.x = pantalla->principal.max.x;

	pantalla->juego.max.y = pantalla->principal.max.y;
	pantalla->juego.max.x = pantalla->principal.max.x;
	
}

void terminar(){

	curs_set(1);//Activa el cursor
	clear();
	endwin();

}
