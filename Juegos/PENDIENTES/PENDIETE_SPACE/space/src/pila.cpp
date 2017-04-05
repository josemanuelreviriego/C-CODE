#include "pila.h"

bool push(RegistroNave *pila,DatosNave *naves,double *max_x,double *max_y){

	if(pila->ultima_nave >= MAX_NAV)
		return PILA_LLENA;

	naves->y = rand() % (int)*max_y;   //ESTAN CAMBIADAS POR ERROR ESTA ES LA X
	naves->x = rand() % (int)*max_x/6; //ESTAN CAMBIADAS POR ERROR ESTA ES LA Y

	pila->en_juego[ pila->ultima_nave++ ] = naves;
	return NAVE_GUARDADA;

}

bool pop(RegistroNave *eliminar){

        if(eliminar->ultima_nave == 0)
                return PILA_VACIA;
	
	eliminar->en_juego[--eliminar->ultima_nave];

        return NAVE_BORRADA;

}

