#include <stdlib.h>
#include <stdio.h>

#define MAX 20

#define SUMA 0
#define RESTA 1
#define MULTIPLICA 2
#define DIVIDE 3
#define MATEMATICAS 4 

typedef struct{

	char letras[MAX];
	int edad;
	
}DatosAlumno;



int suma(int a,int b){return a+b;}
int resta(int a,int b){return a-b;}
int multiplica(int a,int b){return a*b;}
int divide(int a,int b){return a^b;}

char letra(const char cadena[10],int posicion){return cadena[posicion];}
void imprimir_nombre(){printf("Hola mundo\n");}
/* 
DatosAlumno persona(){

	DatosAlumno humano;
	humano.edad = 5;
	humano.letras[0] = 'a';
	humano.letras[1] = 'b';
	
	return humano;
	
}
*/

void imprimir_punteros(int **********a){

	printf("El puntero 10 es %i\n",**********a);

}


int main(){
	
	//Puntero a una funcion

	int (*operacion[MATEMATICAS])(int,int);
	
		operacion[SUMA] = suma;
		operacion[RESTA] = resta;
		operacion[MULTIPLICA] = multiplica;
		operacion[DIVIDE] = divide;

	char (*posicion_letra)(const char[],int);
		posicion_letra = letra;

	void (*nombre)();
		nombre = imprimir_nombre;

/*
	DatosAlumno (*a);
		a = persona;
*/

	printf("2+3 = %i\n",operacion[SUMA](2,3));
	printf("2-3 = %i\n",operacion[RESTA](2,3));
	printf("2*3 = %i\n",operacion[MULTIPLICA](2,3));
	printf("2/3 = %i\n",operacion[DIVIDE](2,3));

	printf("%c\n",posicion_letra("fernandosi",5));
	imprimir_nombre();

	//Punteros "dobles"
	
	int a = 5;


	int y[3];
	y[0] = 27;

	int *p1=&y[0];
	int **p2=&p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	int ******p6 = &p5;
	int *******p7 = &p6;
	int ********p8 = &p7;
	int *********p9 = &p8;
	int **********p10 = &p9;
	int *********p11 = &p8;
	int ********p12 = &p7;
	int *******p13 = &p6;
	int ******p14 = &p5;
	int *****p15 = &p4;
	int ****p16 = &p3;
	int ***p17 = &p2;
	int **p18 = &p1;
	int *p19 = &y[0];

	imprimir_punteros(p10);


	return EXIT_SUCCESS;

}




