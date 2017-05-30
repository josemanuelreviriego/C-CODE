#include <time.h>
#include "creacion_figuras.h"
#include "graficos.h"

#define FIGURA_L 0
#define FIGURA_J 1
#define FIGURA_O 2
#define FIGURA_I 3
#define FIGURA_Z 4
#define FIGURA_S 5
#define FIGURA_T 6

#define Y_INICIAL 5

void poner_color(Figura *figura,void *dato){figura->color = *((int *)dato);}
void poner_figura(Figura *figura,void *dato){figura->figura = *((char *)dato);}
void poner_coordenadas(Figura *figura,void *coor){figura->coor = *((Coordendas*)coor);}
void poner_num_estructura(Figura *figura,void *n){figura->num_estructura = *((int*)n);}
void poner_sig_estructura(Figura *figura,void *vacio){figura = figura->sig_estructura;}

Figura *construir_cuerpo(){
										
		Figura *primera_estructura = NULL;
		Figura *ultima_estructura = NULL;

		for(int i=0;i<PIEZAS_FIGURA;i++){
				Figura *nueva_estructura = (Figura *)malloc(sizeof(Figura));
						nueva_estructura->num_estructura = i;
						nueva_estructura->sig_estructura = NULL;

				if(primera_estructura == NULL)
						primera_estructura = nueva_estructura;

				else
						ultima_estructura->sig_estructura = nueva_estructura;
	
				ultima_estructura = nueva_estructura;

		}

		return primera_estructura;

}

void poner_coordenadas_o_s_z(Figura *datos,int figura_s_z,int color){

				int distancia_x = 60;
				int distancia_y = Y_INICIAL; //Aumentar esta para generar movimiento hacia abajo

				int y_o = distancia_y;
				int x_o = distancia_x + figura_s_z;


		while(datos != NULL){

				datos->color = color;
				datos->figura = 'o';

				if(datos->num_estructura == 0){
						datos->coor.x = x_o++;
						datos->coor.y = y_o;

				}
				if(datos->num_estructura == 1){
						datos->coor.x = x_o++;
						datos->coor.y = y_o;
				}
				if(datos->num_estructura == 2){
						datos->coor.x = x_o++;
						datos->coor.y = y_o;
				}
				if(datos->num_estructura == 3){
						datos->coor.x = x_o;
						datos->coor.y = y_o++;
						x_o = distancia_x;
				}

				if(datos->num_estructura == 4){
						datos->coor.x = x_o++;
						datos->coor.y = y_o;
				}
				if(datos->num_estructura == 5){
						datos->coor.x = x_o++;
						datos->coor.y = y_o;
				}
				if(datos->num_estructura == 6){
						datos->coor.x = x_o++;
						datos->coor.y = y_o;
				}
				if(datos->num_estructura == 7){
						datos->coor.x = x_o;
						datos->coor.y = y_o;
				}
				
				datos = datos->sig_estructura;

		}
		
}

void poner_coordenadas_i_l_j_t(Figura *datos,int figura_l,int figura_j,int figura_t,int color){

				int distancia_x = 60;
				int distancia_y = Y_INICIAL;

				int y_o = distancia_y;
				int x_o = distancia_x;


		while(datos != NULL){

				datos->color = color;
				datos->figura = 'o';

				if(datos->num_estructura == 0){
						datos->coor.x = x_o++;
						datos->coor.y = y_o;

				}
				if(datos->num_estructura == 1){
						datos->coor.x = x_o--;
						datos->coor.y = y_o++;
				}
				  
				if(datos->num_estructura == 2){
						datos->coor.x = x_o++;
						datos->coor.y = y_o;
				}

				if(datos->num_estructura == 3){
						datos->coor.x = x_o--;
						datos->coor.y = y_o++;
						x_o = distancia_x;
				}

				if(datos->num_estructura == 4){
						datos->coor.x = x_o++;
						datos->coor.y = y_o;
				}
				if(datos->num_estructura == 5){
						datos->coor.x = x_o--;
						datos->coor.y = y_o++;
				}

				if(datos->num_estructura == 6){
						datos->coor.x = x_o + figura_j +figura_l;
						datos->coor.y = y_o + figura_j -figura_l/2 -figura_t;
						x_o++;

				}
				if(datos->num_estructura == 7){
						datos->coor.x = x_o-- + figura_j*3 +figura_l;
						datos->coor.y = y_o++ + figura_j -figura_l/2 - figura_t;
				}
			
				datos = datos->sig_estructura;

		}

}

void generar_datos(Figura *datos){

		srand(time(NULL));

		switch (rand() % PIEZAS_FIGURA){

				case FIGURA_L:
						poner_coordenadas_i_l_j_t(datos,2,0,0,GRIS);
						break;

				case FIGURA_J:
						poner_coordenadas_i_l_j_t(datos,0,-1,0,ROJO);
						break;

				case FIGURA_O:
						poner_coordenadas_o_s_z(datos,0,VERDE);
						break;

				case FIGURA_I:
						poner_coordenadas_i_l_j_t(datos,0,0,0,AMARILLO);
						break;

				case FIGURA_Z:
						poner_coordenadas_o_s_z(datos,2,AZUL);
						break;

				case FIGURA_S:
						poner_coordenadas_o_s_z(datos,-2,MORADO);
						break;

				case FIGURA_T:
						poner_coordenadas_i_l_j_t(datos,2,0,1,AQUA);
						break;

				default:
						poner_coordenadas_o_s_z(datos,2,AZUL);
						break;
		}

}

Figura *construir_figura(){

		Figura *figura = construir_cuerpo();
		generar_datos(figura);
		
		return figura;

}

void push(Pila *pila,Figura *figura){

		//PENDITE CREAR FUNCION POP
		pila->tetris[pila->cima] = figura;
		pila->cima++;
		
}
