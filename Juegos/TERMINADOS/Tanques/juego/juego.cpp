#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <curses.h>

#define DELTA .1

#define XC 20
#define YC 20

#define ARMA "/"
#define CUERPO "~"
#define RUEDAS "·"

struct DisparoCoordenada{

	double x;
	double y;

};

struct tanque{

	char arma;
	char dibujo;
	char ruedas;

};

void dibujo_tanque(){

		//Punta
		
		mvprintw(20.5,18.5, ARMA); //(19.5,)  	
		mvprintw(21.5,17.5, ARMA); //(19.5,) 

		//Cuerpo

		mvprintw(22.5,16.5, CUERPO); //(19.5,) 
		mvprintw(23.5,16.5, CUERPO); //(19.5,) B
		mvprintw(23.5,17.5, CUERPO); //(19.5,) C
		mvprintw(23.5,15.5, CUERPO); //(19.5,) A
		
		mvprintw(24.5,16.5, CUERPO); //(19.5,) B3
		mvprintw(24.5,17.5, CUERPO); //(19.5,) C3
		mvprintw(24.5,15.5, CUERPO); //(19.5,) A3

		mvprintw(24.5,14.5, CUERPO); //(19.5,) IZQ
		mvprintw(24.5,18.5, CUERPO); //(19.5,) DER
		
		mvprintw(25.5,18.5, RUEDAS); //(19.5,) C4
		mvprintw(25.5,15.5, "·"); //(19.5,) A4

		
}

void ataque(DisparoCoordenada a,DisparoCoordenada v,DisparoCoordenada s, double t){

	//disparo
	for ( t=0.; s.y>=-5. ; t+=DELTA){
	
	        v.y += a.y * DELTA;
	        s.y += v.y * DELTA;
	
	        v.x += a.x * DELTA;
	        s.x += v.x * DELTA;
		
	        dibujo_tanque();
		mvprintw(YC-s.y, XC+s.x, "O"); //(19.5,19.5)		
	        refresh();
	        usleep(150000);
	
	}


}
int main (){

	double t = 0;
	char tecla;
	int i=0;
	int municion = 5;

	bool fin = false;

	struct DisparoCoordenada a = {  20.,   -5. },
				 v = {   5.,    5. },
				 s = {   0.,    0. };
	
					
	initscr(); //Iniciar la pantalla de ncurses
	curs_set(0); //Para que no se vea lo de escribir

	dibujo_tanque();
	
	do{
	
		mvprintw(10.5,19.5, "Te quedan %i balas ",municion);

		s.y = 0.;
		s.x = 0.;
		
		tecla = getch();

		while(municion > 0 && tecla == 'a'){
		
			ataque(a,v,s,t);
			municion--;
			tecla = 'q';

		}

		if(tecla == 27)
			fin = true;

	}while(!fin);
	
	curs_set(1);
	endwin();


	return EXIT_SUCCESS;

}
