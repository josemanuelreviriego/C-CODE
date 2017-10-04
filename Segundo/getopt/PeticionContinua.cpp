#include <stdio.h>
#include <stdlib.h>


void servidor(bool *peticion,bool atendido){

	do{}while(not *peticion);

	printf("Atendido!\n");
}

void cliente(bool *peticion,bool atendido){

	atendido = true;
	*peticion = atendido;

}

int main(int argc, char *argv[]){

	bool peticion = false;

	servidor(&peticion,"true");
	cliente(&peticion,"true");
	
	return EXIT_SUCCESS;
}
