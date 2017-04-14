#include "memoria.h"
#include "serpiente.h"
#include "graficos.h"
#include "main.h"
#include <time.h>

#define CUERPO_I 5
#define PUNTOS_FRUTA 15

void comprueba_fruta_comida(CuerpoSerpiente *serpiente,DatosFruta *fruta,int y,int x){

	if(serpiente->cuerpo[0]->coor_x == fruta->lugar.coor_x && serpiente->cuerpo[0]->coor_y == fruta->lugar.coor_y){

		push(serpiente,NuevoCuerpo());
		fruta->lugar.coor_y = rand() % y;
		fruta->lugar.coor_x = rand() % x;
		fruta->puntuacion += PUNTOS_FRUTA;

	}
}

int main (){

	srand(time(NULL));

	CuerpoSerpiente serpiente_pantalla;
		serpiente_pantalla.cima = 0;
		serpiente_pantalla.cabeza = 0;
		serpiente_pantalla.cuerpo_inicial = CUERPO_I;

	DatosSerpiente serpiente_jugador;
		serpiente_jugador.avanzar.coor_x = 1;
		serpiente_jugador.avanzar.coor_y = 0;
		serpiente_jugador.direccion = DERECHA;
		
	DatosFruta fruta;
		fruta.lugar.coor_y = rand() % 50;
		fruta.lugar.coor_x = rand() % 50;
		fruta.puntuacion = 0;



	int max_y,max_x; //Tam maximo de pantalla
	int y,x; //Mitad de la pantalla

	iniciar_curses(&max_y,&max_x);
		y = max_y/2;
		x = max_x/2;

	//Cabeza en la posición 0 de la pila y aumento 1 la cima
	cabeza_serpiente(&serpiente_pantalla,NuevoCuerpo(),y,x);
	
	//Cuerpo inicial
	for(int i=0; i<CUERPO_I; i++)
		push(&serpiente_pantalla,NuevoCuerpo());

	
	do{

		movimiento_auto(&serpiente_pantalla,&serpiente_jugador);
		mostrar(&serpiente_pantalla,&fruta);
		comprueba_fruta_comida(&serpiente_pantalla,&fruta,y,x);
		jugador_mueve(&serpiente_pantalla,&serpiente_jugador);


		refresh();
		clear();

	}while(true);


	terminar_curses();
	
	

	return EXIT_SUCCESS;

}
