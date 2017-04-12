#ifndef __MAIN_H__
#define __MAIN_H__

	//Liberias y Estructuras

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>

#define TAM_MAX 80


typedef struct{

        int coor_x;
        int coor_y;

}CoorCuerpo;


typedef struct{

        CoorCuerpo *cuerpo[TAM_MAX];
        int cima;

}CuerpoSerpiente;

typedef struct{

        int avance_x;
        int avance_y;
        int frutas_comidas;
        int puntos_jugador;

}MovimientoSerpiente;




#ifdef __cplusplus
extern "C"{
#endif

	//Funciones


	



#ifdef __cplusplus
}
#endif

#endif
