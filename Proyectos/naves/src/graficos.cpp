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

void iniciar_curses(RegistroNave *mostrar,double *max_y,double *max_x){

	WINDOW *w = initscr();
	getmaxyx(w,*max_y,*max_x);
	iniciar_colores();
	curs_set(0);


}

//JUEGO

void empezar_juego(RegistroNave *mostrar){

	double mover = 0;
	bool dibujarlas = 1;

	do{

			mvprintw(mostrar->en_juego[0]->x-mover,mostrar->en_juego[0]->y,"<^·^>");
			mvprintw(mostrar->en_juego[1]->x-mover,mostrar->en_juego[1]->y,"<^·^>");
			mvprintw(mostrar->en_juego[2]->x-mover,mostrar->en_juego[2]->y,"<^·^>");
			mvprintw(mostrar->en_juego[3]->x-mover,mostrar->en_juego[3]->y,"<^·^>");


			refresh();
			mvprintw(mostrar->en_juego[0]->x-mover,mostrar->en_juego[0]->y,"      ");
			mvprintw(mostrar->en_juego[1]->x-mover,mostrar->en_juego[1]->y,"      ");
			mvprintw(mostrar->en_juego[2]->x-mover,mostrar->en_juego[2]->y,"      ");
			mvprintw(mostrar->en_juego[3]->x-mover,mostrar->en_juego[3]->y,"      ");


			mover-= 0.0001;



	}while(true);

	
}

void terminar_juego(){


	endwin();

}

