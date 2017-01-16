#include <stdio.h>
#include <stdlib.h>

int main(){

int numero1;
int numero2;
int resultado=0;

	printf("numero 1 ");
	scanf(" %i",&numero1);

	printf("numero 2 ");
	scanf(" %i",&numero2);

	do{
		if (numero2%2 ==1 )
			resultado+=numero1;
		numero2 >>=1;
		numero1 <<=1;
	}
	while(numero2>0);

	printf("el resultado es %i\n",resultado);

    return EXIT_SUCCESS;
}
