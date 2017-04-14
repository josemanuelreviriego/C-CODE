#include "memoria.h"

//Reserva dinamicamente los nuevos cuerpos

CoorSerp *NuevoCuerpo(){

	CoorSerp *nuevos;

	nuevos = (CoorSerp *)malloc(sizeof(CoorSerp));
	nuevos->coor_y = 0;
	nuevos->coor_x = 0;
		
	return nuevos;
}
