#include <stdio.h>
#include <stdlib.h>

void primer_lugar(int numero,int desplazar,int contador){

	do{
		numero <<= 1;
		printf("desplazamiento %i.-%i \n",contador,numero);
	
		desplazar--;
		contador++;

	}while(desplazar);

}


void segundo_lugar(int numero,int desplazar,int contador){

	do{
		numero <<= 2;
		printf("desplazamiento %i.-%i \n",contador,numero);
	
		desplazar--;
		contador++;

	}while(desplazar);

}


int main (){

	int numero;
	int desplazar;
	int contador = 1;

	printf("dame un numero " );
	scanf(" %i",&numero);

	printf("¿Cuantas veces quieres desplazarlo? ");
	scanf(" %i",&desplazar);

	printf("\nCon un desplazamiento\n\n");
	primer_lugar(numero,desplazar,contador);
	
	printf("\n");

	printf("Con dos desplazamientos\n\n");
	segundo_lugar(numero,desplazar,contador);


	return EXIT_SUCCESS;

}
