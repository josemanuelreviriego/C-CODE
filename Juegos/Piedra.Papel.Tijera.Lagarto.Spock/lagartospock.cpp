#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define ESPACIO(x) (sizeof(  (x) ) / sizeof (char*) -1)

#define PIEDRA 0
#define PAPEL 1
#define TIJERA 2
#define LAGARTO 3
#define SPOCK 4

const char *palabras[] = {

	"piedra",
	"papel",
	"tijera",
	"lagarto",
	"spock",
	NULL

};

const char *reglamento[] = {

	"tijeras cortan papel",
	"papel tapa a piedra",
	"piedra aplasta a lagarto",
	"lagarto envenena a spock",
	"spock rompe a tijeras",
	"tijeras decapitan lagarto",
	"lagarto devora papel",
	"papel desautoriza spock",
	"spock vaporiza piedra",
	"piedra aplasta a tijeras",
	"by Sheldon Cooper",
	NULL

};

void reglas(){

	for(int i=0; reglamento[i] !=NULL; i++)
		printf("%s\n",reglamento[i]);

}

void preguntar(){

	printf("\nSelecciona una opción: \n\n"
		"1.-Piedra\n"
		"2.-Papel\n"
		"3.-Tijera\n"
		"4.-Lagarto\n"
		"5.-Spock\n\n");

	}

int jugador1 (){

	int respuesta1;

	do{
		printf("Jugador 1: ");
		scanf(" %i",&respuesta1);
	}while(respuesta1 < 1 | respuesta1 >5);

	system("clear");
	return respuesta1;

}

int jugador2 (){

	int respuesta2;
	preguntar();
	do{
		printf("Jugador 2: ");
		scanf(" %i",&respuesta2);
	}while(respuesta2 < 1 | respuesta2 > 5);

	system("clear");
	return respuesta2;
}

void ganador(int usuario1,int usuario2){
	
	//EMPATE

	if(usuario1 == usuario2)
		printf("EMPATE");

	//PIEDRA

	if(usuario1==PIEDRA && usuario2==PAPEL)	
		printf("HA GANADO EL JUGADOR 2\n");

	if(usuario1==PIEDRA && usuario2==TIJERA)	
		printf("HA GANADO EL JUGADOR 1\n");

	if(usuario1==PIEDRA && usuario2==LAGARTO)	
		printf("HA GANADO EL JUGADOR 1\n");

	if(usuario1==PIEDRA && usuario2==SPOCK)	
		printf("HA GANADO EL JUGADOR 2\n");

	//PAPEL
	
	if(usuario1==PAPEL && usuario2==PIEDRA)	
		printf("HA GANADO EL JUGADOR 1\n");

	if(usuario1==PAPEL && usuario2==TIJERA)	
		printf("HA GANADO EL JUGADOR 2\n");

	if(usuario1==PAPEL && usuario2==LAGARTO)	
		printf("HA GANADO EL JUGADOR 2\n");

	if(usuario1==PAPEL && usuario2==SPOCK)	
		printf("HA GANADO EL JUGADOR 1\n");

	//TIJERA
	
	if(usuario1==TIJERA && usuario2==PIEDRA)	
		printf("HA GANADO EL JUGADOR 2\n");

	if(usuario1==TIJERA && usuario2==PAPEL)	
		printf("HA GANADO EL JUGADOR 1\n");

	if(usuario1==TIJERA && usuario2==LAGARTO)	
		printf("HA GANADO EL JUGADOR 1\n");

	if(usuario1==TIJERA && usuario2==SPOCK)	
		printf("HA GANADO EL JUGADOR 2\n");


	//LAGARTO
	
	if(usuario1==LAGARTO && usuario2==PIEDRA)	
		printf("HA GANADO EL JUGADOR 2\n");

	if(usuario1==LAGARTO && usuario2==PAPEL)	
		printf("HA GANADO EL JUGADOR 1\n");

	if(usuario1==LAGARTO && usuario2==TIJERA)	
		printf("HA GANADO EL JUGADOR 2\n");

	if(usuario1==LAGARTO && usuario2==SPOCK)	
		printf("HA GANADO EL JUGADOR 1\n");


	//SPOCK
	
	if(usuario1==SPOCK && usuario2==PIEDRA)	
		printf("HA GANADO EL JUGADOR 1\n");

	if(usuario1==SPOCK && usuario2==PAPEL)	
		printf("HA GANADO EL JUGADOR 2\n");

	if(usuario1==SPOCK && usuario2==TIJERA)	
		printf("HA GANADO EL JUGADOR 1\n");

	if(usuario1==SPOCK && usuario2==LAGARTO)	
		printf("HA GANADO EL JUGADOR 2\n");

}
int main (int argc, char *argv[]){

	reglas();
        preguntar();
	
	int persona1 = jugador1()-1;
	int persona2 = jugador2()-1;

	reglas();

		printf("\nJugador 1 ha jugado %s\n",palabras[persona1]);
		printf("Jugador 2 ha jugado %s\n\n\n",palabras[persona2]);

	ganador(persona1,persona2);

	return EXIT_SUCCESS;

}
