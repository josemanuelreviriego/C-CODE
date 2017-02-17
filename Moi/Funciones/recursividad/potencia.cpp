#include <stdio.h>
#include <stdlib.h>

int potencia(int numero,int exponente){
	
	if(exponente == 0)
		return 1;
	
	if(exponente == 1)
		return numero;

	if(exponente > 1)

		return (numero * potencia(numero,exponente-1));

}


int main (){

	int numero;
	int exponente;
	

	printf("numero ");
	scanf(" %i",&numero);

	printf("exponente ");
	scanf(" %i",&exponente);



	printf("%i\n",potencia(numero,exponente));
	
	return EXIT_SUCCESS;

}
