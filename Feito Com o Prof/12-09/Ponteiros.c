#include <stdio.h>

/*
	PONTEIROS EM C

		- PONTEIROS GUARDAM ENDERE�OS!!!
		- P -> ano. p aponta para a variavel ano.
*/

int main(){
	int *p,ano; /* ASTERISCO NA FRENTE DA VARIAVEL QUER DIZER QUE A VARIAVEL � UM PONTEIRO!!! */
	
	ano = 1984;
	p = &ano; /* P recebe o endere�o da vari�vel ano*/
	
	printf("%d\n",ano);
	printf("%d\n",*p); /* Mostro o conte�do que p esta apontando*/
	
	printf("%p\n",p); /* %p, %o, %x, MOSTRO APENAS O ENDERE�O */
	printf("%p\n",&ano); 
	
	return 0;
}

