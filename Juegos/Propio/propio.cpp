#include <stdio.h>
#include <stdlib.h>
#include <curses.h>

#define MAX 3

void pintar_final(int *y,int *x){

	//Abajo
	
	for(int i=0; i<*x; i++)
		mvprintw(*y-1,*x-i,"_");

	//Arriba

	for(int i=0; i<*x; i++)
		mvprintw(0,*x-i,"_");

	//Derecha

	for(int i=0; i<*y; i++)
		mvprintw(*y-i,*x-1,"|");
	
	//Izquierda

	for(int i=0; i<*y; i++)
		mvprintw(*y-i,0,"|");


}

void iniciar(int *y,int *x){

	do{
		clear();
		pintar_final(y,x);
		refresh();
	
	
	}while(1);




}

int main (){
	
	WINDOW *w;
		w = initscr();

	int max_y,max_x;
	int pos_y,pos_x;

	getmaxyx(w,max_y,max_x); //Obtenemos el máximo de la pantalla
	
		//centro de la pantalla

		pos_y = max_y/2;
		pos_x = max_x/2;

	iniciar(&max_y,&max_x);

	endwin();

	

	return EXIT_SUCCESS;

}
