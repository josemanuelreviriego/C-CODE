#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int a = 1;

	for(int i=0; i<10; i++)
		printf("%i",a^=1);


	return EXIT_SUCCESS;

}
