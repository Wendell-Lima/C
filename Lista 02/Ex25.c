/*25- A confederação brasileira de natação irá promover eliminatórias para o próximo
mundial. Fazer um Algoritmo que receba a idade de um nadador e determine (imprima) a
sua categoria segundo a tabela a seguir:*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d",&idade);

    if(idade>=5 && idade<=7){
        printf("Categoria -> Infantil A\n");
    }
    else if(idade<=10){
        printf("Categoria -> Infantil B\n");
    }
    else if(idade<=13){
        printf("Categoria -> Juvenil A\n");
    }
    else if(idade<=17){
        printf("Categoria -> Juvenil B\n");
    }
    else{
        printf("Categoria -> Senior\n");
    }
    printf("Idade: %d",idade);
    return 0;
}