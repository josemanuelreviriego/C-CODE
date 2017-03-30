#include "nave.h"
#include "tablero.h"

TPosicion *crear_nave_aleatoria(){

	TPosicion *reservar;
	reservar = (TPosicion *) malloc (sizeof(TPosicion));
	
	srand(time(NULL));

	reservar->x = rand() % (MAX_TAB*MAX_TAB);
	reservar->y = rand() % (MAX_TAB*MAX_TAB);

	

	return reservar;
}








