#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100
#define MIN 8

#define X 60
#define Y 30

typedef struct{

	int x,y;
	int mov_x,mov_y;
	char imagen;

}snk;

typedef struct{

	int x,y;


}frt;

snk snake [MAX];
frt fruta;


void dibujar(char tablero[Y][X]){

	for (int y = 0; y < Y; y++){
		for (int x = 0; x < X; x++){

			if( y == 0 || y == Y-1)
				tablero[y][x] = '*';

			else 
				if( x == 0  || x == X-1)
					tablero[y][x] = '*';
			else
				tablero[y][x] = ' ';
			
		}
	}
}


void datos(char tablero[Y][X],int tam){


	for (int i=1; i<tam; i++){
		snake[i].x = snake[i-1].x-1;
		snake[i].y = snake[i-1].y;

		snake[i].imagen = 'X';
	}

	snake[0].imagen = 'O';

	for (int i =0; i<tam; i++)
		tablero[snake[i].y][snake[i].x] = snake[i].imagen;
	
	tablero[fruta.y][fruta.x] = '+';



}
void inicio(int *tam,char tablero[Y][X]){

	snake[0].x = X/2;
	snake[0].y = Y/2;

	srand(time(NULL));

	do{
		fruta.x = rand() % (X-1);
		fruta.y = rand() % (Y-1);

	}while(fruta.x == 0 || fruta.y == 0);

	for(int i=0; i<*tam; i++){
		snake[i].mov_x = 1;
		snake[i].mov_y = 0;
	}

	dibujar(tablero);
	datos(tablero,*tam);



}
void imprimir(char tablero[Y][X]){

	for(int y=0; y<Y; y++){
		for(int x=0; x<X; x++){
			printf("%c",tablero[y][x]);
	}
		printf("\n");
}

}

void tam_serpiente(char tablero[Y][X],int *tam,int *vida){



	if(snake[0].x == 0 || snake[0].x == X-1 || snake[0].y == 0 || snake[0].y == Y-1 )
		*vida = 0;

	for(int i=1; i<*tam &&*vida; i++){
		if(snake[0].x == snake[i].x && snake[0].y == snake[i].y)
			*vida = 0;
	}

	if(snake[0].x == 0 || fruta.x && snake[0].y == fruta.y ){
		*tam +=1;
		snake[*tam -1].imagen = 'X';
	}

	do{
		fruta.x = rand() % (X-1);
		fruta.y = rand() % (Y-1);

	}while(fruta.x == 0 || fruta.y == 0);

	if (*vida){
		if(tecla() == 1)
	
	
	}



}


void movimiento(char tablero[Y][X],int tam){

	int vida = 1;

	do{
		
		imprimir(tablero);
		tam_serpiente(tablero,&tam,&vida);

	}while(vida);





}


int main (){

	int tam = MIN;
	char tablero[Y][X];
	
	inicio(&tam,tablero);
	movimiento(tablero,tam);

	return EXIT_SUCCESS;

}
