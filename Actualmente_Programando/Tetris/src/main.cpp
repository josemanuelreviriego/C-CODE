#include "contenido_tablero.h"
#include "general.h"
#include "graficos.h"
#include "tablero.h"
#include "ncurses.h"
#include "creacion_figuras.h"
#include "figuras.h"

#define SUELO 45

int main(int argc, char *argv[]){
	
		Pila pila;
			pila.cima = 0;
		Pantalla pantalla;

		iniciar(&pantalla);	

		do{
				tablero(&pantalla);
				//rellenar(pantalla);

					if(pila.cima == 0 || pila.tetris[pila.cima-1]->coor.y > SUELO)
						push(&pila,construir_figura());





				
				mvprintw(SUELO,SUELO,"a");
				pintar_figura(pila);
				gravedad_figura(pila);
				mover_figura(pila);
			
				refresh();
				clear();
			
		}while(true);

		terminar();

	return EXIT_SUCCESS;

}
