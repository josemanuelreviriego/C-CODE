#include "serpiente.h"

void cabeza_serpiente(CuerpoSerpiente *serpiente,CoorSerp *Cuerpo,int y,int x){

        serpiente->cuerpo[serpiente->cabeza] = Cuerpo;
        serpiente->cuerpo[serpiente->cabeza]->coor_y = y;
        serpiente->cuerpo[serpiente->cabeza]->coor_x = x;

	serpiente->cima++;

}

void movimiento_auto(CuerpoSerpiente *serpiente_auto,DatosSerpiente *direccion_usuario){

        for(int i = serpiente_auto->cima-1; i>0; i--){
	
	                serpiente_auto->cuerpo[i]->coor_x = serpiente_auto->cuerpo[i-1]->coor_x;
	                serpiente_auto->cuerpo[i]->coor_y = serpiente_auto->cuerpo[i-1]->coor_y;

	}

	serpiente_auto->cuerpo[serpiente_auto->cabeza]->coor_x += direccion_usuario->avanzar.coor_x;
	serpiente_auto->cuerpo[serpiente_auto->cabeza]->coor_y += direccion_usuario->avanzar.coor_y;

}


void mostrar(CuerpoSerpiente *serpiente_pantalla,DatosFruta *fruta){

	attron(COLOR_PAIR(3));

		for(int i=0; i<serpiente_pantalla->cima; i++)
			mvprintw(serpiente_pantalla->cuerpo[i]->coor_y,serpiente_pantalla->cuerpo[i]->coor_x,DIBUJO_SERPIENTE);

	attroff(COLOR_PAIR(3));

	attron(COLOR_PAIR(4));

		mvprintw(fruta->lugar.coor_y,fruta->lugar.coor_x,DIBUJO_FRUTA);

	attroff(COLOR_PAIR(4));

}



void jugador_mueve(CuerpoSerpiente *serpiente,DatosSerpiente *serpiente_jugador){

        switch(serpiente_jugador->ordenes = getch() ){
	
		case KEY_UP:

			if(serpiente_jugador->direccion != ABAJO){

				serpiente_jugador->avanzar.coor_y = -1;
				serpiente_jugador->avanzar.coor_x = 0;
				serpiente_jugador->direccion = ARRIBA;

			}

			break;

			

		case KEY_RIGHT:

			if(serpiente_jugador->direccion != IZQUIERDA){

       				serpiente_jugador->avanzar.coor_y = 0;
				serpiente_jugador->avanzar.coor_x = 1;
				serpiente_jugador->direccion = DERECHA;

			}

			break;

			

		case KEY_LEFT:

			if(serpiente_jugador->direccion != DERECHA){

				serpiente_jugador->avanzar.coor_y = 0;
				serpiente_jugador->avanzar.coor_x = -1;
				serpiente_jugador->direccion = IZQUIERDA;

			}

			break;

		case KEY_DOWN:

			if(serpiente_jugador->direccion != ARRIBA){

				serpiente_jugador->avanzar.coor_y = 1;
				serpiente_jugador->avanzar.coor_x = 0;
				serpiente_jugador->direccion = ABAJO;

			}

			break;

	}

}
