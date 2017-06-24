#ifndef __MENU_H__
#define __MENU_H__

//LIBERRIAS

#include "main.h"

//DEFINICIONES

#define TAM_MENU 30

//Estructuras
	


#ifdef __cplusplus
extern "C"{
#endif

	//Funciones

	void dibujar(int *y, int *x,int anchura,int alto);
	void opciones_menu(int y,int x,char *eleccion_usuario);
	void menu(int y,int x,char *eleccion_usuario);



#ifdef __cplusplus
}
#endif

#endif
