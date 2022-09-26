#include <stdio.h>
#include <stdlib.h>

float *criaVet(int);
// Função cria vetor de float neste exemplo

float *criaVet(int N){
	float *v;
	v = (float *) malloc(N*sizeof(float)); //malloc = memory allocation, recebe a quantidade de bytes que quero alocar
	// (float *) é o cast, pois malloc retorna void.
	return v;
}

void inicializaVet(float *x, int N){
	int i;
	srand(200);
	
	for(i=0;i<N;i++)
       x[i]= rand() % 100;
}

void mostraVet(float *x, int N){
	int i;
	printf("Vetor criado =");
	for(i=0;i<N;i++){
		printf("\n");
		printf("%.1f",*(x+i)); // *(x+1) == v[i]
	}
	    
}

int main(){
	int Tam;
	float *vet;
	printf("Informa o tamanho do vetor: ");
	scanf("%d",&Tam);
	
	vet = criaVet(Tam);
	
	if(!vet){ //se nao vet = (vet == NULL)
		printf("Erro ao alocar vetor\n");
		exit(-1);
	}
	
	inicializaVet(vet,Tam);
	mostraVet(vet,Tam);
	
	// Deleta o vetor
	
	if(vet) free(vet);
	return 0;
}

