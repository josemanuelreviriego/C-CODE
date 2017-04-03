#include "pila.h"
#include "reserva.h"
#include "time.h"
#include "graficos.h"
#include "naves.h"

#include <strings.h>

int main (){

	RegistroNave en_pantalla;
		en_pantalla.ultima_nave = 0;

	double max_y,max_x;

	srand(time(NULL));
	bzero(&en_pantalla,sizeof(en_pantalla));



	iniciar_curses(&en_pantalla,&max_y,&max_x);

		
	while( ( push (&en_pantalla,reservar(),posicion_inicial(&max_y,&max_x) ) ));



	empezar_juego(&en_pantalla);
	
	

	while( pop(&en_pantalla) );

	return EXIT_SUCCESS;

}
