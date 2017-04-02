#include "pila.h"
#include "reserva.h"
#include "time.h"

int main (){

	RegistroNave en_pantalla;
	en_pantalla.ultima_nave = 0;	
	srand(time(NULL));

	

	while((push(&en_pantalla,reservar())));


		printf("La nave esta en la poscion %2.lf, %2.lf \n",en_pantalla.en_juego[0]->x, en_pantalla.en_juego[0]->y);

	while( pop(&en_pantalla) );

	return EXIT_SUCCESS;

}
