#include <ncurses.h>

void iniciar_curses(WINDOW *w,int *max_y,int *max_x){

	w = initscr(); //La matriz sera la pantalla
	keypad(w,TRUE); //Activo teclas especiales
	curs_set(0); //Quito el cursor

	getmaxyx(w,*max_y,*max_x); //Obtengo el máximo de la pantalla x y

	if(has_colors()){  //Obtengo colores para usarlos despues
	
		start_color(); /* NOTA PERSONAL : METER MACROS PARA LOS COLORES */

		init_pair(1,COLOR_WHITE,COLOR_BLACK);
		init_pair(2,COLOR_GREEN,COLOR_BLACK);
		init_pair(3,COLOR_RED,COLOR_BLACK);
		init_pair(4,COLOR_CYAN,COLOR_BLACK);
		init_pair(5,COLOR_WHITE,COLOR_BLACK);
		init_pair(6,COLOR_MAGENTA,COLOR_BLACK);
		init_pair(7,COLOR_BLUE,COLOR_BLACK);
		init_pair(8,COLOR_YELLOW,COLOR_BLACK);

	}

}

void A_iniciar_juego(){

	do{

	mvprintw(500,500,"asdasd");



	}while(5==5);

}

void finalizar_curses(){

	curs_set(1); // devolvemos el cursor
	endwin();


}

int main (){

	WINDOW *w;
	int max_y,max_x; //Variables para el maximo de la matriz


	iniciar_curses(w,&max_y,&max_x);
	
	A_iniciar_juego();




	finalizar_curses();

	return 0;

}


