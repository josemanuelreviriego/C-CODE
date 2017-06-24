#ifndef __GANADOR_H__
#define __GANADOR_H__

//LIBERRIAS

#include "main.h"
#define NO_MOSTRAR 3
#define MOSTRAR 3

//DEFINICIONES



//Estructuras
	


#ifdef __cplusplus
extern "C"{
#endif

	//Funciones


	int felicitar(int ganador[NO_MOSTRAR][NO_MOSTRAR]);
	void pantalla_felicitaciones(int y,int x,bool *juego_activo,bool *sorteo,bool *partida_juego,bool empate);

#ifdef __cplusplus
}
#endif

#endif
