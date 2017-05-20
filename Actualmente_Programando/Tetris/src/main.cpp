#include "contenido_tablero.h"
#include "general.h"
#include "graficos.h"
#include "tablero.h"

#include "ncurses.h"

#include <string.h>

#define MAX 5

typedef struct Figura{

		int num_figura;
		char figura;
		Coordendas coor;
		Figura *sig_cuerpo;

}Figura;

typedef struct{

		int cima;
		Figura *tetris[50];

}Pila;

bool cuerpo_vacio(Figura **primera){return !*primera;}

Figura *construir_figura(Figura **primera,Figura **ultima,int n){

		*primera = NULL;
		*ultima = NULL;

		for(int i=0;i<8;i++){
				Figura *nuevo_cuerpo = (Figura *)malloc(sizeof(Figura));
						nuevo_cuerpo->num_figura = n;
						nuevo_cuerpo->sig_cuerpo = NULL;

				if(cuerpo_vacio(primera))
						*primera = nuevo_cuerpo;
				else
						(*ultima)->sig_cuerpo = nuevo_cuerpo;


				*ultima = nuevo_cuerpo;
		}

		return *primera;

}

void push(Pila *pila,Figura *figura){

		pila->tetris[pila->cima] = figura;
		pila->cima++;

}


int main(int argc, char *argv[]){
	
		Figura *inicio= NULL;
		Figura *fin= NULL;
		
		Pila pila;
			pila.cima = 0;

		while(pila.cima < 50){push(&pila,construir_figura(&inicio,&fin,pila.cima));};

		for(int i=0; i<50; i++){
				while(pila.tetris[i] != NULL){

						printf("%i",pila.tetris[i]->num_figura);
						pila.tetris[i] = pila.tetris[i]->sig_cuerpo;

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
