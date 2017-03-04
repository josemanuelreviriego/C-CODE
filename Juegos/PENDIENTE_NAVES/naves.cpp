#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include "tablero.h" //borde // marcadores // mover_nave // color nave


#define PJ 2
#define A 0
#define B 1

using namespace std;

struct principal{

	char cuerpo;
	int vidas;
	int municion;
	int y,x;

};

void estructura(){

	struct principal nave[PJ];

	nave[A].cuerpo = '*';
	nave[A].vidas = 5;
	nave[A].municion = 10;

}



void espacio(int y,int x){

	int numero = 30;

	//Fondo de color

	start_color();
	init_pair(1,COLOR_WHITE,COLOR_BLACK);
	
	//estrellas
	

	

	
}


void iniciar(int *y,int *x,int *tecla,int *nave_y,int *nave_x,int estrellas_y,int estrellas_x){

	do{
		
		pintar_final(y,x); //tablero.h
		marcadores(y,x);
		espacio(estrellas_y,estrellas_x);
		mover_nave(tecla,nave_y,nave_x); //tablero.h
		refresh();	
	
	}while(1);

}

int main(){

	WINDOW *w;
		w = initscr();
	
	keypad(w, TRUE);
	noecho();
	curs_set(0);

//	curs_set(0); //Quitar cursor

	int max_y,max_x;
	int pos_y,pos_x;
	int tecla;

	getmaxyx(w,max_y,max_x); //Obtenemos el máximo de la pantalla
	
		//centro de la pantalla

		pos_y = max_y/2;
		pos_x = max_x/2;

	iniciar(&max_y,&max_x,&tecla,&pos_y,&pos_x,pos_y,pos_x);
	
	curs_set(1);
	endwin();

	return EXIT_SUCCESS;

}
