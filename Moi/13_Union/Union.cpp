#include <stdio.h>
#include <stdlib.h>

union prueba{
	
	int a;
	int b;

};



int main (){

	prueba primera;
	int *hola;

	primera.a = 47;
	primera.b = 50;

	hola = &primera.a;
	hola = &primera.b;
	
	printf("%i",*hola);

	return EXIT_SUCCESS;

}
