#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int menor(int numeros[MAX]){

	int num_menor;

	for(int i=0; i<MAX; i++){
	
		if(i==0)
			num_menor = numeros[i];
		
		if(numeros[i] < num_menor)
			num_menor = numeros[i];

	}
	
	return num_menor;

}

int main (){

	int numeros [MAX];
	int resultado;

	for(int i=0; i<MAX; i++){

		printf("Numeros ");
		scanf(" %i",&numeros[i]);

	}

	printf("Numero menor es %i\n",menor(numeros));

	return EXIT_SUCCESS;

}
