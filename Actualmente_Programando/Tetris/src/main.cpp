#include "contenido_tablero.h"
#include "general.h"
#include "graficos.h"
#include "tablero.h"

#include "ncurses.h"

#include <string.h>

#define MAX_PIEZAS 50
#define PIEZAS_FIGURA 8

typedef struct Figura{

		int num_estructura;
		char figura;
		Coordendas coor;
		Figura *sig_estructura;

}Figura;

typedef struct{

		int cima;
		Figura *tetris[MAX_PIEZAS];

}Pila;

Figura *construir_figura(int n){

		Figura *primera_estructura = NULL;
		Figura *ultima_estructura = NULL;

		for(int i=0;i<PIEZAS_FIGURA;i++){
				Figura *nueva_estructura = (Figura *)malloc(sizeof(Figura));
						nueva_estructura->num_estructura = n; //Cambiar n por i
						nueva_estructura->sig_estructura = NULL;

				if(primera_estructura == NULL)
						primera_estructura = nueva_estructura;
				else
						ultima_estructura->sig_estructura = nueva_estructura;

				ultima_estructura = nueva_estructura;
		}

		return primera_estructura;
}

void push(Pila *pila,Figura *figura){

		//PENDITE CREAR FUNCION POP
		pila->tetris[pila->cima] = figura;
		pila->cima++;

}


int main(int argc, char *argv[]){
	
		Pila pila;
			pila.cima = 0;

		while(pila.cima < MAX_PIEZAS){push(&pila,construir_figura(pila.cima));};

		for(int i=0; i<MAX_PIEZAS; i++){
				while(pila.tetris[i] != NULL){

						printf("%i",pila.tetris[i]->num_estructura);
						pila.tetris[i] = pila.tetris[i]->sig_estructura;

				}
				printf("\n");
		}
		

		/*
	
		Pantalla pantalla;
		iniciar(&pantalla);	

		do{

				tablero(&pantalla);
				rellenar(pantalla);
  
				attron(COLOR_PAIR(3));
				
				mvaddch(50,50,ACS_CKBOARD);
				mvaddch(50,51,ACS_CKBOARD);


				mvaddch(51,50,ACS_CKBOARD);
				mvaddch(51,51,ACS_CKBOARD);


				mvaddch(50,52,ACS_CKBOARD);
				mvaddch(50,53,ACS_CKBOARD);

				mvaddch(51,52,ACS_CKBOARD);
				mvaddch(51,53,ACS_CKBOARD);
				
				attroff(COLOR_PAIR(3));

				refresh();
				
		}while(true);


		terminar();

		  //printf("%i,%i",pantalla_juego.max.x,pantalla_juego.max.y);
    	// 204 / 60 --> Casa   
			// 188 / 51 --> Clase
		
	
		printf("\200");

*/
	return EXIT_SUCCESS;

}
