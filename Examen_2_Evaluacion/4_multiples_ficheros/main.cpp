#include "interface.cpp"

int main (){

	char nombre[50];

	pregunta_nombre(&nombre[0]);

	printf("Tu nombre es %s\n",nombre);


	return 0;

}
