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
			serpiente->cuerpo[serpiente->cabeza]->coor_y +=-1;
			serpiente_jugador->avanzar.coor_y = -1;
			serpiente_jugador->avanzar.coor_x = 0;
			break;

		case KEY_RIGHT:
			serpiente->cuerpo[serpiente->cabeza]->coor_x +=1;
			serpiente_jugador->avanzar.coor_y = 0;
			serpiente_jugador->avanzar.coor_x = 1;
			break;

		case KEY_LEFT:
			serpiente->cuerpo[serpiente->cabeza]->coor_x +=-1;
			serpiente_jugador->avanzar.coor_y = 0;
			serpiente_jugador->avanzar.coor_x = -1;
			break;

		case KEY_DOWN:
			serpiente->cuerpo[serpiente->cabeza]->coor_y +=1;
			serpiente_jugador->avanzar.coor_y = 1;
			serpiente_jugador->avanzar.coor_x = 0;
			break;
	
	}

}



bool push(CuerpoSerpiente *serpiente,CoorSerp *NuevoCuerpo){

        serpiente->cuerpo[serpiente->cima++] = NuevoCuerpo;
 
}       

