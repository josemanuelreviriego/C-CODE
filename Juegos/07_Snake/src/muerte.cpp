#include "muerte.h"

void impacto_pared(CuerpoSerpiente *serpiente,int y,int x,DatosSerpiente *serpiente_jugador){

	for(int i=INF_X; i<SUP_X-1; i++){
		
		//Muerte top
	        if(serpiente->cuerpo[0]->coor_y == y-SUP_Y){
			if(serpiente->cuerpo[0]->coor_x == x-i-1)
				serpiente_jugador->vida = false;
			

		}

		//Muerte bot
	        if(serpiente->cuerpo[0]->coor_y == y-INF_Y){
			if(serpiente->cuerpo[0]->coor_x == x-i-1)
				serpiente_jugador->vida = false;
			
		}
	}


	for(int i=INF_Y; i<SUP_Y; i++){
	
	
		//Muerte derecha
	        if(serpiente->cuerpo[0]->coor_y == y-i){
			if(serpiente->cuerpo[0]->coor_x == x-INF_X)
				serpiente_jugador->vida = false;
			
		}
	
		//Muerte izquierda
	        if(serpiente->cuerpo[0]->coor_y == y-i){
			if(serpiente->cuerpo[0]->coor_x == x-SUP_X)
				serpiente_jugador->vida = false;
			
		}
	
	}


}

void impacto_cuerpo(CuerpoSerpiente *impacto,DatosSerpiente *comprobar){

	for(int i=1; i<impacto->cima; i++){
	
		if(impacto->cuerpo[impacto->cabeza]->coor_y == impacto->cuerpo[i]->coor_y)
			if(impacto->cuerpo[impacto->cabeza]->coor_x == impacto->cuerpo[i]->coor_x)
				comprobar->vida = false;
				
	
	
	}
	


}

void muerte(CuerpoSerpiente *serpiente,int y,int x,DatosSerpiente *serpiente_jugador){

	impacto_pared(serpiente,y,x,serpiente_jugador);
	impacto_cuerpo(serpiente,serpiente_jugador);
	


	
}
