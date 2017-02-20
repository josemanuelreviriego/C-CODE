#include <stdio.h>
#include <stdlib.h>

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

using namespace std;

void borrar (int pos_x,int pos_y,int tecla,bool fin,int max_y,int max_x);

void pintar(int pos_x,int pos_y,int tecla,bool fin,int max_y,int max_x){

  do{
  
          move(pos_y, pos_x);
          addch('*');
          refresh();
 
      tecla = getch();
  
          move(pos_y, pos_x);
	  
          addch('*');
          refresh();
	  
          switch(tecla)
          {
	            case ARRIBA:
	               pos_y = (pos_y + (max_y - 1)) % max_y;
	               break;

	            case IZQUIERDA:
	               pos_x =(pos_x + (max_x - 1)) % max_x;
	               break;

	            case DERECHA:
	               pos_x = (pos_x + 1) % max_x;
	               break;

	            case ABAJO:
	               pos_y = (pos_y + 1) % max_y;
	               break;

	            case ARRIBA_IZQUIERDA:
	               pos_y = (pos_y +(max_y - 1)) % max_y;
	               pos_x = (pos_x + (max_x - 1)) % max_x;
	               break;
		      
	            case ARRIBA_DERECHA:
	               pos_y = (pos_y + (max_y -1)) % max_y;
	               pos_x = (pos_x + 1) % max_x;
	               break;

	            case ABAJO_IZQUIERDA:
	               pos_y = (pos_y + 1) % max_y;
	               pos_x = (pos_x + (max_x -1)) % max_x ;
	               break;

		    case ABAJO_DERECHA:
	               pos_y = (pos_y + 1) % max_y;
	               pos_x = (pos_x + 1) % max_x;
	               break;
		
		    case BORRAR:
		       borrar(pos_x,pos_y,tecla,fin,max_y,max_x);
		       break;
	            case 27: // tecla ESC
	               fin = true;
	               break;
	          }
 
    }  while (!fin);
}


void borrar (int pos_x,int pos_y,int tecla,bool fin,int max_y,int max_x){

  do
  {
          move(pos_y, pos_x);
          addch('B');
          refresh();
  
      tecla = getch();
  
          move(pos_y, pos_x);
          addch(' ');
          refresh();

          switch(tecla)
          {
	            case ARRIBA:
	               pos_y = (pos_y -1);
	               break;

	            case IZQUIERDA:
	               pos_x = (pos_x - 1);
	               break;

	            case DERECHA:
	               pos_x = (pos_x + 1);
	               break;

	            case ABAJO:
	               pos_y = (pos_y + 1) ;
	               break;

	            case ARRIBA_IZQUIERDA:
	               pos_y = (pos_y - 1);
	               pos_x = (pos_x - 1);
	               break;
		       
	            case ARRIBA_DERECHA:
	               pos_y = (pos_y - 1);
	               pos_x = (pos_x + 1);
	               break;

	            case ABAJO_IZQUIERDA:
	               pos_y = (pos_y + 1);
	               pos_x = (pos_x - 1);
	               break;

		    case ABAJO_DERECHA:
	               pos_y = (pos_y + 1);
	               pos_x = (pos_x + 1);
	               break;
			
		    case BORRAR:       
		       pintar(pos_x,pos_y,tecla,fin,max_y,max_x);
		       break;

	            case 27: // tecla ESC
	               fin = true;
	               break;
	          }
 
    }  while (!fin);
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


