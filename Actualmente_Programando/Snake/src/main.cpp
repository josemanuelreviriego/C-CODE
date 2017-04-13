#include "memoria.h"
#include "serpiente.h"
#include "graficos.h"
#include "main.h"


void mostrar(CuerpoSerpiente *serpiente_pantalla){

	for(int i=0; i<serpiente_pantalla->cima; i++)
		mvprintw(serpiente_pantalla->cuerpo[i]->coor_y,serpiente_pantalla->cuerpo[i]->coor_x,"o");

}

void movimiento_auto(CuerpoSerpiente *serpiente_auto,Direccion *direccion_usuario){

	for(int i=0; i<serpiente_auto->cima; i++){

		serpiente_auto->cuerpo[i]->coor_x += direccion_usuario->avanzar.coor_x;
		serpiente_auto->cuerpo[i]->coor_y += direccion_usuario->avanzar.coor_y;

	}
}

int main (){
	
	CuerpoSerpiente serpiente_pantalla;
		serpiente_pantalla.cima = 0;
		serpiente_pantalla.cabeza = 0;
	Direccion serpiente_jugador;
		serpiente_jugador.avanzar.coor_x = 1;
		serpiente_jugador.avanzar.coor_y = 0;



	int max_y,max_x; //Tam maximo de pantalla
	int y,x; //Mitad de la pantalla

	iniciar_curses(&max_y,&max_x);
		y = max_y/2;
		x = max_x/2;

	cabeza_serpiente(&serpiente_pantalla,NuevoCuerpo(),y,x);
	
	do{
	

		movimiento_auto(&serpiente_pantalla,&serpiente_jugador);
		mostrar(&serpiente_pantalla);
		jugador_mueve(&serpiente_pantalla,&serpiente_jugador);



		
		
		refresh();
		clear();

	}while(1);


	terminar_curses();
	
	

	return EXIT_SUCCESS;

}
