#include "reglas.h"


void imprimir_reglas(int y,int x){

	 mvprintw(y+3,x+10,"Cada jugador solo debe colocar ");
	 mvprintw(y+4,x+10,"su símbolo una vez por turno y ");
	 mvprintw(y+5,x+10,"no debe ser sobre una casilla ");
	 mvprintw(y+6,x+10,"ya jugada.Se debe conseguir   ");
	 mvprintw(y+7,x+10,"realizar una línea recta o   ");
	 mvprintw(y+8,x+10,"diagonal por símbolo ");

	 mvprintw(y+10,x+16,"By Wikipedia.com ");

}

void reglas(int y,int x){

	y-=10;
	x-=5;

	do{
		dibujar(&y,&x,50,30);
		imprimir_reglas(y,x);
		refresh();

	}while(1);
}
