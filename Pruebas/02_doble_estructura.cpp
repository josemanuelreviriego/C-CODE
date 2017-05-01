#include <stdlib.h>
#include <stdio.h>

typedef struct Prueba{

        char letra; 
        int numero;
        Prueba *a;

}Datos;

Prueba *ResevarMemoria(char l,int n){

        Prueba *memoria;
        memoria = (Prueba *)malloc(sizeof(memoria));
        memoria->letra = l;
        memoria->numero = n;

        return memoria;
        
}



int main(){

        Prueba prueba;
            prueba.letra = 'x';
            prueba.numero = 5;
            //Primera RESERVA
            prueba.a = ResevarMemoria('a',1);
            //Segunda RESERVA
            prueba.a->a = ResevarMemoria('b',2);

        Datos datos;
            datos.letra = 'f';
            datos.numero = 10;

        //prueba normal

        printf("%c\n",prueba.letra);
        printf("%i\n",prueba.numero);
    
        //PRIMERA RESERVA prueba
               
        printf("Primera reserva %c\n",prueba.a->letra);
        printf("Primera reserva %i\n",prueba.a->numero);

        //Segunda RESERVA prueba

        printf("Segunda reserva %c\n",prueba.a->a->letra);
        printf("Segunda reserva %i\n",prueba.a->a->numero);
 
        //datos normal

        printf("%c\n",datos.a->a->letra);
        printf("a");

        
        return EXIT_SUCCESS;
}


