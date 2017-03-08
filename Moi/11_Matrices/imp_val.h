#include <stdio.h>
#include <stdlib.h>


#define MAX 3
#define PRIMERA int a[MAX] [MAX]


void valores(PRIMERA){

        int numero = 1;

        for(int y=0; y<MAX; y++){
		for(int x=0; x<MAX; x++){
			a[y][x] = numero++;

		}
	}

}

void imprimir(PRIMERA){


        for(int y=0; y<MAX; y++){
		for(int x=0; x<MAX; x++){

			printf("%i  ",a[y][x]);

			}

	printf("\n");

	}

}

void num(PRIMERA,int *numero,int *meterlo){

	printf("Dame el valor %i ",++(*numero));
	scanf(" %i",meterlo);

}

void pedir_imprimir(PRIMERA){

	int numero = 0;
	int meterlo;

        for(int y=0; y<MAX; y++){
		for(int x=0; x<MAX; x++){
			num(a,&numero,&meterlo);
			a[y][x] = meterlo;
		}
	}

	printf("\n  MATRIZ \n\n");

        for(int y=0; y<MAX; y++){
		for(int x=0; x<MAX; x++){
			printf("%i  ",a[y][x]);
		}
		printf("\n");
	}
	

	
}

