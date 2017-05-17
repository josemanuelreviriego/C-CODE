#ifndef __MAIN_H__
#define __MAIN_H__

	//Liberias y Estructuras

#include <stdio.h>
#include <stdlib.h>



typedef struct{

		int x;
		int y;

}Coordendas;
/*  
typedef struct{
		
		Coordendas juego;
		Coordendas puntuacion;
		Coordendas pantalla;

}Interfaz;
*/ 
typedef struct{
/*   
		Interfaz max;
		Interfaz principio;
		Interfaz fin;

*/
		Coordendas max;
		Coordendas principio;
		Coordendas fin;
		
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
