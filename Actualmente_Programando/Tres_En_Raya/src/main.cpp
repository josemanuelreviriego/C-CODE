/*
 
	MAIN.CPP
 
*/
#include "main.h"

#define JUGAR '1'
#define REGLAS '2'
#define AUTOR '4'
#define SALIR '5'


int main (){
	
	DatosJugador jugador_x;
	DatosJugador jugador_o;
	bool turno;
	int max_x,max_y;
	int centro_x,centro_y;
	char eleccion_usuario;


	srand(time(NULL));
	turno = rand() %2;

	iniciar_curses(&max_x,&max_y,&centro_x,&centro_y);
	
	do{

		menu(centro_y,centro_x,&eleccion_usuario);
		refresh();

		if(eleccion_usuario == JUGAR){
			system("clear");
			empezar_partida(centro_y,centro_x);
		}

		if(eleccion_usuario == REGLAS){
			system("clear");
			reglas(centro_y,centro_x);
		}

		if(eleccion_usuario == AUTOR){
			system("clear");
			autor(centro_y,centro_x);
		}

		if(eleccion_usuario == SALIR){
			terminar_curses();
			return EXIT_SUCCESS;
		}


	}while(true);


			


	terminar_curses();



	return EXIT_SUCCESS;

}
