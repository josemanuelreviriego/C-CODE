/*

   JUEGO.CPP

*/
#include "juego.h"

void empezar_partida(int y, int x){

	do{
		pintar_tablero(&y,&x);



		//Posiciones

		mvaddch(y+3,x+5,'1'); //00
		mvaddch(y+3,x+16,'2'); //01
		mvaddch(y+3,x+27,'3'); //02

		mvaddch(y+9,x+5,'4'); //10
		mvaddch(y+9,x+16,'5'); //11
		mvaddch(y+9,x+27,'6'); //12

		mvaddch(y+15,x+5,'7'); //20
		mvaddch(y+15,x+16,'8'); //21
		mvaddch(y+15,x+27,'9'); //22


		refresh();


	}while(1);

}
