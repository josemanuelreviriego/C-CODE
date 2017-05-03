#include <stdlib.h>
#include <stdio.h>

void dar_numero(int *n){

	printf("%p",n);

}

int main(){

	int numero = 5;
	int *p_numero = &numero;
	int **p_p_numero = &p_numero;



		printf("%p\n",&p_numero);  //a8
		printf("%p\n",&*p_p_numero); //a8

	printf("\n");

		printf("%p\n",&p_p_numero); //b0

	printf("\n");

		printf("%p\n",&numero);  //a4
		printf("%p\n",*p_p_numero); //a4
		printf("%p\n",&*p_numero); //a4


	dar_numero(*p_p_numero);




	return EXIT_SUCCESS;
}
