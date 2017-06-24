#ifndef __JUEGO_H__
#define __JUEGO_H__

//Liberias y Estructuras

#include "main.h"


#ifdef __cplusplus
extern "C"{
#endif

	//Funciones

	void iniciar_variables(CuerpoSerpiente *serpiente_pantalla,DatosSerpiente *serpiente_jugador,DatosFruta *fruta,int y,int x);
	void inicia_juego(int max_y,int max_x,CuerpoSerpiente *serpiente_pantalla,DatosSerpiente *serpiente_jugador,DatosFruta *fruta);

#ifdef __cplusplus
}
#endif

#endif
