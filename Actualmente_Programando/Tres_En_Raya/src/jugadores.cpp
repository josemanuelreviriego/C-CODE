/*

	JUGADORES.CPP 
	PENDIETE HACER .H

*/
#include "main.h"
#include "tablero.h"

#define DESACUERDO 'n'

void preguntar_nombre(DatosJugador *jugadores,int *numero,int *y,int *x){

        mvprintw(*y,*x,"\n\nNombre J%i ",*numero);
	refresh();

        scanf(" %s",jugadores->nombre);
	refresh();

	mvprintw(*y,*x,"Nombre elegido Jugador %i - %s\n\n",(*numero)++,jugadores->nombre);
	refresh();



}

void nombres(DatosJugador *a,DatosJugador *b,int *y, int *x){

        char respuesta;
        respuesta = 'n';
        int numero;

        do{
	
	                numero = 1;
	
	                preguntar_nombre(a,&numero,y,x);
	                preguntar_nombre(b,&numero,y,x);
	  
	                printw("Estais de acuerdo con los nombres? s/n");
	                refresh();
	                scanf(" %c",&respuesta);
	  
	        }while(respuesta == DESACUERDO);

        system("clear");

}       

