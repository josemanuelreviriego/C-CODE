#include "contenido_tablero.h"
#include "general.h"
#include "graficos.h"
#include "tablero.h"
#include "ncurses.h"
#include "figuras.h"

#define SUELO 300


void pintar_figura(Pila *pila){

		while(pila->tetris[0]){
				attron(COLOR_PAIR(pila->tetris[0]->color));
				mvaddch(pila->tetris[0]->coor.y,pila->tetris[0]->coor.x,ACS_CKBOARD);
				attroff(COLOR_PAIR(pila->tetris[0]->color));
				pila->tetris[0] = pila->tetris[0]->sig_estructura;
		}
	
}

int main(int argc, char *argv[]){
	
		Pila pila;
			pila.cima = 0;

		while(pila.cima < MAX_PIEZAS){push(&pila,construir_figura());};

		Pantalla pantalla;
		iniciar(&pantalla);	

		do{

				tablero(&pantalla);
				rellenar(pantalla);
				//if(pila.cima == 0 || pila.tetris[pila.cima]->coor.x == SUELO)
						//generar_figura(&pila); funcion para crear la primera figura y meterla en la pila, en lugar de usar el bucle de arriba
						
				pintar_figura(&pila);
				//mover_figura(&pila); funcion para poder ir moviendo la figura que se encuentre en la pila

				refresh();
				
		}while(true);


		terminar();

		  //printf("%i,%i",pantalla_juego.max.x,pantalla_juego.max.y);
    	// 204 / 60 --> Casa   
			// 188 / 51 --> Clase
	
	return EXIT_SUCCESS;

}
