#include <stdio.h>
#include <stdlib.h>

void leer (double *a,double*b);

int main (){

	double base;
	double exponente;

	printf("Base: ");
	scanf(" %lf",&base);

	printf("Exponente: ");
	scanf(" %lf",&exponente);

	leer (&base,&exponente);


	return EXIT_SUCCESS;

}

void leer (double *a,double*b){

	printf("base = %.2lf\n",*a);
	printf("exponente %.2lf\n",*b);





}


