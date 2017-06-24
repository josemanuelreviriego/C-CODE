#ifndef __MAIN_H__
#define __MAIN_H__

//Liberias y Estructuras


#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <time.h>


#define MAX_CUERPO 500

#define DERECHA '6'
#define IZQUIERDA '4'
#define ARRIBA '8'
#define ABAJO '2'

#define CUERPO_I 5
#define PUNTOS_FRUTA 15

#define DIBUJO_SERPIENTE "*"
#define DIBUJO_FRUTA "¤"

#define INF_Y 10
#define SUP_Y 50

#define INF_X 30
#define SUP_X 170

#define MAX_PUNTUACION 10

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
	bool vida;

}DatosSerpiente;

typedef struct{

	CoorSerp lugar;
	int puntuacion;
	int punt_total[MAX_PUNTUACION];

}DatosFruta;


#ifdef __cplusplus
extern "C"{
#endif

	//Funciones



#ifdef __cplusplus
}
#endif

#endif
