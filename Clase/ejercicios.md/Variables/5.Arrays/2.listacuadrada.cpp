#include <stdio.h>
#include <stdlib.h>

int main(){

int lista[10];
int i=1;

	while(i<=10){
	lista[i-1]=(i*i);
	i++;
	}

	for(int j=0; j<10; j++){
	printf("%i\n",lista[j]);
	}


   

    return EXIT_SUCCESS;
}
