#ifndef __SERPIENTE_H__
#define __SERPIENTE_H__

	//Liberias y Estructuras

#include "main.h"



#ifdef __cplusplus
extern "C"{
#endif

	//Funciones

	void cabeza_serpiente(CuerpoSerpiente *serpiente,CoorSerp *Cuerpo,int y,int x);
	void jugador_mueve(CuerpoSerpiente *serpiente,DatosSerpiente *serpiente_jugador);
	void mostrar(CuerpoSerpiente *serpiente_pantalla,DatosFruta *fruta);
	void movimiento_auto(CuerpoSerpiente *serpiente_auto,DatosSerpiente *direccion_usuario);

#ifdef __cplusplus
}
#endif

#endif
