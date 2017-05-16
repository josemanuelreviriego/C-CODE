#include "general.h"

#define A 60
#define B 10
#define C 20
#define D 10

void tam_tablero(Pantalla *coor_pantalla){

		coor_pantalla->fin.x = coor_pantalla->max.x-A;
		coor_pantalla->fin.y = coor_pantalla->max.y-B;
		coor_pantalla->principio.x = C;
		coor_pantalla->principio.y = D;

}


void tablero(Pantalla coor_pantalla){

		tam_tablero(&coor_pantalla);

		//Muro inferior		
		for(int i=0; i<coor_pantalla.fin.x-coor_pantalla.principio.x; i++)
				mvaddch(coor_pantalla.fin.y,coor_pantalla.fin.x-i,ACS_HLINE);
				mvaddch(coor_pantalla.fin.y,coor_pantalla.fin.x,ACS_LRCORNER);
				mvaddch(coor_pantalla.principio.y,coor_pantalla.principio.x,ACS_ULCORNER);

		//Muro superior
		for(int i=0; i<coor_pantalla.fin.x-coor_pantalla.principio.x; i++)
				mvaddch(coor_pantalla.principio.y,coor_pantalla.fin.x-i,ACS_HLINE);
				mvaddch(coor_pantalla.principio.y,coor_pantalla.fin.x,ACS_URCORNER);
				mvaddch(coor_pantalla.fin.y,coor_pantalla.principio.x,ACS_LLCORNER);


		//Muro izquierda
		for(int i=1;i<coor_pantalla.fin.y-coor_pantalla.principio.y; i++)
				mvaddch(coor_pantalla.principio.y+i,coor_pantalla.principio.x,ACS_VLINE);
				
		//Muro derecha
		for(int i=1;i<coor_pantalla.fin.y-coor_pantalla.principio.y; i++)
				mvaddch(coor_pantalla.principio.y+i,coor_pantalla.fin.x,ACS_VLINE);

		refresh();
}

int main(int argc, char *argv[]){
	
		Pantalla coor_pantalla;

		

		do{

				tablero(coor_pantalla);

		}while(true);
		

		terminar();


        




	return EXIT_SUCCESS;

}
