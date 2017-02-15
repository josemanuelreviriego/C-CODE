#include <stdio.h>
#include <stdlib.h>

#define MAX 5
#define RELLENAR 'a'

typedef struct{

	double x;
	
}val;

val numero;

void imprimir_sin_valores(){

	char valor = RELLENAR;

	for (int i = 0; i<MAX-1; i++){

		if (i==0)
			printf("f(x) = %c + ",valor++);

		printf("%cx^%i ",valor++,i+1);

		if( i < MAX-2)
			printf("+ ");

	}

	printf("\n");

}

void pedir_valores(double valores[MAX]){
	
	char valor = RELLENAR;

	printf("¿Valor de f(x)?: ");
	scanf(" %lf",&numero.x);


	for (int i = 0; i<MAX; i++){

		printf("¿%c?: ",valor++);
		scanf(" %lf",&valores[i]);
		
	}
	
}

double potencia(int elevar,int x){

	int vueltas = 1;
	double primera_x = x;
		do{

			x = primera_x * x;
			vueltas++;	

		}while(vueltas < elevar);

	return x;
}

void resolver(double valores[MAX]){

	double x = numero.x;

	for(int elevar=0;elevar<MAX; elevar++){
		if(elevar==0){

			valores[elevar] = valores[elevar];
			elevar++;
		}

		if(elevar>1)
			x = potencia(elevar,numero.x);
		
		valores[elevar] = valores[elevar] * x;         

	}

}

void imprimir_valores_finales(double valores[MAX]){	

	for (int i = 0; i<MAX; i++){

		if(i==0){
			printf("f(%.0lf) = %.0lf + ",numero.x,valores[i]);
			i++;	
		}

		printf("%.0lf ",valores[i]);

			if( i < MAX-1)
				printf("+ ");

	}

	printf("\n");

}


double sumar(double valores[MAX]){

	int pendiente = 0;
	double suma = 0;

	do{
		suma += valores[pendiente];
		pendiente++;

	}while(pendiente <= MAX-1);

	return suma;

}

int main (){

	double valores[MAX];
	double suma;

	imprimir_sin_valores();
	pedir_valores(valores);

	resolver(valores);
	
	imprimir_valores_finales(valores);

	suma = sumar(valores);

	printf("EL resultado es %.2lf\n",suma);

	return EXIT_SUCCESS;

}
