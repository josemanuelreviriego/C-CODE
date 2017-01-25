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
	NULL

};

int aleatorio(){

	int numero;

	srandom(time(NULL));
	numero = rand() % ESPACIO(palabras);
	return numero;

}

int preguntar(){

	int respuesta;

	do{
	
		printf("Selecciona una opción:\n"
			"1.-Piedra\n"
			"2.-Papel\n"
			"3.-Tijera\n");
		scanf(" %i",&respuesta);
	}while(respuesta < 1 | respuesta > 3);

	return respuesta;

}

int main (int argc, char *argv[]){

	int maquina = aleatorio();
	int usuario = preguntar()-1;

	printf("Has jugado %s\n",palabras[usuario]);
	printf("La máquina ha jugado %s\n\n\n",palabras[maquina]);

	//EMPATE

	if(usuario == maquina)
		printf("HABEIS EMPATADO\n");
	

	//PIEDRA


	if(usuario==PIEDRA && maquina==PAPEL)
		printf("HAS PERDIDO\n");

	if(usuario==PIEDRA && maquina==TIJERA)
		printf("HAS GANADO\n");


	//PAPEL

	
	if(usuario==PAPEL && maquina==PIEDRA)
		printf("HAS GANADO\n");

	if(usuario==PAPEL && maquina==TIJERA)
		printf("HAS PERDIDO\n");
	

	//TIJERA


	if(usuario==TIJERA && maquina==PIEDRA)
		printf("HAS PERDIDO\n");

	if(usuario==TIJERA && maquina==PAPEL)
		printf("HAS GANADO\n");


	return EXIT_SUCCESS;

}
