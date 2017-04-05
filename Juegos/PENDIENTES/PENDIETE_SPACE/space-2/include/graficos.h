#ifndef __GRAFICOS_H__
#define __GRAFICOS_H__

#include "pila.h"
#include "naves.h"

#ifdef __cplusplus
extern "C"{
#endif

	void iniciar_colores();
	void iniciar_curses(RegistroNave *mostrar,double *max_y,double *max_x);

	void empezar_juego(RegistroNave *mostrar);
	void terminar_juego();

	void mover_naves(RegistroNave *mostrar);


#ifdef __cplusplus
}
#endif

#endif
