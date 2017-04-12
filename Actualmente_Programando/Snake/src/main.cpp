#include "main.h"

#define TAM_INICIAL 5

CoorCuerpo *nuevo_cuerpo(int *y,int *x){

	CoorCuerpo *nuevo;

	nuevo = (CoorCuerpo *)malloc(sizeof(CoorCuerpo));

	nuevo->coor_y =*y;
	nuevo->coor_x =(*x)--;



	return nuevo;

}


bool push(CuerpoSerpiente *pila,CoorCuerpo *nuevo){

	if(pila->cima >= TAM_MAX)
		return false;

	pila->cuerpo[pila->cima++] = nuevo;

	return true;

}

int main (){
	
	WINDOW *w = initscr();
	int max_y,max_x;
	int y,x;
	CuerpoSerpiente serpiente_pantalla;

	serpiente_pantalla.cima = 0;

	getmaxyx(w,max_y,max_x);

		y = max_y/2;
		x = max_x/2;

	for(int i=0; i<TAM_INICIAL; i++)
		push(&serpiente_pantalla,nuevo_cuerpo(&y,&x));
	
	for(int i=0; i<TAM_INICIAL; i++)
		mvprintw(serpiente_pantalla.cuerpo[0]->coor_y,serpiente_pantalla.cuerpo[0]->coor_x,"o");









	
	refresh();
	sleep(3);

	endwin();

	return EXIT_SUCCESS;

}
