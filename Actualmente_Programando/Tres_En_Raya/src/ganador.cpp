#include "ganador.h"

void jugador_x(int ganador[NO_MOSTRAR][NO_MOSTRAR]){

	if(ganador[0][0] == 0 && ganador[0][1] == 0 && ganador[0][2] == 0)
		mvprintw(5,5,"GANA J1");

	if(ganador[0][0] == 0 && ganador[1][0] == 0 && ganador[2][0] == 0)
		mvprintw(5,5,"GANA J1");

	if(ganador[0][0] == 0 && ganador[1][1] == 0 && ganador[2][2] == 0)
		mvprintw(5,5,"GANA J1");


	if(ganador[0][1] == 0 && ganador[1][1] == 0 && ganador[2][1] == 0)
		mvprintw(5,5,"GANA J1");



	if(ganador[0][2] == 0 && ganador[1][1] == 0 && ganador[2][0] == 0)
		mvprintw(5,5,"GANA J1"); 


	if(ganador[0][2] == 0 && ganador[1][2] == 0 && ganador[2][2] == 0)
		mvprintw(5,5,"GANA J1");


	if(ganador[1][0] == 0 && ganador[1][1] == 0 && ganador[1][2] == 0)
		mvprintw(5,5,"GANA J1");

	if(ganador[2][0] == 0 && ganador[2][1] == 0 && ganador[2][2] == 0)
		mvprintw(5,5,"GANA J1"); 

}

void jugador_y(int ganador[NO_MOSTRAR][NO_MOSTRAR]){

	if(ganador[0][0] == 1 && ganador[0][1] == 1 && ganador[0][2] == 1)
		mvprintw(5,5,"GANA J1");

	if(ganador[0][0] == 1 && ganador[1][0] == 1 && ganador[2][0] == 1)
		mvprintw(5,5,"GANA J1");

	if(ganador[0][0] == 1 && ganador[1][1] == 1 && ganador[2][2] == 1)
		mvprintw(5,5,"GANA J1");


	if(ganador[0][1] == 1 && ganador[1][1] == 1 && ganador[2][1] == 1)
		mvprintw(5,5,"GANA J1");



	if(ganador[0][2] == 1 && ganador[1][1] == 1 && ganador[2][0] == 1)
		mvprintw(5,5,"GANA J1");


	if(ganador[0][2] == 1 && ganador[1][2] == 1 && ganador[2][2] == 1)
		mvprintw(5,5,"GANA J1");


	if(ganador[1][0] == 1 && ganador[1][1] == 1 && ganador[1][2] == 1)
		mvprintw(5,5,"GANA J1");

	if(ganador[2][0] == 1 && ganador[2][1] == 1 && ganador[2][2] == 1)
		mvprintw(5,5,"GANA J1"); 

}

void felicitar(int ganador[NO_MOSTRAR][NO_MOSTRAR]){

	jugador_x(ganador);
	jugador_y(ganador);


	refresh();

}
