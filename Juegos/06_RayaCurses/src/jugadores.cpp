/*

	JUGADORES.CPP 
	PENDIETE HACER .H

*/
#include "main.h"
#include "tablero.h"

#define DEACUERDO 's'

void preguntar_nombre(DatosJugador *jugadores,int *numero,int *y,int *x){


	refresh();
/*
        scanf(" %s",jugadores->nombre);
	refresh();

	mvprintw(++(*y)/2,*x/2,"Nombre elegido Jugador %i - %s",(*numero)++,jugadores->nombre);
	refresh();

*/

}

void nombres(DatosJugador *a,DatosJugador *b,int y, int x){

        char respuesta;
        respuesta = 'n';
        int numero;

        do{

	                numero = 1;


	 //               preguntar_nombre(a,&numero,&y,&x);
	               // preguntar_nombre(b,&numero,&y,&x);
	  
        mvprintw(60,50,"Nombre J ");
	               // printw("Estais de acuerdo con los nombres? s/n");
	                refresh();
	                scanf(" %c",&respuesta);
	  
	        }while(respuesta == DEACUERDO);

        system("clear");

}       

