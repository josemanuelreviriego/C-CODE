#include <stdio.h>
#include <stdlib.h>

void intercambia(int *a,int *b){

	int x;

	x = *a;
	*a = *b;
	*b = x;

}

int main (){

	int a,b;

	printf("Valor de a ");
	scanf(" %i",&a);

	printf("Valor de b ");		
	scanf(" %i",&b);

	intercambia(&a,&b);

	printf("Valor de a %i\n",a);		
	printf("Valor de b %i\n",b);		

	return EXIT_SUCCESS;

}
