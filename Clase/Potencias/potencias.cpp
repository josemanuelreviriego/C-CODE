#include <stdio.h>
#include <stdlib.h>

#define MAX 3





void pedir_valores(int valores[MAX]){
	
	for (int i = 0; i<MAX; i++){
	
		printf("Primer numero %i\n",i+1);
		scanf(" %i",&valores[i]);
		
	}
}

void imprimir_valores(int valores[MAX]){

	printf("f(x) = ");

	for (int i = 0; i<MAX; i++){
	
		printf("%ix ",valores[i]);

			if( i < MAX-1)
				printf("+ ");

	}

	printf("\n");

}


int main (){

	int valores[MAX];

	pedir_valores(valores);
	imprimir_valores(valores);
	
	return EXIT_SUCCESS;

}
