#ifndef __REGLAS_H__
#define __REGLAS_H__

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

	void imprimir_reglas(int y,int x);
	void reglas(int y,int x);





#ifdef __cplusplus
}
#endif

#endif
