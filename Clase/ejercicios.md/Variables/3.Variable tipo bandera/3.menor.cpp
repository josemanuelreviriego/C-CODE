#include <stdio.h>
#include <stdlib.h>

int main(){

int numero=0;
int menor=0;
int orden =1;
	
	for (int i =0;i<10;i++){

	printf("Numero %i: ",orden++);
	scanf(" %i",&numero);

	if (i==0)
	menor = numero;


	if(numero<=menor)
	menor =numero;
	}

	printf("El numero menor es %i ",menor);







  

    return EXIT_SUCCESS;
}
