#ifndef __MAIN_H__
#define __MAIN_H__

//Liberias y Estructuras


#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>


#define MAX_CUERPO 50


//COORDENADAS

typedef struct{

        int coor_y;
        int coor_x;


}CoorSerp;

//CUERPO

typedef struct{

        CoorSerp *cuerpo[MAX_CUERPO]; //pila
        int cima;                     //cima
	int cabeza;		      //cabeza
               
}CuerpoSerpiente;


typedef struct{

	CoorSerp avanzar;
	int ordenes;

}Direccion;


#ifdef __cplusplus
extern "C"{
#endif

	//Funciones



#ifdef __cplusplus
}
#endif

#endif
