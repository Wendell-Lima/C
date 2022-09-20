#include <stdio.h>
#include <stdlib.h>
/*
    b) um procedimento de calcule e imprima a tabuada de um número repassado como argumento.
   void tabuada(int Num)
*/
void tabuada(int num);

void tabuada(int num){
    int resultado;
    for(int i=0;i<=10;i++){
        resultado = num*i;
        printf("%d x %d = %d\n",num,i,resultado);
    }
}

int main(){ 
    int n;

    printf("Digite um numero: ");
    scanf("%d",&n);

    tabuada(n);

    return 0;
}