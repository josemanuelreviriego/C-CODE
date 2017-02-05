//INTERCAMBIAR LOS VALORES DE 2 VARABILES CON UNA FUNCION

#include <stdio.h>
#include <stdlib.h>

void cambio (int *a, int *b);

int main (){

	int x;
	int y;

	x=5;
	y=10;

	printf("x=%i \ny=%i \n",x,y);

	cambio(&x,&y);

	printf("x=%i \ny=%i \n ",x,y);


	return EXIT_SUCCESS;

}

void cambio (int *a, int *b){

	int intercambiar;

	intercambiar = *a;
	*a = *b;
	*b = intercambiar;











}
