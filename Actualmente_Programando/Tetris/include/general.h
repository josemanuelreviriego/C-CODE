#ifndef __MAIN_H__
#define __MAIN_H__

	//Liberias y Estructuras

#include <stdio.h>
#include <stdlib.h>

typedef struct{

		double x;
		double y;

}Coordendas;

typedef struct{
		
	  Coordendas max;
	  Coordendas principio;
	  Coordendas fin;

}Interfaz;

typedef struct{

		Interfaz juego;
		Interfaz puntuacion;
		Interfaz principal;

/*  
 *
		Coordendas max;
		Coordendas principio;
		Coordendas fin;

*/	
}Pantalla;

/*
 
prinicio x/y (a)						fin_x (b)
 a * * * * * * * * * * * * * * * * * * * * b 
 *   									   *
 *  a * * * * * * * * * * * * b   a * * b  * 
 *  *          juego          *   *  p  *  * 
 *  *                         *   *     *  * 
 *  *                         *   *     *  * 
 *  *                         *   *     *  *
 *  c * * * * * * * * * * * * *   c * * *  * 
 *  									   *
 c * * * * * * * * * * * * * * * * * * * * * 
 fin y (c)	 						
   			Pantalla 						max x/y

 */





#ifdef __cplusplus
extern "C"{
#endif

	//Funciones




#ifdef __cplusplus
}
#endif

#endif
