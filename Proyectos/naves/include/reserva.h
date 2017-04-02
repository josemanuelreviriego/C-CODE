#include "pila.h"

DatosNave *reservar(){

	DatosNave *nave_posicion;

	nave_posicion = (DatosNave *) malloc (sizeof(DatosNave));
	
	return nave_posicion;

}

DatosNave *liberar(){

	DatosNave *nave_posicion;

	free(nave_posicion);

	return nave_posicion;

}


