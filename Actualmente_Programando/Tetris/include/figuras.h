#ifndef __FIGURAS_H__
#define __FIGURAS_H__

	//Liberias y Estructuras

#include <general.h>
#include "creacion_figuras.h"
#include <ncurses.h>

#ifdef __cplusplus
extern "C"{
#endif

	//Funciones


		void pintar_figura(Figura*);
		void pintar_pila(Pila);
		void gravedad_figura(Figura*);
		void mover_figura(Figura*);

#ifdef __cplusplus
}
#endif

#endif
