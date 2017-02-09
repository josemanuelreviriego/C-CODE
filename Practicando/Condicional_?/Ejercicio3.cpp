#include <stdio.h>
#include <stdlib.h>

int main (){

	int h;
	int a =5;
	int b =10;
	int c = 1;

	h=(a>b) ? (b<c) ? a :b:c;
/*
   	if (a>b)
		if(b<c)
			h = a;
		else
			h = b;
	else 
		h = c;
*/




	printf("%i\n",h);


	return EXIT_SUCCESS;

}
