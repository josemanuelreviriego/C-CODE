#include <stdio.h>
#include <stdlib.h>

int main(){

int num =0;
int mayor=0;
int orden =1;
	
	for (int i =0;i<10;i++){

	printf("Numero %i: ",orden++);
	scanf(" %i",&num);

	if(num>=mayor)
	mayor =num;
	}

	printf("El numero mayor es %i ",mayor);







  

    return EXIT_SUCCESS;
}
