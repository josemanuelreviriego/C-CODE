#include <stdio.h>
#include <stdlib.h>

int main(){

double suma = 0;
double notas = 0;
double media = 0;

	for(int i = 0; i < 10; i++){
	printf ("nota ");
	scanf (" %lf",&suma);
	notas +=suma;
	}
	
	media = notas/10;

	printf ("La media es %.2lf ",media);






   

    return EXIT_SUCCESS;
}
