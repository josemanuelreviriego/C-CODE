#include <stdlib.h>
#include <stdio.h>

typedef struct Prueba{

        char letra; 
        int numero;
        Prueba *a;

}Datos;

int main(){

        Prueba prueba;
            prueba.letra = 'x';
            prueba.numero = 5;

        Datos datos;
            datos.letra = 'f';
            datos.numero = 10;
            
        printf("%c\n",datos.letra);
        printf("%i\n",datos.numero);
        
        printf("%c\n",prueba.letra);
        printf("%i\n",prueba.numero);

        return EXIT_SUCCESS;
}


