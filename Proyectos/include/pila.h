#ifndef __PILA_H__
#define __PILA_H__

#include "estructura.h"

void push(registro *animes,int *gen){

	if(*gen == ACCION)
		strncpy(animes->vistas_total[0]->accion,"one punch man",N);

	if(*gen == ROMANCE)
		strncpy(animes->vistas_total[0]->accion,"one punch man",N);

	if(*gen == COMEDIA)
		strncpy(animes->vistas_total[0]->accion,"one punch man",N);

	if(*gen == PELEAS)
		strncpy(animes->vistas_total[0]->accion,"one punch man",N);

}

void pop(registro *animes){

        printf("Ultima metida fue %s",animes->vistas_total[0]->accion);

}

#endif
