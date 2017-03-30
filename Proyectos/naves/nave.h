#ifndef __NAVE_H__
#define __NAVE_H__

#define MAX_HIST 100
#define MAX_NAVES 50

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef struct{

	double x;
	double y;

}TPosicion;

typedef struct{

	TPosicion *historial[MAX_HIST];
	TPosicion *jugando[MAX_NAVES];
	int cima;

}TNave;


//funciones


TPosicion *crear_nave_aleatoria();

#endif
