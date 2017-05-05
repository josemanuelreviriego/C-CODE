#include <stdlib.h>
#include <stdio.h>

//set tabstop:8

int main(){
	
	int n;
		int *p_n = &n;
		int **d_p_n = &p_n;

	


	//n	
	

	printf("%p\n",&n);				//20
                                                                                                        
	//Puntero a n                                   
                                                        
	printf("%p\n",p_n);                             //20
	printf("%p\n",&p_n);				//28 B
	printf("%p\n",*&p_n);				//20
                                                   
	//Direccion de puntero a n                     
                                                       
	printf("%p\n\n",d_p_n);				//30 A
	printf("%p\n\n",&d_p_n);			//38 ?
	printf("%p\n\n",*d_p_n);			//20
	printf("%p\n\n",*&d_p_n);			//30 c
	printf("%p\n\n",**&d_p_n);			//20 

	

	
	return EXIT_SUCCESS;
}

