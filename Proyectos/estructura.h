#ifndef __ESTRUCTURA_H__
#define __ESTRUCTURA_H__

#include <stdio.h>
#include <stdlib.h>

#include <string.h>

#define N 20

#define MAX 4
#define ACCION 1
#define ROMANCE 2
#define COMEDIA 3
#define PELEAS 4

typedef struct{

        char accion[N];
        char romance[N];
        char comedia[N];
        char peleas[N];


}SeriesAnual;


typedef struct{

        SeriesAnual *vistas_total[MAX];//HISTORIAL 
	int total;		     //TOTAL
        SeriesAnual *favoritas[MAX]; //PILA
        int ultima;		     //CIMA


}registro;

#endif
