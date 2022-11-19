#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 5
#define Tam 50


int main(){
	char lista[N][Tam],aux[Tam];
	int i,j;
	
	/* Lendo lista de nomes */
	
	for(i=0;i<N;i++){
		printf("Informe o %dº nome: ",i+1);
		gets(lista[i]);
	}
	
	/* Ordenando a lista */
	
	for(i=0;i<N-1;i++){
		for(j=i+1;j<N;j++){
			if (strcmpi(lista[i], lista[j]) > 0)){
				strcpy(aux,lista[i]);
				strcpy(lista[i],lista[j]);
				strcpy(lista[j],aux);
			}
		}
	}
	
	/* Mostrando a lista */
	
	for(i=0;i<N;i++){
		printf("%s\n",lista[i]);
	}
	
	
	return 0;
}
