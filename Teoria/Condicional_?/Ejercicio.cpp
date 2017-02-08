#include <stdio.h>
#include <stdlib.h>

int main (){

//Ingresar 2 numero enteros por teclado, si los valores son iguales sumarlos
//sino multiplicarlos


	int numero_1;
	int numero_2;
	int resultado;

	printf("Dame el primer numero ");
	scanf(" %i",&numero_1);

	printf("Dame el segundo numero ");
	scanf(" %i",&numero_2);

	resultado = (numero_1 == numero_2) ?numero_1+numero_2:numero_1*numero_2;

	printf("%i\n",resultado);






	return EXIT_SUCCESS;

}
