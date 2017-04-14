#ifndef __MAIN_H__
#define __MAIN_H__

//Liberias y Estructuras


#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>


#define MAX_CUERPO 300

#define DERECHA '6'
#define IZQUIERDA '4'
#define ARRIBA '8'
#define ABAJO '2'

#define DIBUJO_SERPIENTE "*"
#define DIBUJO_FRUTA "+"



//COORDENADAS

typedef struct{

        int coor_y;
        int coor_x;


}CoorSerp;

//CUERPO

typedef struct{

        CoorSerp *cuerpo[MAX_CUERPO]; //pila
        int cima;                     
	int cabeza;		      
	int cuerpo_inicial;
               
}CuerpoSerpiente;


typedef struct{

	CoorSerp avanzar;
	int ordenes;
	char direccion;

}DatosSerpiente;

typedef struct{

	CoorSerp lugar;
	int puntuacion;


}DatosFruta;


#ifdef __cplusplus
extern "C"{
#endif

	//Funciones



#ifdef __cplusplus
}
#endif

#endif
