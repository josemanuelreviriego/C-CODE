#include "pila.h"

bool push(RegistroNave *pila,DatosNave *naves){

	if(pila->ultima_nave >= MAX_NAV)
		return PILA_LLENA;

	pila->en_juego[ pila->ultima_nave++ ] = naves;
	return NAVE_GUARDADA;

}

bool pop(RegistroNave *eliminar){

        if(eliminar->ultima_nave == 0)
                return PILA_VACIA;
	
	eliminar->en_juego[--eliminar->ultima_nave];

        return NAVE_BORRADA;

}

