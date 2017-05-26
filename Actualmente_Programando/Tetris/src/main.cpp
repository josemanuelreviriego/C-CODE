#include "contenido_tablero.h"
#include "general.h"
#include "graficos.h"
#include "tablero.h"
#include "ncurses.h"
#include "figuras.h"

#define SUELO 300

void pintar_figura(Pila pila){

		while(pila.tetris[0]){

				attron(COLOR_PAIR(pila.tetris[0]->color));
				mvaddch(pila.tetris[0]->coor.y,pila.tetris[0]->coor.x,ACS_CKBOARD);
				attroff(COLOR_PAIR(pila.tetris[0]->color));
				pila.tetris[0] = pila.tetris[0]->sig_estructura;
		}

					refresh();
}

void borrar_figura(Pila pila){

		while(pila.tetris[0]){

				attron(COLOR_PAIR(pila.tetris[0]->color));
				mvaddch(pila.tetris[0]->coor.y,pila.tetris[0]->coor.x,' ');
				attroff(COLOR_PAIR(pila.tetris[0]->color));
				pila.tetris[0] = pila.tetris[0]->sig_estructura;
		}

}

void mover_figura(Pila pila){

		while(pila.tetris[0]){
			pila.tetris[0]->coor.y+=0.00001;
			pila.tetris[0] = pila.tetris[0]->sig_estructura;
		}
}

int main(int argc, char *argv[]){
	
		Pila pila;
			pila.cima = 0;

	//while(pila.cima < MAX_PIEZAS){push(&pila,construir_figura());};

		Pantalla pantalla;
		iniciar(&pantalla);	

		int p;

		do{

				tablero(&pantalla);
				rellenar(pantalla);

				do{

					if(pila.cima == 0 || pila.tetris[pila.cima]->coor.x == SUELO)
						push(&pila,construir_figura());
					
				mover_figura(pila);
				pintar_figura(pila);
				borrar_figura(pila);

				}while(1);


				
		}while(true);


		terminar();

		  //printf("%i,%i",pantalla_juego.max.x,pantalla_juego.max.y);
    	// 204 / 60 --> Casa   
			// 188 / 51 --> Clase
	
	return EXIT_SUCCESS;

}
