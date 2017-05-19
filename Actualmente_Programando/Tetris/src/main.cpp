#include "general.h"
#include "graficos.h"
#include "tablero.h"

#define ALTO 2
#define MARGIN 5

void rellenar(Pantalla pantalla){

		int y = pantalla.puntuacion.principio.y + ALTO;
		int x = pantalla.puntuacion.fin.x - pantalla.puntuacion.principio.x;
				x/=2;
				x = pantalla.puntuacion.fin.x - x;
				x -= MARGIN;

		//x_f - x_o = A
		//A/2 = B
		//xf - B = C

		//CASA									CLASE
				
		// 199 - 150 = 50				180 - 150
		// 50/2 = 25						30/2 = 15
		// 199 - 25 = 175				180 - 15 = 165
		// 175 - 5							165 - 5
		// 170									160
	
		mvprintw(y,x,"PUNTUACION");
		refresh();
		
}

int main(int argc, char *argv[]){
	
		Pantalla pantalla;

		iniciar(&pantalla);	
		
		do{

				tablero(&pantalla);
				rellenar(pantalla);

				mvaddch(20,30,ACS_CKBOARD);
				mvaddch(20,31,ACS_CKBOARD);
				
				//mvprintw(pantalla_juego.max.y-1,pantalla_juego.max.x-1,"a");
				refresh();

		}while(true);


		terminar();

		  //printf("%i,%i",pantalla_juego.max.x,pantalla_juego.max.y);
    	// 204 / 60 --> Casa   
			// 188 / 51 --> Clase
		
	
		printf("\200");


	return EXIT_SUCCESS;

}
