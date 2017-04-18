#ifndef __OPCIONES_H__
#define __OPCIONES_H__

	//Liberias y Estructuras

#include "main.h"
#include "memoria.h"

#ifdef __cplusplus
extern "C"{
#endif

	//Funciones

	void preguntar_usuario(char *opcion_usuario,int y,int x);
	void mostrar_puntuacion(DatosFruta *punt,char *opcion,int y,int x);
	void mostrar_reglas(int y,int x);
	void mostrar_autor(int y,int x);
	


#ifdef __cplusplus
}
#endif

#endif
