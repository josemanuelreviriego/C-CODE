#include "memoria.h"
#include "serpiente.h"
#include "graficos.h"
#include "fruta.h"
#include "tablero.h"
#include "muerte.h"
#include "juego.h"
#include "opciones.h"

#include "main.h"

#define JUGAR '1'
#define VER_PUNTUACION '2'
#define REGLAS '3'
#define AUTOR '4'
#define SALIR '5'

int main (){
	
	CuerpoSerpiente serpiente_pantalla;
	DatosSerpiente serpiente_jugador;
	DatosFruta fruta;
	int max_y,max_x; //Tam maximo de pantalla
	char opcion_usuario = '0';

	iniciar_curses(&max_y,&max_x);

	srand(time(NULL));

	do{
		preguntar_usuario(&opcion_usuario,max_y/2,max_x/2);

		if(opcion_usuario == JUGAR){

			iniciar_variables(&serpiente_pantalla,&serpiente_jugador,&fruta,max_y/2,max_x/2);
			inicia_juego(max_y,max_x,&serpiente_pantalla,&serpiente_jugador,&fruta);


		}

		if(opcion_usuario == VER_PUNTUACION)
			mostrar_puntuacion(&fruta,&opcion_usuario,max_y/2,max_x/2);

		if(opcion_usuario == REGLAS)
			mostrar_reglas(max_y/2,max_x/2);

		if(opcion_usuario == AUTOR)
			mostrar_autor(max_y/2,max_x/2);
			

	}while(opcion_usuario != SALIR);
	
	if(fruta.puntuacion)
		while(liberar_memoria(&serpiente_pantalla));

	terminar_curses();

	return EXIT_SUCCESS;

}
