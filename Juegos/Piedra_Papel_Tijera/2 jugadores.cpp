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



void preguntar(){

	printf("Selecciona una opción :\n"
		"1.-Piedra\n"
		"2.-Papel\n"
		"3.-Tijera\n");

	}

int jugador1 (){

	int respuesta1;

	do{
		printf("Jugador 1: ");
		scanf(" %i",&respuesta1);
	}while(respuesta1 < 1 | respuesta1 > 3);

	system("clear");
	return respuesta1;

}

int jugador2 (){

	int respuesta2;
	preguntar();
	do{
		printf("Jugador 2: ");
		scanf(" %i",&respuesta2);
	}while(respuesta2 < 1 | respuesta2 > 3);

	system("clear");
	return respuesta2;
}

int main (int argc, char *argv[]){

	preguntar();

	int usuario1 = jugador1()-1;
	int usuario2 = jugador2()-1;

	printf("Jugador 1 ha jugado %s\n",palabras[usuario1]);
	printf("Jugador 2 ha jugado %s\n\n\n",palabras[usuario2]);

	//EMPATE

	if(usuario1 == usuario2)
		printf("HABEIS EMPATADO\n");
	

	//PIEDRA


	if(usuario1==PIEDRA && usuario2==PAPEL)
		printf("HA GANADP EL JUGADOR 2\n");

	if(usuario1==PIEDRA && usuario2==TIJERA)
		printf("HA GANADO EL JUGADOR 1\n");


	//PAPEL 

	
	if(usuario1==PAPEL && usuario2==PIEDRA)
		printf("HA GANADO EL JUGADOR 1\n");

	if(usuario1==PAPEL && usuario2==TIJERA)
		printf("HA GANADO EL JUGADOR 2\n");
	

	//TIJERA


	if(usuario1==TIJERA && usuario2==PIEDRA)
		printf("HA GANADO EL JUGADOR 2\n");

	if(usuario1==TIJERA && usuario2==PAPEL)
		printf("HA GANADO EL JUGADOR 1\n");

	return EXIT_SUCCESS;

}
