#include <stdio.h>
#include <stdlib.h>

void incrementa (int *base,int n);


int main (){

	int a = 2, b = 5;

	incrementa(&a,5);
	incrementa(&b,3);
	incrementa(&b,-2);

	printf("%i\n",a);



	return EXIT_SUCCESS;

}

void incrementa (int *base,int n){

	*base +=n;

}


