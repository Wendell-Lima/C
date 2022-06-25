#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
    2) Leia uma sequência de valores positivos e informe os três maiores. Um valor negativo, ou zero, deve encerrar o programa.
*/

int main(){
    setlocale(LC_ALL, "Portuguese");

    int valor,m1=0,m2=0,m3=0,aux,cont=1;

    printf("\nAtenção, valores menores que 1, encerrarão o programa.\n");

    while(valor > 0){
        printf("\nDigite o %dº valor = ",cont);
        scanf("%d",&valor);

        if(valor > m1){
            aux = m1;
            m1 = valor;
            m3 = m2;
            m2 = aux;
        }
        if(valor < m1 && valor > m2){
            aux = m2;
            m2 = valor;
            m3 = aux;
        }
        if(valor < m2 && valor > m3){
            m3 = valor;
        }
        cont++;
    }

    printf("\n1º Maior = %d",m1);
    printf("\n2º Maior = %d",m2);
    printf("\n3º Maior = %d",m3);

    return 0; 
}