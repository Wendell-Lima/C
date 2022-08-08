/*
    3) Fazer um programa que leia uma frase e conte a quantidade de palavras, a
    quantidade de letras e a quantidade de cada vogal.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char frase[10000];
    int qtd_letra=0,qtd_palavra=0,vogal=0,vogal_a=0,vogal_e=0,vogal_i=0,vogal_o=0,vogal_u=0;
    printf("Digite uma frase: ");
    gets(frase);
    
    int tamanho_frase = strlen(frase);
    for(int i=0;i<tamanho_frase;i++){
        if(frase[i]!= ' '){ /* Percorri a string e o que não esta vazio ele soma um*/
            qtd_letra++; 
            if(frase[i]<=64 || frase[i]>=91 && frase[i]<= 96|| frase[i]>=123) /*https://prnt.sc/OABwvkaAebFP o que está entre os retangulos vermelhos é o que ele não considera letra e por isso diminui 1*/
            {
                qtd_letra--;
            }
        }
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' || frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U'){
            vogal++;
        }
        if(frase[i] == 'a' || frase[i] == 'A'){
            vogal_a++;
        }
        if(frase[i] == 'e' || frase[i] == 'E'){
            vogal_e++;
        }
        if(frase[i] == 'i' || frase[i] == 'I'){
            vogal_i++;
        }
        if(frase[i] == 'o' || frase[i] == 'O'){
            vogal_o++;
        }
        if(frase[i] == 'u' || frase[i] == 'U'){
            vogal_u++;
        }
    }
    for(int i=0;i<tamanho_frase-1;i++){
        if(frase[i]!= ' ' && frase[i+1]!= ' ' && frase[i+2]==' ' || frase[i]!= ' ' && frase[i+1]!= ' ' && frase[i+2]=='\0'){
            qtd_palavra++;
        }
    }

    puts(frase);
    printf("Quantidade de palavras: %d\n",qtd_palavra);
    printf("Quantidade de letras: %d\n\n",qtd_letra);
    printf("Quantidade de vogais: %d\n",vogal);
    printf("Quantidade de vogais A: %d\n",vogal_a);
    printf("Quantidade de vogais E: %d\n",vogal_e);
    printf("Quantidade de vogais I: %d\n",vogal_i);
    printf("Quantidade de vogais O: %d\n",vogal_o);
    printf("Quantidade de vogais U: %d\n",vogal_u);
    
    return 0;
}