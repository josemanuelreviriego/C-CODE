#include "fruta.h"

int coor_fruta_y(int y){

        int coordenada;

	coordenada = rand() % ( (y*2)-(INF_Y-2) );

	if(coordenada <= ((y*2)-SUP_Y ))
		coordenada = 30;
	

        return coordenada;
}

int coor_fruta_x(int x){


        int coordenada;

	coordenada = rand() % ( (x*2)-(INF_X-1) );

	if(coordenada <= ((x*2)-SUP_X ))
		coordenada = 50;

        return coordenada;
}

void comprueba_fruta_comida(CuerpoSerpiente *serpiente,DatosFruta *fruta,int y,int x){

	if(serpiente->cuerpo[0]->coor_x == fruta->lugar.coor_x && serpiente->cuerpo[0]->coor_y == fruta->lugar.coor_y){

		push(serpiente,NuevoCuerpo());

		fruta->lugar.coor_y = coor_fruta_y(y);
		fruta->lugar.coor_x = coor_fruta_x(x);

		fruta->puntuacion += PUNTOS_FRUTA;

	}
}

