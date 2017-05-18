#include "general.h"
#include "graficos.h"
#include "tablero.h"

#define ALTO 10

void rellenar(Pantalla puntuacion){

		int y = puntuacion.principio.y - ALTO;
		int x = puntuacion.fin.x - puntuacion.principio.x;
			x /=2;

		//x_f - x_o = A
		//A/2 = B
		//xf - B = C
		//

		// 199 - 150 = 50
		// 50/2 = 25
		// 199 - 25 = 175
		// 175
		//
	
		mvprintw(7,170,"PUNTUACION");
		refresh();
		




}

int main(int argc, char *argv[]){
	
		Pantalla pantalla_juego;
		Pantalla pantalla_puntuacion;

		iniciar(&pantalla_juego);	
		
		do{

				tablero(pantalla_juego,pantalla_puntuacion);
				rellenar(pantalla_puntuacion);
				//mvprintw(pantalla_juego.max.y-1,pantalla_juego.max.x-1,"a");
				refresh();

		}while(true);
		

		terminar();

		printf("%i,%i",pantalla_juego.max.x,pantalla_juego.max.y);
    	// 204 / 60 --> Casa   




	return EXIT_SUCCESS;

}
