#include "fruta.h"
#include "serpiente.h"
#include "tablero.h"
#include "muerte.h"
#include "juego.h"

void iniciar_variables(CuerpoSerpiente *serpiente_pantalla,DatosSerpiente *serpiente_jugador,DatosFruta *fruta,int y,int x){

	serpiente_pantalla->cima = 0;
	serpiente_pantalla->cabeza = 0;
	serpiente_pantalla->cuerpo_inicial = CUERPO_I;

	serpiente_jugador->avanzar.coor_x = 1;
	serpiente_jugador->avanzar.coor_y = 0;
	serpiente_jugador->direccion = DERECHA;
	serpiente_jugador->vida = true;

	fruta->lugar.coor_y = coor_fruta_y(y);
	fruta->lugar.coor_x = coor_fruta_x(x);
	fruta->puntuacion = 0;


	if(fruta->puntuacion > 0)
		while(liberar_memoria(serpiente_pantalla));

	//Cabeza en la posición 0 de la pila y aumento 1 la cima
	cabeza_serpiente(serpiente_pantalla,NuevoCuerpo(),y,x);

	//Cuerpo inicial
	for(int i=0; i<CUERPO_I; i++)
		push(serpiente_pantalla,NuevoCuerpo());

}

void inicia_juego(int max_y,int max_x,CuerpoSerpiente *serpiente_pantalla,DatosSerpiente *serpiente_jugador,DatosFruta *fruta){

	if(fruta->puntuacion)
		while(liberar_memoria(serpiente_pantalla));

	do{

		tablero(max_y,max_x);	
		movimiento_auto(serpiente_pantalla,serpiente_jugador);
		mostrar(serpiente_pantalla,fruta);
		comprueba_fruta_comida(serpiente_pantalla,fruta,max_y/2,max_x/2);
		muestra_puntuacion_frutas(fruta,max_y,max_x);
		muerte(serpiente_pantalla,max_y,max_x,serpiente_jugador);
		jugador_mueve(serpiente_pantalla,serpiente_jugador);

		refresh();
		clear();

	}while(serpiente_jugador->vida);
}
