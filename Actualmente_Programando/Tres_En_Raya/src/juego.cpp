/*

   JUEGO.CPP

*/
#include "juego.h"
#include "ganador.h"


void indicar_turno(int y, int x,bool *juega){

	mvprintw(y-5,x+4,"Es el turno del jugador %i",*juega+1);
	refresh();

}

void poner_jugada(int y,int x,char *jugada, char adaptar[MOSTRAR][MOSTRAR],char *ficha,bool *sorteo,int ganador[NO_MOSTRAR][NO_MOSTRAR]){

	scanf(" %c",jugada);

	switch(*jugada){
	
		case '1':
			if(adaptar[0][0] == '1'){
				adaptar[0][0] = *ficha;
				ganador[0][0] = *sorteo;
			}
			else
				*sorteo^=1;
			break;

		case '2':
			if(adaptar[0][1] == '2'){
				adaptar[0][1] = *ficha;
				ganador[0][1] = *sorteo;
			}
				
			else
				*sorteo^=1;
			break;

		case '3':
			if(adaptar[0][2] == '3'){
				adaptar[0][2] = *ficha;
				ganador[0][2] = *sorteo;
			}
			else
				*sorteo^=1;
			break;

		case '4':
			if(adaptar[1][0] == '4'){
				adaptar[1][0] = *ficha;
				ganador[1][0] = *sorteo;
			}
			else
				*sorteo^=1;
			break;

		case '5':
			if(adaptar[1][1] == '5'){
				adaptar[1][1] = *ficha;
				ganador[1][1] = *sorteo;
			}
			else
				*sorteo^=1;
			break;

		case '6':
			if(adaptar[1][2] == '6'){
				adaptar[1][2] = *ficha;
				ganador[1][2] = *sorteo;
			}
			else
				*sorteo^=1;
			break;

		case '7':
			if(adaptar[2][0] == '7'){
				adaptar[2][0] = *ficha;
				ganador[2][0] = *sorteo;
			}
			else
				*sorteo^=1;
			break;

		case '8':
			if(adaptar[2][1] == '8'){
				adaptar[2][1] = *ficha;
				ganador[2][1] = *sorteo;
			}
			else
				*sorteo^=1;
			break;

		case '9':
			if(adaptar[2][2] == '9'){
				adaptar[2][2] = *ficha;
				ganador[2][2] = *sorteo;
			}
			else
				*sorteo^=1;
			break;
	}
}

void empezar_partida(int y, int x){

	bool sorteo;
	char posicion = 'Z';
	char jugada;
	char ficha;
	int ganador[NO_MOSTRAR][NO_MOSTRAR]={

		{9,9,9},
		{9,9,9},
		{9,9,9}
	
	};
	char mi_tablero[MOSTRAR][MOSTRAR] = {
	
		{'1','2','3'},
		{'4','5','6'},
		{'7','8','9'}
	
	};

	srand(time(NULL));
	sorteo = rand() %2;

	do{

		if(sorteo == 0)
			ficha = 'X';
		else
			ficha = 'O';
		
		pintar_tablero(&y,&x);
		numeros_tablero(y,x,mi_tablero);
		indicar_turno(y,x,&sorteo);
		poner_jugada(y,x,&jugada,mi_tablero,&ficha,&sorteo,ganador);
		felicitar(ganador);

		sorteo^=1;

	}while(1);

}
