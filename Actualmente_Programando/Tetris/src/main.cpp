#include "contenido_tablero.h"
#include "general.h"
#include "graficos.h"
#include "tablero.h"






int main(int argc, char *argv[]){
	
		Pantalla pantalla;

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
