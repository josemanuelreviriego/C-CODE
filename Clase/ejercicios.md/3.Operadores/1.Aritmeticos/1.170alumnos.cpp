#include <stdio.h>
#include <stdlib.h>

int main(){
int numero = 0;
int fila = 1;
int columna;

	printf("Dime el número de la lista\n");
	scanf(" %i",&numero);

	while (numero > 17){
	      numero -= 17;
	      fila++;
	}
	columna = numero;

	printf("Se sienta en la fila %i y la columna %i\n",fila,columna);






   

    return EXIT_SUCCESS;
}
