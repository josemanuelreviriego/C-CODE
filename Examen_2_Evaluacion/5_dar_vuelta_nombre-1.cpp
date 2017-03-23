#include <stdio.h>
#include <stdlib.h>

void intercambiar(char *nombre,int medida){

	char aux;
	int vueltas = medida;

	for (int i=0; i<vueltas; i++){
	
		aux = nombre[medida--];
		nombre[vueltas-1] = aux;
		
		

	
	}

	printf("\n");


}



int main (){

	char nombre[] = "Megumin y Yunyun";
	int medida = sizeof(nombre) - 1;

	printf("Original -- %s\n",nombre);

	intercambiar(nombre,medida);

	printf("%s\n",nombre);





	return EXIT_SUCCESS;

}
