//Ordenar 10 enteros de menor a mayor

#include <stdio.h>
#include <stdlib.h>

#define MAX 10


void ordenar(int numeros[]);
void imprimir(int numbers[]);



int main (){

	int numer []= {8,4,2,6,4,7,5,2,4,6};

	ordenar(numer);
	imprimir(numer);
	return EXIT_SUCCESS;

}

void ordenar(int numeros[]){

	int intermediario;


	for(int i = 0; i<MAX; i++){
		for(int j=0; j<MAX; j++){
			if (numeros[i] > numeros[j]){
				intermediario = numeros[j];
				numeros[j] = numeros[i];
				numeros[i] = intermediario;
			}		
		}
	}

}


void imprimir(int numbers[]){

	for (int i=0; i<MAX; i++){
		printf("%i\n",numbers[i]);
	}







}

