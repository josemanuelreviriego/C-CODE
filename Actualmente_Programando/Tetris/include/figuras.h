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

		void pintar_figura(Pila pila);
		void gravedad_figura(Pila pila);
		void mover_figura(Pila pila);

#ifdef __cplusplus
}
#endif

#endif
