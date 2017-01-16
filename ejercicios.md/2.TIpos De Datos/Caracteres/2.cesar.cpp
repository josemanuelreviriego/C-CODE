#include <stdio.h>
#include <stdlib.h>

int main(){

char palabras[4];
int cifrado=0;
int i=0;

	printf("Palabra ");
	scanf(" %s",palabras);
	
	do{
		cifrado=palabras[i];
		cifrado+=3;
		printf("%c",cifrado);
		i++;
	}
	while(i<4);
	printf("\n");
    return EXIT_SUCCESS;
}
