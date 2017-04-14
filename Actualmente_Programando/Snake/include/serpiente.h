#ifndef __SERPIENTE_H__
#define __SERPIENTE_H__

	//Liberias y Estructuras

#include "main.h"



#ifdef __cplusplus
extern "C"{
#endif

	//Funciones

	void cabeza_serpiente(CuerpoSerpiente *serpiente,CoorSerp *Cuerpo,int y,int x);
	bool push(CuerpoSerpiente *serpiente,CoorSerp *NuevoCuerpo);
	void jugador_mueve(CuerpoSerpiente *serpiente,Direccion *serpiente_jugador);
	void mostrar(CuerpoSerpiente *serpiente_pantalla);
	void movimiento_auto(CuerpoSerpiente *serpiente_auto,Direccion *direccion_usuario);

#ifdef __cplusplus
}
#endif

#endif
