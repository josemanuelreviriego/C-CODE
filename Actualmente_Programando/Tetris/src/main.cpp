#include "contenido_tablero.h"
#include "general.h"
#include "graficos.h"
#include "tablero.h"

#include "ncurses.h"

#include <string.h>

#define MAX 5

typedef struct Figura{

		int num_figura;
		Coordendas coor;
		Figura *sig_cuerpo;

}Figura;

bool cuerpo_vacio(Figura **primera){return !*primera;}

void construir_figura(Figura **primera,Figura **ultima,int n){

		Figura *nuevo_cuerpo = (Figura *)malloc(sizeof(Figura));
				nuevo_cuerpo->num_figura = n;
				nuevo_cuerpo->sig_cuerpo = NULL;

		if(cuerpo_vacio(primera))
				*primera = nuevo_cuerpo;
		else
				(*ultima)->sig_cuerpo = nuevo_cuerpo;


		*ultima = nuevo_cuerpo;

}

int main(int argc, char *argv[]){
	
		Figura *inicio_cuadrado = NULL;
		Figura *fin_cuadrado = NULL;

		for(int i=0;i<8;i++)
				construir_figura(&inicio_cuadrado,&fin_cuadrado,i);
		
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
