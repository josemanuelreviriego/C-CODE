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
void mover_nave(int *tecla,int *y, int *x){

        *tecla = getch();



        if(*tecla == DERECHA){
	                clear();
	                *x+=1;
	                mvprintw(*y,*x,FICHA1);
	                mvprintw(*y+1,*x-1,FICHA2);
	                mvprintw(*y+2,*x-2,FICHA3);
	                *tecla='s';
	        }



        if(*tecla == IZQUIERDA){
	                clear();
	                *x-=1;
	                mvprintw(*y,*x,FICHA1);
	                mvprintw(*y+1,*x-1,FICHA2);
	                mvprintw(*y+2,*x-2,FICHA3);
	                *tecla='s';
	        }



        if(*tecla == ARRIBA){
	                clear();
	                *y-=1;
	                mvprintw(*y,*x,FICHA1);
	                mvprintw(*y+1,*x-1,FICHA2);
	                mvprintw(*y+2,*x-2,FICHA3);
	                *tecla='s';
	        }



        if(*tecla == ABAJO){
	                clear();
	                *y+=1;
	                mvprintw(*y,*x,FICHA1);
	                mvprintw(*y+1,*x-1,FICHA2);
	                mvprintw(*y+2,*x-2,FICHA3);
	                *tecla='s';
	        }



}


