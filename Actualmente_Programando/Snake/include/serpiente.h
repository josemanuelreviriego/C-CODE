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



#ifdef __cplusplus
}
#endif

#endif
