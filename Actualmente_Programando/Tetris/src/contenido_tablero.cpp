#include "contenido_tablero.h"

#define ALTO 2
#define MARGEN 5

void rellenar(Pantalla pantalla){

		int y = pantalla.puntuacion.principio.y + ALTO;
		int x = pantalla.puntuacion.fin.x - pantalla.puntuacion.principio.x;
				x/=2;
				x = pantalla.puntuacion.fin.x - x;
				x -= MARGEN;

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
