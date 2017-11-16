#include "general.h"

void comprobar_suenio(bool *dormido,int *obejas,char *respuesta){

	printf("¿Estas dormido? ");
	scanf(" %c",respuesta);

	if(*respuesta == 'n')
		*obejas++;
	else if(*respuesta == 's')
		*dormido = true;

}



