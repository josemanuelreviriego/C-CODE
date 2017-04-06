#include <ncurses.h>
#include <stdlib.h>
#include <stdio.h>

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

int main(){
	
	WINDOW *w = initscr();
	int y,x;

	getmaxyx(w,y,x);

	printf("%i,%i",y,x);

	do{

		dibujar(&y,&x,20,30);
		refresh();

	}while(true);

	endwin();

	return 0;




}
