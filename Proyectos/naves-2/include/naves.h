#ifndef __NAVES_H__
#define __NAVES_H__

#include "pila.h"

#ifdef __cplusplus
extern "C"{
#endif

	DatosNave posicion_inicial(double *x, double *y);
	void mover_naves(RegistroNave *mostrar);



#ifdef __cplusplus
}
#endif

#endif
