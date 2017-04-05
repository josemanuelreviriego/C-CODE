/*
 
	MAIN.CPP
 
*/
#include "main.h"

#define TAM_MENU 30

void dibujar_menu(int *y,int *x){

	for(int i=0; i<TAM_MENU;i++)
		mvaddch(*y,*x+i,ACS_HLINE);

		mvaddch(*y,*x,ACS_ULCORNER);
	
	for(int i=1; i<TAM_MENU;i++)
		mvaddch(*y+i,*x,ACS_VLINE);

		mvaddch(*y+TAM_MENU,*x,ACS_LLCORNER);
	
	for(int i=1; i<TAM_MENU;i++)
		mvaddch(*y+TAM_MENU,*x+i,ACS_HLINE);

		mvaddch(*y+TAM_MENU,*x+TAM_MENU,ACS_LRCORNER);

	for(int i=1; i<TAM_MENU;i++)
		mvaddch((*y+TAM_MENU)-i,*x+TAM_MENU,ACS_VLINE);

		mvaddch(*y,*x+TAM_MENU,ACS_URCORNER);


}

void opciones_menu(int y,int x){

	y+=3;
	x+=6;

	mvprintw(y+3,x,"1.-Iniciar Partida ");
	mvprintw(y+6,x,"2.-Poner Nombre ");
	mvprintw(y+9,x,"3.-Ver puntuaciones ");
	mvprintw(y+12,x,"4.-Reglas ");
	mvprintw(y+15,x,"5.-Autor ");
	mvprintw(y+18,x,"6.-Salir ");


}

void menu(int y,int x){

	y-=7.5;

	dibujar_menu(&y,&x);
	opciones_menu(y,x);

}



int main (){
	
	char tablero_usuario [MOSTRAR][MOSTRAR];
	char tablero_programador [NO_MOSTRAR] [NO_MOSTRAR];
	DatosJugador jugador_x;
	DatosJugador jugador_o;
	bool turno;
	int max_x,max_y;
	int centro_x,centro_y;

	srand(time(NULL));
	turno = rand() %2;

	iniciar_curses(&max_x,&max_y,&centro_x,&centro_y);
	
	do{

		menu(centro_y,centro_x);
		refresh();

	}while(true);

			nombres(&jugador_x,&jugador_o);
			
		empezar_partida(centro_y,centro_x);

	terminar_curses();



	return EXIT_SUCCESS;

}
