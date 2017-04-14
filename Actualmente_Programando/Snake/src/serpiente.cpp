#include "serpiente.h"

void cabeza_serpiente(CuerpoSerpiente *serpiente,CoorSerp *Cuerpo,int y,int x){

        serpiente->cuerpo[0] = Cuerpo;
        serpiente->cuerpo[0]->coor_y = y;
        serpiente->cuerpo[0]->coor_x = x;

	serpiente->cima++ ;

}

void jugador_mueve(CuerpoSerpiente *serpiente,Direccion *serpiente_jugador){

        switch(serpiente_jugador->ordenes = getch() ){
	
		case KEY_UP:

			if(serpiente_jugador->direccion_actual != ABAJO){

				serpiente->cuerpo[serpiente->cabeza]->coor_y +=-1;
				serpiente_jugador->avanzar.coor_y = -1;
				serpiente_jugador->avanzar.coor_x = 0;
				serpiente_jugador->direccion_actual = ARRIBA;

			}

			break;

			

		case KEY_RIGHT:

			if(serpiente_jugador->direccion_actual != IZQUIERDA){

				serpiente->cuerpo[serpiente->cabeza]->coor_x +=1;
				serpiente_jugador->avanzar.coor_y = 0;
				serpiente_jugador->avanzar.coor_x = 1;
				serpiente_jugador->direccion_actual = DERECHA;

			}

			break;

			

		case KEY_LEFT:

			if(serpiente_jugador->direccion_actual != DERECHA){

				serpiente->cuerpo[serpiente->cabeza]->coor_x +=-1;
				serpiente_jugador->avanzar.coor_y = 0;
				serpiente_jugador->avanzar.coor_x = -1;
				serpiente_jugador->direccion_actual = IZQUIERDA;

			}

			break;

		case KEY_DOWN:

			if(serpiente_jugador->direccion_actual != ARRIBA){

				serpiente->cuerpo[serpiente->cabeza]->coor_y +=1;
				serpiente_jugador->avanzar.coor_y = 1;
				serpiente_jugador->avanzar.coor_x = 0;
				serpiente_jugador->direccion_actual = ABAJO;

			}

			break;


	
	}

}

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

bool push(CuerpoSerpiente *serpiente,CoorSerp *NuevoCuerpo){

        serpiente->cuerpo[serpiente->cima++] = NuevoCuerpo;
 
}       

