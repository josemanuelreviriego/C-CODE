#ifndef __FRUTA_H__
#define __FRUTA_H__

	//Liberias y Estructuras

#include "main.h"
#include "memoria.h"

#ifdef __cplusplus
extern "C"{
#endif

	//Funciones

	void comprueba_fruta_comida(CuerpoSerpiente *serpiente,DatosFruta *fruta,int y,int x);
	int coor_fruta_y(int y);
	int coor_fruta_x(int x);
	void muestra_puntuacion_frutas(DatosFruta *mostrar,int y,int x);


#ifdef __cplusplus
}
#endif

#endif
