#ifndef __TABLERO_H__
#define __TABLERO_H__

//LIBERRIAS

#include "main.h"

//DEFINICIONES

#define VSPACE 2
#define HSPACE 5

#define STR(x) #x
#define FORMAT_STR(w) "%" STR(w) "i"

#define MAX_MUROS 3



//Estructuras
	


#ifdef __cplusplus
extern "C"{
#endif

	//Funciones


	void pintar_fila(int f, int w, int puntas_izquierda, int puntas_centros, int cfin, bool space,int *posicion_y,int *posicion_x);
	void pintar_tablero(int *y,int *x);



#ifdef __cplusplus
}
#endif

#endif
