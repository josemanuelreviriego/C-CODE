//SABER SI UN NÚMERO ES PAR

#include <stdio.h>
#include <stdlib.h>

bool es_par(int n);
int main (){

	int numero;

	printf("Numero ");
	scanf(" %i", &numero);

	printf("Tu numero %ses par\n",es_par(numero)? "": "no " );


	return EXIT_SUCCESS;

}

bool es_par(int n){
	return (n%2 == false);
}
