#ifndef __PILA_H__
#define __PILA_H__


#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

#define MAX_NAV 10
#define PILA_LLENA 0
#define PILA_VACIA 0
#define NAVE_GUARDADA 1
#define NAVE_BORRADA 1

typedef struct{

	double x;
	double y;


}DatosNave;

typedef struct{

	DatosNave *en_juego [MAX_NAV];
	int ultima_nave;

}RegistroNave;

#ifdef __cplusplus
extern "C"{
#endif

	bool push(RegistroNave *pila,DatosNave *naves,DatosNave coor);
	bool pop(RegistroNave *eliminar);
	void imprimir_nave(RegistroNave *mostrar);



#ifdef __cplusplus
}
#endif

#endif
