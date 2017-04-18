#include "graficos.h"


void iniciar_colores(){

        start_color();

                init_pair(1,COLOR_BLACK,COLOR_BLACK);
                init_pair(2,COLOR_RED,COLOR_BLACK);
                init_pair(3,COLOR_GREEN,COLOR_BLACK);
                init_pair(4,COLOR_YELLOW,COLOR_BLACK);
                init_pair(5,COLOR_BLUE,COLOR_BLACK);
                init_pair(6,COLOR_MAGENTA,COLOR_BLACK);
                init_pair(7,COLOR_CYAN,COLOR_BLACK);
                init_pair(8,COLOR_WHITE,COLOR_BLACK);

}


void iniciar_curses(int *max_y,int *max_x){

	WINDOW *w;
	w = initscr();
	iniciar_colores();
	curs_set(0);			//Desactiva el cursor
	noecho();			//No mostrar caracter pulsado
	keypad(stdscr,1); 		//Activa teclas especiales
	halfdelay(1);			//getch espera un tiempo
	getmaxyx(w,*max_y,*max_x);	//Me devuelve el tamaño máximo de la pantalla

	
}

void terminar_curses(){

	curs_set(1);//Activa el cursor
	clear();
	endwin();

}
