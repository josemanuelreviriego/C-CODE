#include <stdio.h>
#include <stdlib.h>

int main(){

int numero;
int invertido=0;
int resto;

	printf("Numero ");
	scanf(" %i",&numero);

	do{
	resto=numero%10;
	numero/=10;
	invertido=invertido*10+resto;
	}
	while(numero>0);
	
	printf("%i",invertido);


    return EXIT_SUCCESS;
}
