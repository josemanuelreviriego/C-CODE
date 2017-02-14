#include <stdio.h>
#include <stdlib.h>

int main(){

int numero;
int comparador =0;

	printf("Numero ");
	scanf(" %i",&numero);

	for(int i=numero/2; i>0; i--){
		if(numero%i == 0){
			comparador+=i;
		}	
	}
	if(comparador!=numero)
		printf("%i No es perfecto",numero);
	if(comparador==numero)
	printf("%i Es perfecto\n",numero);

    return EXIT_SUCCESS;
}
