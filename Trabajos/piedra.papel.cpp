#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define ESPACIO(x) (sizeof(  (x) ) / sizeof (char*) -1)

#define PIEDRA 0
#define PAPEL 1
#define TIJERA 2


const char *palabras[] = {

	"piedra",
	"papel",
	"tijera",
};


int aleatorio(){

	int numero;

	srandom(time(NULL));
	numero = rand() % ESPACIO(palabras);
	return numero;

}

int preguntar(){

	int respuesta;

	printf("Selecciona una opción:\n"
		"1.-Piedra\n"
		"2.-Papel\n"
		"3.-Tijera\n");
	scanf(" %i",&respuesta);
	return respuesta;

}

int main (int argc, char *argv[]){

	int maquina = aleatorio();
	int usuario = preguntar()-1;

	printf("Has jugado %s\n",palabras[usuario]);
	printf("La máquina ha jugado %s\n\n\n",palabras[maquina]);

	if(palabras[usuario]==palabras[maquina])
		printf("HABEIS EMPATADO\n\n");
	
		else if(palabras[usuario==PIEDRA] && palabras[maquina==PAPEL])
				printf("Gana la máquina\n\n");
	
		else if(palabras[usuario==PAPEL] && palabras[maquina==PIEDRA])
				printf("HAS GANADO\n\n");




	return EXIT_SUCCESS;

}
