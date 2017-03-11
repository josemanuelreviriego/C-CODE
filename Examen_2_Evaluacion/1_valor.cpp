#include <stdio.h>
#include <stdlib.h>


int sumar(int num_a,int num_b){
	
	return num_a+num_b;

}

int main (){

	int a;
	int b;

	printf("a ");
	scanf(" %i",&a);

	printf("b ");
	scanf(" %i",&b);

	printf("El resultado es %i\n",sumar(a,b));


	return EXIT_SUCCESS;

}
