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

}

void borrar_figura(Pila pila){

		while(pila.tetris[0]){

				attron(COLOR_PAIR(pila.tetris[0]->color));
				mvaddch(pila.tetris[0]->coor.y,pila.tetris[0]->coor.x,' ');
				attroff(COLOR_PAIR(pila.tetris[0]->color));
				pila.tetris[0] = pila.tetris[0]->sig_estructura;
		}

}

void gravedad_figura(Pila pila){

		while(pila.tetris[0]){
			pila.tetris[0]->coor.y+=0.1;
			pila.tetris[0] = pila.tetris[0]->sig_estructura;
		}

}

void mover_figura(Pila pila){

 	int direccion = getch();
 	switch(direccion){

		case KEY_RIGHT:
			while(pila.tetris[0]){
				pila.tetris[0]->coor.x+=1.5;
				pila.tetris[0] = pila.tetris[0]->sig_estructura;
			}
			break;

		case KEY_LEFT:
			while(pila.tetris[0]){
				pila.tetris[0]->coor.x-=1.5;
				pila.tetris[0] = pila.tetris[0]->sig_estructura;
			}
			break;
	}

}

int main(int argc, char *argv[]){
	
		Pila pila;
			pila.cima = 0;

	//while(pila.cima < MAX_PIEZAS){push(&pila,construir_figura());};

		Pantalla pantalla;
		iniciar(&pantalla);	

					if(pila.cima == 0 || pila.tetris[pila.cima]->coor.x == SUELO)
						push(&pila,construir_figura());

		do{

				//tablero(&pantalla); Esta dando conflicto, pendiente ver donde falla
				//rellenar(pantalla); Igual que arriba

				pintar_figura(pila);
				gravedad_figura(pila);
				mover_figura(pila);
				
				//refresh(); Parece que getch() actua como refresh, pendiente confirmarlo
				clear();
			
		}while(true);


		terminar();

		  //printf("%i,%i",pantalla_juego.max.x,pantalla_juego.max.y);
    	// 204 / 60 --> Casa   
			// 188 / 51 --> Clase
	
	return EXIT_SUCCESS;

}
