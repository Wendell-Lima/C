/*
    3) Fazer um programa que leia uma frase e conte a quantidade de palavras, a
    quantidade de letras e a quantidade de cada vogal.
*/

#include <stdio.h>
#include <string.h>

int main(){
    char frase[1000];
    int qtd_letra=0,qtd_palavra=0,vogal=0;
    printf("Digite uma frase: ");
    gets(frase);
    
    int tamanho_frase = strlen(frase);
    for(int i=0;i<tamanho_frase;i++){
        if(frase[i]!= ' '){ /* Percorri a string, para saber quantos espaços que não estavam vazios haviam nela, para assim somar um ao contador qtd_letras.*/
            qtd_letra++; 
        }
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' || frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U'){
            vogal++;
        }
    }
    for(int i=0;i<tamanho_frase-1;i++){
        if(frase[i]!= ' ' && frase[i+1]!= ' ' && frase[i+2]==' ' || frase[i]!= ' ' && frase[i+1]!= ' ' && frase[i+2]=='\0'){
            qtd_palavra++;
        }
    }

    puts(frase);
    printf("Quantidade de palavras: %d\n",qtd_palavra);
    printf("Quantidade de letras: %d\n",qtd_letra);
    printf("Quantidade de vogais: %d\n",vogal);
    return 0;
}