#include <stdio.h>
#include <stdlib.h>

int main (){

	//MALLOC
	
	double *n = NULL;

	n = (double *)malloc(sizeof(double));

	*n =3;

	printf("Primera posición con Malloc %lf\n",*n);



	//REALLOC
	
	n = (double *)realloc(n,sizeof(double));


	n[1] = 7;

	printf("Primera posición con realloc %lf\n",n[0]);
	printf("segunda posicion con realloc %lf\n",n[1]);


	free(n);
	


	return EXIT_SUCCESS;

}
