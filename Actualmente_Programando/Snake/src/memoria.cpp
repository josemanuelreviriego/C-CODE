#include "memoria.h"

//Reserva dinamicamente los nuevos cuerpos

CoorSerp *NuevoCuerpo(){

	CoorSerp *nuevos;

	nuevos = (CoorSerp *)malloc(sizeof(CoorSerp));
	nuevos->coor_y = 0;
	nuevos->coor_x = 0;
		
	return nuevos;
}

bool push(CuerpoSerpiente *serpiente,CoorSerp *NuevoCuerpo){

        serpiente->cuerpo[serpiente->cima++] = NuevoCuerpo;

}

bool liberar_memoria(CuerpoSerpiente *liberar){

	if(liberar->cima <=0)	
		return false;

	free(liberar->cuerpo[--liberar->cima]);
	return true;
	


}
