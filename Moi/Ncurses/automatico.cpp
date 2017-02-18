#include <stdio.h>
#include <stdlib.h>

#include "direcciones.h"
#include <ncurses.h>

#define ARRIBA '8'
#define ABAJO '2'
#define DERECHA '6'
#define IZQUIERDA '4'
#define ARRIBA_IZQUIERDA '7'
#define ARRIBA_DERECHA '9'
#define ABAJO_IZQUIERDA '1'
#define ABAJO_DERECHA '3'
#define BORRAR '5'

#define MAX 50

using namespace std;

void pintar(int pos_x,int pos_y,int tecla,bool fin,int max_y,int max_x){

int vueltas = MAX;

  do{
	reiniciar(pos_y,pos_x);

      	tecla = getch();

	
  	
      
	  
	  if(tecla == ARRIBA_IZQUIERDA) 
		arriba_izquierda(vueltas,pos_y,pos_x,max_y,max_x,tecla);

	  if(tecla == ARRIBA_DERECHA)
		 arriba_derecha(vueltas,pos_y,pos_x,max_y,max_x);
	
	  if(tecla == ABAJO_IZQUIERDA){
		              vueltas = MAX;

			              do{				      
				                      move(pos_y,pos_x);
				                      addch('-');
				                      refresh();
						      pos_y = (pos_y + 1) % max_y;
						      pos_x = (pos_x + (max_x -1)) % max_x;
				                      vueltas--;	
				      	}while(vueltas);
	  
	  } 
 
    }while(!fin);
}

int main()
{

  WINDOW *w;

  int tecla;

  int max_x, max_y, pos_x, pos_y;

  bool fin = false;

 

  w = initscr();

  keypad(w, TRUE);

  noecho();

  nonl();

  curs_set(1);

  erase();

  getmaxyx(w, max_y, max_x);

  pos_x = max_x / 2;
  pos_y = max_y / 2;

  pintar(pos_x,pos_y,tecla,fin,max_y,max_x);
  
  endwin();

  return 0;
}


