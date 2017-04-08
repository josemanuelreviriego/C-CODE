#include "menu.h"

void dibujar(int *y, int *x,int anchura,int alto){

        for(int i=0; i<anchura;i++)
                mvaddch(*y,*x+i,ACS_HLINE);

                mvaddch(*y,*x,ACS_ULCORNER);

        for(int i=1; i<alto;i++)
                mvaddch(*y+i,*x,ACS_VLINE);

                mvaddch(*y+alto,*x,ACS_LLCORNER);

        for(int i=1; i<anchura;i++)
                mvaddch(*y+alto,*x+i,ACS_HLINE);

                mvaddch(*y+alto,*x+anchura,ACS_LRCORNER);

        for(int i=1; i<alto;i++)
                mvaddch((*y+alto)-i,*x+anchura,ACS_VLINE);

                mvaddch(*y,*x+anchura,ACS_URCORNER);





}

void opciones_menu(int y,int x,char *eleccion_usuario){

	y+=3;
	x+=6;
	
	mvprintw(y+3,x,"1.-Iniciar Partida ");
	mvprintw(y+6,x,"2.-Reglas ");
	mvprintw(y+9,x,"3.-Autor ");
	mvprintw(y+12,x,"5.-Salir ");
	
	refresh();
	scanf(" %c",eleccion_usuario);




}

void menu(int y,int x,char *eleccion_usuario){

	y-=7.5;
	x+=1;

	system("clear");

	dibujar(&y,&x,TAM_MENU,TAM_MENU);
	opciones_menu(y,x,eleccion_usuario);

}
