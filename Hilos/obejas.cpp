#include "general.h"


int main(int argc, char *argv[]){

	bool dormido	= false;
	int obejas	= 0;
	char respuesta;

	do{
		
		comprobar_suenio(&dormido,&obejas,&respuesta);


	}while(!dormido);

	
	return EXIT_SUCCESS;
}
