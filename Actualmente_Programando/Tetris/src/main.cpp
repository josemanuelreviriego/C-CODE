#include "contenido_tablero.h"
#include "general.h"
#include "graficos.h"
#include "tablero.h"
#include "ncurses.h"
#include "creacion_figuras.h"
#include "figuras.h"

#define SUELO pantalla.juego.fin.y-3
#define FIGURA_ACTUAL pila.cima-1

int main(int argc, char *argv[]){
	
	Pila pila;
		pila.cima = 0;
	Pantalla pantalla;

	iniciar(&pantalla);	

	push(&pila,construir_figura());

	do{

		tablero(&pantalla);
		rellenar(pantalla);

		if(pila.tetris[FIGURA_ACTUAL]->coor.y == SUELO)
			push(&pila,construir_figura());
		
		pintar_figura(pila.tetris[FIGURA_ACTUAL]);
		pintar_pila(pila);

		mvprintw(SUELO,25,"Pila actual %i",FIGURA_ACTUAL);

		if(pila.tetris[FIGURA_ACTUAL]->coor.y < SUELO)
			gravedad_figura(pila.tetris[FIGURA_ACTUAL]);

		mover_figura(pila.tetris[FIGURA_ACTUAL]);
	
		refresh();
		clear();
		
	}while(true);

	terminar();

	return EXIT_SUCCESS;

}
