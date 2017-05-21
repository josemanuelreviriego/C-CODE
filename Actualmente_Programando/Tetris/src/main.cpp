#include "contenido_tablero.h"
#include "general.h"
#include "graficos.h"
#include "tablero.h"
#include "ncurses.h"
#include "figuras.h"

void pintar_figura(Pila *figura){

		attron(COLOR_PAIR(figura->tetris[0]->color));
		while(figura->tetris[0]->sig_estructura){
				mvaddch(figura->tetris[0]->coor.y,figura->tetris[0]->coor.x,ACS_CKBOARD);
				figura->tetris[0] = figura->tetris[0]->sig_estructura;
		}
		mvaddch(figura->tetris[0]->coor.y,figura->tetris[0]->coor.x,ACS_CKBOARD);
		attroff(COLOR_PAIR(figura->tetris[0]->color));
		
}

int main(int argc, char *argv[]){
	
		Pila pila;
			pila.cima = 0;

		while(pila.cima < MAX_PIEZAS){push(&pila,construir_figura(pila.cima));};
/* 
		for(int i=0; i<MAX_PIEZAS; i++){
				while(pila.tetris[i] != NULL){

						printf("%i",pila.tetris[i]->num_estructura);
						pila.tetris[i] = pila.tetris[i]->sig_estructura;

				}
				printf("\n");
		}
	*/	

		
	
		Pantalla pantalla;
		iniciar(&pantalla);	

		do{

				tablero(&pantalla);
				rellenar(pantalla);
				pintar_figura(&pila);

				refresh();
				
		}while(true);


		terminar();

		  //printf("%i,%i",pantalla_juego.max.x,pantalla_juego.max.y);
    	// 204 / 60 --> Casa   
			// 188 / 51 --> Clase
		
	
		printf("\200");

		
	return EXIT_SUCCESS;

}
