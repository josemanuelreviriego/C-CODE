#include <stdio.h>
#include <stdlib.h>
#include "mates.h"


int main (){

	int a,b;

	printf("Numero 1 ");
	scanf(" %i",&a);

	printf("Numero 2 ");
	scanf(" %i",&b);
	



	printf("La suma es %i\n",suma(a,b) );

	printf("La resta es %i\n",resta(a,b) );

	printf("La multiplicacion es %i\n",multiplica(a,b) );

	printf("La division es %i\n",divide(a,b) );


	return EXIT_SUCCESS;

}
