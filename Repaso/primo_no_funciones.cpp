//Primo > divisores solo el numero y 1
#include <stdio.h>
#include <stdlib.h>


int main(){

	int numero; //5
	int pos_primo = 0;

	printf("Numero ");
	scanf(" %i",&numero);

	for(int divisor=1; divisor<=numero; divisor++){
	
		if(numero%divisor == 0) //si 5%1 == 0 (se cumple) 5%2 == 0 (no se cumple) 
			pos_primo +=1; // incrementa en 1 pos primo si se cumple la condicion
	}

	if(pos_primo == 2) //los primos solo tienen 2 divisores
		printf("El numero es primo\n");

	if(pos_primo > 2)
		printf("El numero no es primo\n");

	return EXIT_SUCCESS;
}
