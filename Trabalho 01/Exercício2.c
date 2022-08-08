/*
2) Elabore um programa em C que leia três nomes (nomes compostos) e os
imprima em ordem alfabética.
*/

#include <stdio.h>
#include <string.h>

int main(){
	char nome[81],aux[81],primeiro_nome[81],segundo_nome[81],terceiro_nome[81];
	
	for(int i=0;i<3;i++){
		printf("Digite o %d",i+1);
		printf("o Nome = ");
		fgets(nome);
		if(i==0){
			strcpy(aux,nome);
		}
		else if(i==1){
			if(strcmpi(nome,aux)==0){ /*Se o 2º nome e o 1º forem iguais*/
				strcpy(primeiro_nome,nome);
				strcpy(segundo_nome,aux);
			}
			else if(strcmpi(nome,aux)<0){ /*Se o 2º nome e o 1º forem diferentes e o 2º nome vir antes alfabeticamente.*/
				strcpy(primeiro_nome,nome);
				strcpy(segundo_nome,aux);
			}
			else{ /*Se o 2º nome e o 1º forem diferentes e o 1º vier primeiro alfabeticamente*/
				strcpy(primeiro_nome,aux);
				strcpy(segundo_nome,nome);
			}
		}
		else{
			if(strcmpi(nome,primeiro_nome)==0 && strcmpi(nome,segundo_nome)==0){
				strcpy(terceiro_nome,nome);
			}
			else if(strcmpi(nome,segundo_nome)<0 && strcmpi(nome,primeiro_nome)<0){  /*Se o 3º, o 2º e o 1º forem diferentes e o 3º nome vir antes alfabeticamente que os dois.*/
				strcpy(terceiro_nome,segundo_nome);
				strcpy(segundo_nome,primeiro_nome);
				strcpy(primeiro_nome,nome);
			}
			else if(strcmpi(nome,segundo_nome)<0){
				strcpy(terceiro_nome,segundo_nome);
				strcpy(segundo_nome,nome);
			}
			else{
				strcpy(terceiro_nome,nome);
			}
		}
	}
	
	puts(primeiro_nome);
	puts(segundo_nome);
	puts(terceiro_nome);
	
	return 0;
}
