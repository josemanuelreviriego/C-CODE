/*

	GRAFICOS.CPP 
 
*/



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


void iniciar_curses(int *max_x,int *max_y,int *x,int *y){

	WINDOW *w;
	w = initscr();
	iniciar_colores();
	curs_set(0);
	getmaxyx(w,*max_y,*max_x);

	*x = *max_x/2;
	*y = *max_y/2;

	
	//VALORES PARA AJUSTAREL DIBUJO
	*x -= 17.5;
	*y -= 10;

	
}

void terminar_curses(){

	endwin();

}
