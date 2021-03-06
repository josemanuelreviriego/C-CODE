#ifndef __MAIN_H__
#define __MAIN_H__

//LIBERRIAS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <curses.h>

#include "graficos.h"
#include "tablero.h"
#include "juego.h"
#include "menu.h"
#include "reglas.h"

//DEFINICIONES

#define MAX_NOMBRE 30

#define NO_MOSTRAR 3
#define MOSTRAR 3

#define JUGADOR_X 0
#define JUGADOR_Y 1


//Estructuras
	
typedef struct{

        char nombre[MAX_NOMBRE];
        char ficha;


}DatosJugador;


#ifdef __cplusplus
extern "C"{
#endif

	//Funciones


	void preguntar_nombre(DatosJugador *jugadores,int *numero);
	void nombres(DatosJugador *a,DatosJugador *b,int y,int x);
	void autor(int y,int x);



#ifdef __cplusplus
}
#endif

#endif
