#define FICHA1   "*"
#define FICHA2  "* *"
#define FICHA3 "* * *"

#define ARRIBA '8'
#define ABAJO '2'
#define DERECHA '6' 
#define IZQUIERDA '4'

void pintar_final(int *y,int *x){

        //Abajo

        for(int i=0; i<*x; i++)
                mvprintw(*y-1,*x-i,"_");

        //Arriba

        for(int i=0; i<*x; i++)
                mvprintw(5,*x-i,"_");

        //Derecha

        for(int i=0; i<*y-5; i++)
                mvprintw(*y-i,*x-1,"|");
  
        //Izquierda

        for(int i=0; i<*y-5; i++)
                mvprintw(*y-i,0,"|");


}
void marcadores(int *y,int *x){

	mvprintw(*y/15,*x/25,"Puntuación Actual : 0 puntos");
	mvprintw(*y/15,*x/1.15,"Vidas Restantes: 5 ");
	mvprintw(*y/15,*x/2.4,"Dificultad: Facil ");
	
}

void colores(int *tecla){

	init_pair(2,COLOR_RED,COLOR_BLACK);
	init_pair(3,COLOR_GREEN,COLOR_BLACK);
	init_pair(4,COLOR_YELLOW,COLOR_BLACK);
	init_pair(5,COLOR_BLUE,COLOR_BLACK);
	init_pair(6,COLOR_MAGENTA,COLOR_BLACK);
	init_pair(7,COLOR_CYAN,COLOR_BLACK);
	init_pair(8,COLOR_WHITE,COLOR_BLACK);

	if(*tecla == '1'){
	
		attron(COLOR_PAIR(2));
	
	}

	if(*tecla == '2'){
	
		attron(COLOR_PAIR(3));
	
	}
	if(*tecla == '3'){
	
		attron(COLOR_PAIR(4));
	
	}
	if(*tecla == '4'){
	
		attron(COLOR_PAIR(5));
	
	}
	if(*tecla == '5'){
	
		attron(COLOR_PAIR(6));
	
	}
	if(*tecla == '6'){
	
		attron(COLOR_PAIR(7));
	
	}
	if(*tecla == '7'){
	
		attron(COLOR_PAIR(8));
	
	}
}

void mover_nave(int *tecla,int *y, int *x){

        *tecla = getch();

	colores(tecla);

	

        if(*tecla == KEY_RIGHT){
	                clear();
	                *x+=1;
	                mvprintw(*y,*x,FICHA1);
	                mvprintw(*y+1,*x-1,FICHA2);
	                mvprintw(*y+2,*x-2,FICHA3);
	                *tecla='s';
	        }



        if(*tecla == KEY_LEFT){
	                clear();
	                *x-=1;
	                mvprintw(*y,*x,FICHA1);
	                mvprintw(*y+1,*x-1,FICHA2);
	                mvprintw(*y+2,*x-2,FICHA3);
	                *tecla='s';
	        }



        if(*tecla == KEY_UP){
	                clear();
	                *y-=1;
	                mvprintw(*y,*x,FICHA1);
	                mvprintw(*y+1,*x-1,FICHA2);
	                mvprintw(*y+2,*x-2,FICHA3);
	                *tecla='s';
	        }



        if(*tecla == KEY_DOWN){
	                clear();
	                *y+=1;
	                mvprintw(*y,*x,FICHA1);
	                mvprintw(*y+1,*x-1,FICHA2);
	                mvprintw(*y+2,*x-2,FICHA3);
	                *tecla='s';
	        }


}


