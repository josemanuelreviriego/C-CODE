#ifndef __FIGURAS_H__
#define __FIGURAS_H__

	//Liberias y Estructuras

#define MAX_PIEZAS 50
#define PIEZAS_FIGURA 8
#include <general.h>

typedef struct Figura{

		int color;
		char figura;
		Coordendas coor;

		int num_estructura;
		Figura *sig_estructura;

}Figura;

typedef struct{

		int cima;
		Figura *tetris[MAX_PIEZAS];

}Pila;



#ifdef __cplusplus
extern "C"{
#endif

	//Funciones

		Figura *construir_figura();
		void push(Pila *pila,Figura *figura);



#ifdef __cplusplus
}
#endif

#endif
