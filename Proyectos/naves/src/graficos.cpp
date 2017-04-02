#include "graficos.h"

void iniciar_colores(){

	start_color();	
		init_pair(1,COLOR_BLACK,COLOR_BLACK);
	

}



void iniciar_curses(RegistroNave *mostrar,int *max_y,int *max_x){

	WINDOW *w = initscr();
	getmaxyx(w,*max_y,*max_x);
	iniciar_colores();
	curs_set(0);


}


//JUEGO

void empezar_juego(RegistroNave *mostrar){

	do{

		for(int i=0; i<MAX_NAV; i++)
			mvprintw(mostrar->en_juego[i]->x,mostrar->en_juego[i]->y,"°");
			refresh();


	}while(true);

}

void terminar_juego(){


	endwin();

}

