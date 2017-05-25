#include <time.h>
#include "figuras.h"

#define FIGURA_L 0
#define FIGURA_J 1
#define FIGURA_O 2
#define FIGURA_I 3
#define FIGURA_Z 4
#define FIGURA_S 5
#define FIGURA_T 6

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
						nueva_estructura->num_estructura = i; //Cambiar n por i
						nueva_estructura->sig_estructura = NULL;

				if(primera_estructura == NULL)
						primera_estructura = nueva_estructura;

				else
						ultima_estructura->sig_estructura = nueva_estructura;
	
				ultima_estructura = nueva_estructura;

		}

		return primera_estructura;

}

void rellenar_estructuras(Figura *datos){

		while(datos != NULL){

				datos->color = 3;
				datos->figura = 'o';
				
				if(datos->num_estructura == 0){
						datos->coor.x = 50;
						datos->coor.y = 50;
				}
				if(datos->num_estructura == 1){
						datos->coor.x = 51;
						datos->coor.y = 50;
				}
				if(datos->num_estructura == 2){
						datos->coor.x = 52;
						datos->coor.y = 50;
				}
				if(datos->num_estructura == 3){
						datos->coor.x = 53;
						datos->coor.y = 50;
				}
				if(datos->num_estructura == 4){
						datos->coor.x = 50;
						datos->coor.y = 51;
				}
				if(datos->num_estructura == 5){
						datos->coor.x = 51;
						datos->coor.y = 51;
				}
				if(datos->num_estructura == 6){
						datos->coor.x = 52;
						datos->coor.y = 51;
				}
				if(datos->num_estructura == 7){
						datos->coor.x = 53;
						datos->coor.y = 51;
				}
				


				datos = datos->sig_estructura;

		}
		
}


void generar_datos(Figura *datos){

/*  
		srand(time(NULL));

		switch (rand() % PIEZAS_FIGURA){

				case FIGURA_O:
						datos->color = 3;
						datos->figura = 'l';
						datos->coor.x = 50;
						datos->coor.y = 50;
						siguientes_estructuras(datos);
						break;
					
		}
*/
	
		rellenar_estructuras(datos);
				
}


Figura *construir_figura(){

		Figura *figura = construir_cuerpo();
		generar_datos(figura);
		

		return figura;


}

void push(Pila *pila,Figura *figura){

		//PENDITE CREAR FUNCION POP
		pila->tetris[pila->cima++] = figura;
		
}
