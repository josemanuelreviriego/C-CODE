#include "general.h"
#include "graficos.h"
#include "tablero.h"

int main(int argc, char *argv[]){
	
		Pantalla pantalla_juego;
		Pantalla pantalla_puntuacion;

		iniciar(&pantalla_juego);	

		do{

				tablero(pantalla_juego,pantalla_puntuacion);

		}while(true);
		

		terminar();


        




	return EXIT_SUCCESS;

}
