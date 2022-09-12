#include <stdio.h>

/*
	PONTEIROS EM C

		- PONTEIROS GUARDAM ENDEREÇOS!!!
		- P -> ano. p aponta para a variavel ano.
*/

int main(){
	int *p,ano; /* ASTERISCO NA FRENTE DA VARIAVEL QUER DIZER QUE A VARIAVEL É UM PONTEIRO!!! */
	
	ano = 1984;
	p = &ano; /* P recebe o endereço da variável ano*/
	
	printf("%d\n",ano);
	printf("%d\n",*p); /* Mostro o conteúdo que p esta apontando*/
	
	printf("%p\n",p); /* %p, %o, %x, MOSTRO APENAS O ENDEREÇO */
	printf("%p\n",&ano); 
	
	return 0;
}

