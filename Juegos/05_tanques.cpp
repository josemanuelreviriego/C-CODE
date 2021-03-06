#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <curses.h>

#define DELTA .1

#define XC 20
#define YC 20

#define PJ 2
#define A 0
#define B 1

#define VIDA 5

#define ARMA "/"
#define ARMA2 "\\"

#define CUERPO "~"
#define RUEDAS "·"

struct DisparoCoordenada{

	double x;
	double y;

};

void dibujo_tanque(){

		//Punta
		
		mvprintw(21.5,17.5, ARMA); //(19.5,) 

		//Cuerpo

		mvprintw(22.5,16.5, CUERPO); //(19.5,) 
		mvprintw(23.5,16.5, CUERPO); //(19.5,) B
		mvprintw(23.5,17.5, CUERPO); //(19.5,) C
		mvprintw(23.5,15.5, CUERPO); //(19.5,) A
	
		mvprintw(24.5,18.5, RUEDAS); //(19.5,) C4
		mvprintw(24.5,15.5, RUEDAS); //(19.5,) A4

		
}

void dibujo_tanque2(){

		//Punta

		mvprintw(21.5,145.5, ARMA2); //(19.5,) 

		//Cuerpo

		mvprintw(22.5,146.5, CUERPO); //(19.5,) 
		mvprintw(23.5,146.5, CUERPO); //(19.5,) B
		mvprintw(23.5,147.5, CUERPO); //(19.5,) C
		mvprintw(23.5,145.5, CUERPO); //(19.5,) A

		mvprintw(24.5,148.5, RUEDAS); //(19.5,) C4
		mvprintw(24.5,145.5, RUEDAS); //(19.5,) A4

		
}

void texto(int *ammo,int *ammo2){

	//SALIR
	mvprintw(3.5,70.5, "Pulsa Esc para salir");
	
	//J1
	mvprintw(11.5,19.5, "Pulsa \"a\" para disparar");
	mvprintw(10.5,19.5, "Te quedan %i balas ",*ammo);


	//J2
	mvprintw(11.5,130., "Pulsa \"l\" para disparar");
	mvprintw(10.5,130., "Te quedan %i balas ",*ammo2);



}


void pedir_direccion(DisparoCoordenada *v){


	curs_set(1); //Para que no se vea lo de escribir
	mvprintw(13.5,18.5, "¿velocidad? (vx,vy) ");
	scanw(" ( %lf , %lf )", &v->x, &v->y);
	curs_set(0); //Para que no se vea lo de escribir

}

void pedir_direccion2(DisparoCoordenada *v){


	curs_set(1); //Para que no se vea lo de escribir
	mvprintw(13.5,130., "¿velocidad? (vx,vy) ");
	scanw(" ( %lf , %lf )", &v->x, &v->y);
	curs_set(0); //Para que no se vea lo de escribir

}

void ataque_JA(DisparoCoordenada a,DisparoCoordenada v,DisparoCoordenada s, double t,int *municion,int *municion2,int *vida){

	//disparo
	for ( t=0.; s.y>=-4. ; t+=DELTA){
	
	        v.y += a.y * DELTA;
	        s.y += v.y * DELTA;
	
	        v.x += a.x * DELTA;
	        s.x += v.x * DELTA;
	
		clear();
		texto(municion,municion2);
	        dibujo_tanque();
		dibujo_tanque2();
		mvprintw(YC-s.y, XC+s.x, "O"); //(19.5,19.5)
	        refresh();
	        usleep(150000);
	
	}


}


void ataque_JB(DisparoCoordenada a,DisparoCoordenada v,DisparoCoordenada s, double t,int *municion,int *municion2){

	//disparo
	for ( t=0.; s.y>=-4. ; t+=DELTA){
	
	        v.y += a.y * DELTA;
	        s.y += v.y * DELTA;
	
	        v.x += a.x * DELTA;
	        s.x += v.x * DELTA;

		clear();
		texto(municion,municion2);
	        dibujo_tanque();
		dibujo_tanque2();
		mvprintw(YC-s.y, XC+s.x, "O"); //(19.5,19.5)	
	        refresh();
	        usleep(150000);
	
	}


}

int main (){

	double t = 0;
	char tecla;
	int municion = 5;
	int municion2 = 5;
	int vida = VIDA;
	int vida2 = VIDA;

	bool fin = false;

	struct DisparoCoordenada a[PJ],v[PJ],s[PJ];	
	
	//DATOS A

	a[A].x = 20.; 
	a[A].y = -5.; 
    
	v[A].x = 5.; 
	v[A].y = 5.; 
    
	s[A].x = 0.; 
	s[A].y = 0.; 
	
	//DATOS B	
	
	a[B].x = -20.; 
	a[B].y = -5.; 
    
	v[B].x = -5.; 
	v[B].y = 5.; 
   
	s[B].x = 124; 
	s[B].y = 0.; 
					
	initscr(); //Iniciar la pantalla de ncurses
	curs_set(0); //Para que no se vea lo de escribir

	dibujo_tanque();
	dibujo_tanque2();
	
	do{
	
		texto(&municion,&municion2);

		tecla = getch();

		//tanque a
		while(municion > 0 && tecla == 'a'){

			v[A].x = 0;
			v[A].y = 0;

			pedir_direccion(&v[A]);
			ataque_JA(a[A],v[A],s[A],t,&municion,&municion2,&vida);
			municion--;
			tecla = 'q';

		}
	
		//tanque b
		while(municion2 > 0 && tecla == 'l'){
	
			v[B].x = 0;
			v[B].y = 0;

			pedir_direccion2(&v[B]);
			ataque_JB(a[B],v[B],s[B],t,&municion,&municion2);
			municion2--;
			tecla = 'q';

		}

		if(tecla == 27)
			fin = true;

	}while(!fin);

	
	
	curs_set(1);
	endwin();


	return EXIT_SUCCESS;

}
