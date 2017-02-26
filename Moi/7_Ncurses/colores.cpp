#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>


int main (){



	initscr();
	start_color();
	init_pair(1,COLOR_BLACK,COLOR_BLACK);
	init_pair(2,COLOR_RED,COLOR_BLACK);
	init_pair(3,COLOR_YELLOW,COLOR_BLACK);
	init_pair(4,COLOR_WHITE,COLOR_BLACK);
	
	
	attron(COLOR_PAIR(2));
	char c[1];
	int tecla;

	c[0] = 'a';

	do{
	
		tecla=getch();

		if(tecla == 'a'){
	
			attron(COLOR_PAIR(1));
			printw("%c",c[0]);
		}

		if(tecla == 'b'){

			attron(COLOR_PAIR(3));
			printw("%c",c[0]);

		}

		if(tecla == 'c'){
	
			attron(COLOR_PAIR(4));
			printw("%c",c[0]);

		}

		refresh();
	
	}while(1);



	endwin();




	return EXIT_SUCCESS;

}
