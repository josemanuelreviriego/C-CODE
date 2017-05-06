#include <stdlib.h>
#include <stdio.h>

void valor(int &numero){

	printf("La direccion de numero %p\n",&numero);
	printf("El contenido de numero %i\n",numero);
	
}

void referencia(int *numero){

	printf("La direccion a la que apunta numero %p\n",numero);
	printf("La direccion de numero              %p\n",&numero);
	printf("Contenido de numero por referencia    %i\n",*numero);

}

int main(){

	int n = 5;
	int a;
	
	printf("%p\n",&n);

	valor(n);
	referencia(&n);



	return EXIT_SUCCESS;
}

