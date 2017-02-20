#include <ncurses.h>


void reiniciar(int pos_y,int pos_x){

        move(pos_y, pos_x);
        addch('.');
        refresh();
}

/*

void arriba_izquierda(int vueltas,int pos_y,int pos_x,int max_y,int max_x,int tecla){

	vueltas = MAX;

	do{

		move(pos_y,pos_x);
		addch('-');
		refresh();
		pos_y = (pos_y +(max_y - 1)) % max_y;
		pos_x = (pos_x + (max_x - 1)) % max_x;
		vueltas--;


	}while(vueltas);

	move(pos_y, pos_x);
	addch('*');
	refresh();

	tecla = getch();

	move(pos_y, pos_x);
	addch('*');
	refresh();


}

void arriba_derecha(int vueltas,int pos_y,int pos_x,int max_y,int max_x){

	vueltas = MAX;

	do{

		move(pos_y,pos_x);
		addch('-');
		refresh();
		pos_y = (pos_y + (max_y -1)) % max_y;
		pos_x = (pos_x + 1) % max_x;


		vueltas--;

	}while(vueltas);
}

*/







