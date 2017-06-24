#include "ganador.h"

#define GANAJ1 0
#define GANAJ2 1
#define NO_GANA 2
#define EMPATE 2



int jugador_x(int ganador[NO_MOSTRAR][NO_MOSTRAR]){

	if(ganador[0][0] == 0 && ganador[0][1] == 0 && ganador[0][2] == 0)
		return GANAJ1;

	if(ganador[0][0] == 0 && ganador[1][0] == 0 && ganador[2][0] == 0)
		return GANAJ1;


	if(ganador[0][0] == 0 && ganador[1][1] == 0 && ganador[2][2] == 0)
		return GANAJ1;



	if(ganador[0][1] == 0 && ganador[1][1] == 0 && ganador[2][1] == 0)
		return GANAJ1;




	if(ganador[0][2] == 0 && ganador[1][1] == 0 && ganador[2][0] == 0)
		return GANAJ1;



	if(ganador[0][2] == 0 && ganador[1][2] == 0 && ganador[2][2] == 0)
		return GANAJ1;



	if(ganador[1][0] == 0 && ganador[1][1] == 0 && ganador[1][2] == 0)
		return GANAJ1;


	if(ganador[2][0] == 0 && ganador[2][1] == 0 && ganador[2][2] == 0)
		return GANAJ1;

	return NO_GANA;

}

int jugador_y(int ganador[NO_MOSTRAR][NO_MOSTRAR]){

	if(ganador[0][0] == 1 && ganador[0][1] == 1 && ganador[0][2] == 1)
		return GANAJ2;


	if(ganador[0][0] == 1 && ganador[1][0] == 1 && ganador[2][0] == 1)
		return GANAJ2;


	if(ganador[0][0] == 1 && ganador[1][1] == 1 && ganador[2][2] == 1)
		return GANAJ2;



	if(ganador[0][1] == 1 && ganador[1][1] == 1 && ganador[2][1] == 1)
		return GANAJ2;




	if(ganador[0][2] == 1 && ganador[1][1] == 1 && ganador[2][0] == 1)
		return GANAJ2;



	if(ganador[0][2] == 1 && ganador[1][2] == 1 && ganador[2][2] == 1)
		return GANAJ2;



	if(ganador[1][0] == 1 && ganador[1][1] == 1 && ganador[1][2] == 1)
		return GANAJ2;


	if(ganador[2][0] == 1 && ganador[2][1] == 1 && ganador[2][2] == 1)
		return GANAJ2;

	return NO_GANA;


}
void pantalla_felicitaciones(int y,int x,bool *juego_activo,bool *sorteo,bool *partida_en_juego,bool empate){

	bool ver_pantalla = true;
	char respuesta;
	*juego_activo = false;
	*partida_en_juego = false;
	
	system("clear");

	do{

		if(empate == false)
			mvprintw(y,x,"HA GANADO EL JUGADOR %i ",*sorteo+1);
		else
			mvprintw(y,x,"EMPATE!!! ");
		
		mvprintw(y+10,x,"  Pulsa s para sailr");
	
		refresh();
		scanf(" %c",&respuesta);
			if(respuesta == 's')
				ver_pantalla = false;

	}while(ver_pantalla);

	

}

int felicitar(int ganador[NO_MOSTRAR][NO_MOSTRAR]){


	if(jugador_x(ganador) == 0)
		return jugador_x(ganador);

	if(jugador_y(ganador) == 1)
		return jugador_y(ganador);

	if(jugador_x(ganador) == NO_GANA && jugador_y(ganador) == NO_GANA)
		return EMPATE;
	


	return 3;

	refresh();

}




