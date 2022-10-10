#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

// Registro aluno
typedef struct{
     int cod;
	 char nome[50];
     float nota;
	 
} taluno; //taluno --> nome do tipo

taluno cadalu[N];
// UMA ESTRUTURA É UM AGREGADO HETEROGENEO

int entrada(taluno cadalu[], int ind){
	int cod;
	system("cls");
	printf("Cod: ");
	scanf("%d", &cod);
	
	while(cod != 0 && ind < N){
		cadalu[ind].cod = cod;
		fflush(stdin);
		
		printf("Nome do Aluno: ");
		gets(cadalu[ind].nome);
		fflush(stdin);
		
		printf("Nota: ");
		scanf("%f",&cadalu[ind].nota);
		fflush(stdin);
		
		ind++;
		printf("Cod: ");
	    scanf("%d", &cod);
	}
	
	return ind;
}

void mostra(taluno cadalu[], int ind){
	int i;
	system("cls");
	
	printf("Cod    Nome                Nota \n\n");
	for(i=0; i<ind; i++){
		printf(" %3d    %-30s    %5.2f\n" ,cadalu[i].cod, 
				 				 		  cadalu[i].nome,
	 									  cadalu[i].nota);
	}
	system("pause");
}

void ordena(taluno v[], int ind){
	int i, j;
	taluno aux;
	
	for (i=0; i<ind-1; i++)
		for (j=i+1; j<ind; j++)
		{
			if(strcmpi(v[i].nome, v[j].nome)>0)
			{
				aux = v[i];
				v[i]=v[j];
				v[j]=aux;
			}
		}
}


int main(){
	int ind = 0, op;
	do{
		system("cls");
		printf("Menu\n");
		printf("1 - Cadastro de Alunos\n");
		printf("2 - Lista Cadastro de Alunos\n");
		printf("3 - Ordena Cadastro de Alunos por nome\n");
		printf("4 - Encerra\n");
		printf("Informe sua escolha: ");
		scanf("%d", &op);
		
		switch (op){
			case 1: ind = entrada (cadalu, ind); break;
			case 2: mostra (cadalu, ind); break;
			case 3: ordena (cadalu, ind); break;
			case 4: break;
			default: printf("Escolha Inválida\n");
		}
		
	} while(op != 4);	
	return 0;
}



