#include "general.h"
#include "graficos.h"
#include "tablero.h"

int main(int argc, char *argv[]){
	
		Pantalla pantalla_juego;
		Pantalla pantalla_puntuacion;

		iniciar(&pantalla_juego);	

		do{

				tablero(pantalla_juego,pantalla_puntuacion);
				refresh();

		}while(true);
		

		terminar();

		printf("%i,%i",pantalla_juego.fin.x,pantalla_juego.fin.y);
        




	return EXIT_SUCCESS;

}
