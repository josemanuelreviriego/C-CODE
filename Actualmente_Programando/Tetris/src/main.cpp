#include "contenido_tablero.h"
#include "general.h"
#include "graficos.h"
#include "tablero.h"

#include "ncurses.h"

#include <string.h>

#define MAX 5

typedef struct Figuras{

		Coordendas coor;
		int num_cuerpo;
		Figuras *cuerpo;

}Figuras;

Figuras NuevoCuerpo(Figuras *figura){

		Figuras *reservar = (Figuras *)malloc(sizeof(Figuras));
				reservar->cuerpo = NULL;

		if(figura->num_cuerpo <3){

			reservar->coor.x = figura->coor.x;
			reservar->coor.y = figura->coor.y+1;

		}else{
			
			reservar->coor.x = figura->coor.x+1;
			reservar->coor.y = figura->coor.y;
			
		}
		
		//figura->cuerpo = reservar;
		figura->num_cuerpo++;
		
}




int main(int argc, char *argv[]){
	
		Pantalla pantalla;
		Figuras figura;
			figura.num_cuerpo = 0;
			figura.cuerpo = NULL;

		NuevoCuerpo(&figura);
		


		iniciar(&pantalla);	
		
		do{

				tablero(&pantalla);
				rellenar(pantalla);
				refresh();
				
		}while(true);


		terminar();

		  //printf("%i,%i",pantalla_juego.max.x,pantalla_juego.max.y);
    	// 204 / 60 --> Casa   
			// 188 / 51 --> Clase
		
	
		printf("\200");


	return EXIT_SUCCESS;

}
