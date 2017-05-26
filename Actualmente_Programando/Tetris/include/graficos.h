#ifndef __GRAFICOS_H__
#define __GRAFICOS_H__

#include <ncurses.h>
#include "general.h"

#define GRIS 0
#define FONDO 1
#define ROJO 2
#define VERDE 3
#define AMARILLO 4
#define AZUL 5
#define MORADO 6
#define AQUA 7	



#ifdef __cplusplus
extern "C"{
#endif

	//Funciones


	void iniciar(Pantalla *);

	void terminar();


#ifdef __cplusplus
}
#endif

#endif
