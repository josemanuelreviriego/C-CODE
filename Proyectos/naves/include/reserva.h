#include "pila.h"

DatosNave *reservar(){

	DatosNave *nave_posicion;

	nave_posicion = (DatosNave *) malloc (sizeof(DatosNave));
	nave_posicion->x = rand() % MAX_NAV;
	nave_posicion->y = rand() % MAX_NAV;

	return nave_posicion;

}

DatosNave *liberar(){

	DatosNave *nave_posicion;

	free(nave_posicion);

	return nave_posicion;

}


