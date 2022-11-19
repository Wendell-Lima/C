#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100

// Registro aluno
typedef struct{
     int cod;
	 char nome[50];
     float nota;
	 char sit; // p: presente, e: exclu�do 
} taluno; //taluno --> nome do tipo



int entrada(taluno *cadalu, int ind){
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
		
		cadalu[ind].sit = 'P';
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
	printf("\n");
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

// Tabela de alunos geradas dinamicamente
taluno *cadalu;

int leitura_arquivo(char filename[]){
	FILE *fp; // Nome do ponteiro fp file point
	int nb, qtde_registros, ind, i;
	
	// Abre o arquivo para leitura
	fp = fopen(filename,"r"/*r = read*/); // Abrir um arquivo em C, eu uso a fun��o fopen(nome_do_arquivo,leitura/grava��o/leitura e grava��o)
	if(fp == NULL){
		printf("Erro ao abrir arquivo!\n");
		cadalu = (taluno *) malloc(1000 * sizeof(taluno));
		return 0;
	}
	
	// Posiciona no final do arquivo
	fseek(fp,0,SEEK_END); // Pule 0 bits a partir do fim do arquivo = se posicione no fim do arquivo.
	
	// Conta bytes do inicio at� a posi��o corrente
	nb = ftell(fp); // ftell nos conta quantos bytes possui o arquivo desde o inicio at� onde estou
	
	ind = nb / sizeof(taluno);
	
	// Reserva de espa�o criando vetor dinamicamente
	qtde_registros = ind + 1000;
	
	cadalu = (taluno *) malloc(qtde_registros * sizeof(taluno));
	if(cadalu == NULL){
		printf("Erro ao alocar memoria!\n");
		exit(0);
	}
	
	// Posiciona no come�o do arquivo
	fseek(fp, 0, SEEK_SET);
	for(i=0; i<ind; i++)
        fread(&cadalu[i], sizeof(taluno), 1, fp);
	
	// Fecha o arquivo
	fclose(fp);
	
	return ind;
}

void salva(char filename[], int ind){
	FILE *fp;
	int i;
	fp = fopen(filename,"w");
	if(fp == NULL){
		printf("Erro ao gravar arquivo\n");
		exit(0);
	}
	for(i=0; i<ind; i++)
		fwrite(&cadalu[i], sizeof(taluno), 1, fp);
	
	fclose(fp); // Pode corromper se nao usar, altera na memoria mas nao altera no disco se nao usar fclose
}

int main(){
	int ind = 0, op;
	ind = leitura_arquivo("Alunos.dad");
	
	do{
		system("cls");
		printf("Menu\n");
		printf("1 - Cadastro de Alunos\n");
		printf("2 - Lista Cadastro de Alunos\n");
		printf("3 - Ordena Cadastro de Alunos por nome\n");
		printf("4 - Excluir Aluno\n");
		printf("5 - Encerra\n");
		printf("Informe sua escolha: ");
		scanf("%d", &op);
		
		switch (op){
			case 1: ind = entrada (cadalu, ind); break;
			case 2: mostra (cadalu, ind); break;
			case 3: ordena (cadalu, ind); break;
			//case 4: 
			case 5: exit(0); break;
			default: printf("Escolha Invalida\n");
		}
		
	} while(op != 4);
	
	salva("Alunos.dad",ind);
	
	return 0;
}



