/*

   JUEGO.CPP

*/
#include "juego.h"


void indicar_turno(int y, int x,bool *juega){

	mvprintw(y-5,x+4,"Es el turno del jugador %i",*juega+1);
	refresh();

}

void posicion_juego(int y,int x,char *posicion){

	scanf(" %c",posicion);

}

void numeros_tablero(int y,int x,char *posicion){

	if(*posicion == 'Z'){

		mvaddch(y+3,x+5,'1'); //00
		mvaddch(y+3,x+16,'2'); //01
		mvaddch(y+3,x+27,'3'); //02

		mvaddch(y+9,x+5,'4'); //10
		mvaddch(y+9,x+16,'5'); //11
		mvaddch(y+9,x+27,'6'); //12

		mvaddch(y+15,x+5,'7'); //20
		mvaddch(y+15,x+16,'8'); //21
		mvaddch(y+15,x+27,'9'); //22

	}


	if(*posicion == '1'){

		mvprintw(y+3,x+5,"a"); //00
		mvaddch(y+3,x+16,'2'); //01
		mvaddch(y+3,x+27,'3'); //02

		mvaddch(y+9,x+5,'4'); //10
		mvaddch(y+9,x+16,'5'); //11
		mvaddch(y+9,x+27,'6'); //12

		mvaddch(y+15,x+5,'7'); //20
		mvaddch(y+15,x+16,'8'); //21
		mvaddch(y+15,x+27,'9'); //22

	}

		refresh();

}


void empezar_partida(int y, int x){

	bool sorteo;
	char posicion = 'Z';

	srand(time(NULL));
	sorteo = rand() %2;


	do{

		pintar_tablero(&y,&x);	

		numeros_tablero(y,x,&posicion);

		indicar_turno(y,x,&sorteo);
		posicion_juego(y,x,&posicion);



		sorteo^=1;

	}while(1);

}
