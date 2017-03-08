#include "imp_val.h"

#define SI true
#define NO false

void comprobar(int primera[MAX][MAX],int segunda[MAX][MAX]){

	int respuesta;

	do{

		system("clear");
		valores(primera);
		imprimir(primera);
		pedir_imprimir(primera);

		printf("\n\n\n");

		valores(segunda);
		imprimir(segunda);
		pedir_imprimir(segunda);

		printf("Estas de acuerdo con las matrices? si=1 / no=0 ");
		scanf(" %i",&respuesta);

	}while(respuesta == NO);

}

void imp_matrices(int primera[MAX][MAX],int segunda[MAX][MAX]){

	system("clear");

	 for(int y=0; y<MAX; y++){
	 	for(int x=0; x<MAX; x++){
			printf("%i  ",primera[y][x]);
		}
		printf("\n");
	 } 


	printf("\n   X\n\n");

	 for(int y=0; y<MAX; y++){
	 	for(int x=0; x<MAX; x++){
			printf("%i  ",segunda[y][x]);
		}
		printf("\n");

	 }

}

void multiplicar(int a[MAX][MAX], int b[MAX][MAX]){

	int resultado[MAX][MAX];
	int posicion_x = 0;

	//PRIMERA COLUMNA

	 for(int y=0; y<MAX; y++){
			resultado[y][0] = 	   (a[y][0] * b[0][0]) 
			       				   + 
					           (a[y][1] * b[1][0])
						  	   +
						   (a[y][2] * b[2][0]) ;
	 }

	//SEGUNDA COLUMNA

	 for(int y=0; y<MAX; y++){
			resultado[y][1] = 	   (a[y][0] * b[0][1]) 
			       				   + 
					           (a[y][1] * b[1][1])
						  	   +
						   (a[y][2] * b[2][1]) ;
	 }

	//TERCERA COLUMNA

	 for(int y=0; y<MAX; y++){
			resultado[y][2] = 	   (a[y][0] * b[0][2]) 
			       				   + 
					           (a[y][1] * b[1][2])
						  	   +
						   (a[y][2] * b[2][2]) ;
	 }

	printf("\nEL RESULTADO ES \n\n");


	 for(int y=0; y<MAX; y++){
	         for(int x=0; x<MAX; x++){
			 printf("%i  ",resultado[y][x]);
		         }
	         printf("\n");
	 }


}

int main (){

	int primera [MAX] [MAX];
	int segunda [MAX] [MAX];

	comprobar(primera,segunda);
	imp_matrices(primera,segunda);
	multiplicar(primera,segunda);
		
	
	return EXIT_SUCCESS;

}
