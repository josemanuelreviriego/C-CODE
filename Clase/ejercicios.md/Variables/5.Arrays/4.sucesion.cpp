#include <stdio.h>
#include <stdlib.h>

int main(){

int fibonacci[20];

int primero=1;
int segundo=1;
int tercero=primero+segundo;

	fibonacci[0]=primero; //1
	fibonacci[1]=segundo; //1


	for(int i=0; i<20; i++){
	tercero=primero+segundo;
	primero=segundo;
	segundo=tercero;
	fibonacci[i+2]=tercero;
	printf("%i\n",fibonacci[i]);




   }

    return EXIT_SUCCESS;
}
