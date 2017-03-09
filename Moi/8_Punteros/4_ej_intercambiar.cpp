#include <stdio.h>
#include <stdlib.h>

#define N 7

void imprimir(int data[N]){

	for(int i=0; i<N; i++)
		printf("%2i",data[i]);
	printf("\n");
}

int main (){

	int data [N] = {7,5,3,4,7,8,9};

	int *pi = data;
	int *pf = data + N - 1;
	int intermediario;
	

	imprimir(data);


	while (pi<pf){
	
		intermediario = *pi;
		*pi = *pf;
		*pf = intermediario;
	
		pi++;
		pf--;
	
	}

	imprimir(data);


	return EXIT_SUCCESS;

}
