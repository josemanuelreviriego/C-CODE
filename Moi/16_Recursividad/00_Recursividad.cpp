#include <stdlib.h>
#include <stdio.h>

int suma(int n){

	if(n == 0)
		return 0;

	return n + suma(n-1);

}

void palabra(const char *p){

	if(*p == '\0'){
		printf("\n");
		return;
	}


	printf("%c",*p);

	palabra(p+1);

}



int main(){

	printf("%i\n",suma(10));
	palabra("fernand");




	return EXIT_SUCCESS;

}
