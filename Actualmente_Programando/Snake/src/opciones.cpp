#include "opciones.h"

#define ADAPTAR_X 10


void preguntar_usuario(char *opcion_usuario,int y,int x){

	clear();
	mvprintw(y-10,x-ADAPTAR_X,"1.- Empezar partida ");
	mvprintw(y-7,x-ADAPTAR_X,"2.- Puntuacion ");
	mvprintw(y-4,x-ADAPTAR_X,"3.- Reglas ");
	mvprintw(y-1,x-ADAPTAR_X,"4.- Autor ");
	mvprintw(y+2,x-ADAPTAR_X,"5.- Salir ");

	refresh();
	scanf(" %c",opcion_usuario);

}

void mostrar_puntuacion(DatosFruta *punt,char *opcion,int y,int x){

	clear();
	
		do{

			mvprintw(y-7,x-ADAPTAR_X,"Ultima puntuacion %i",punt->puntuacion);
			refresh();

		}while(1);


}

void mostrar_reglas(int y,int x){

	do{
	
	        mvprintw(y-10,x-ADAPTAR_X-5,"El juego consiste en comer tantas ");
	        mvprintw(y-7,x-ADAPTAR_X-5, "frutas como sea posible,cada fruta");
	        mvprintw(y-4,x-ADAPTAR_X-5, "te dara 15 puntos y al termiar la partida");
	        mvprintw(y-1,x-ADAPTAR_X-5, "podras consultar cuantos puntos has");
	        mvprintw(y+2,x-ADAPTAR_X-5, "obtenido en todas las partidas");
	
	        refresh();
	
	}while(1);

}

void mostrar_autor(int y,int x){

	clear();

	do{
	
	        mvprintw(y-10,x-ADAPTAR_X-5,"Sugerencias - Fernandosilv4c@gmail.com ");
	        mvprintw(y-7,x-ADAPTAR_X-5, "     Autor - Fernando Silva Vera     ");
	        mvprintw(y-4,x-ADAPTAR_X-5, "       Fecha inicio 12/04/2017");
	        mvprintw(y-1,x-ADAPTAR_X-5, "        Fecha fin 16/04/2017");
	        mvprintw(y+2,x-ADAPTAR_X-5, "       Github - Github/FSVera ");
	
	        refresh();
	
	}while(1);

}
