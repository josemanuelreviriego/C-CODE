#ifndef __MAIN_H__
#define __MAIN_H__

	//Liberias y Estructuras

#include <stdio.h>
#include <stdlib.h>



typedef struct{

		int x;
		int y;

}CoorPantalla;

typedef struct{

		CoorPantalla max;
		//Interfaz
		CoorPantalla principio;
		CoorPantalla fin;
		

}Pantalla;


#ifdef __cplusplus
extern "C"{
#endif

	//Funciones




#ifdef __cplusplus
}
#endif

#endif
