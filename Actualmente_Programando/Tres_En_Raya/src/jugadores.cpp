/*

	JUGADORES.CPP 
	PENDIETE HACER .H

*/
#include "main.h"
#include "tablero.h"

#define DESACUERDO 'n'

void preguntar_nombre(DatosJugador *jugadores,int *numero){

        printw("\n\nNombre J%i ",*numero);
	refresh();

        scanf(" %s",jugadores->nombre);
	refresh();

	printw("Nombre elegido Jugador %i - %s\n\n",(*numero)++,jugadores->nombre);
	refresh();



}

void nombres(DatosJugador *a,DatosJugador *b){

        char respuesta;
        respuesta = 'n';
        int numero;

        do{
	
	                numero = 1;
	
	                preguntar_nombre(a,&numero);
	                preguntar_nombre(b,&numero);
	  
	                printw("Estais de acuerdo con los nombres? s/n");
	                refresh();
	                scanf(" %c",&respuesta);
	  
	        }while(respuesta == DESACUERDO);

        system("clear");

}       

