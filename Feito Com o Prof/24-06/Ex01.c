#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*
    1) Leia um conjunto de 50 fichas, cada uma contendo, a altura e o código do sexo de uma pessoa (código = 1 se for masculino e 2 se for feminino), e calcule:
    - A maior e a menor altura da turma;
    - A média de altura das mulheres;
    - A média de altura dos homens;
    - A média de altura da turma toda.

*/

int main(){
    setlocale(LC_ALL, "Portuguese");
    int code=1,i;
    float altura, maior_a, menor_a;
    float cont_m=0.0,cont_f=0.0,aux_m=0.0,aux_f=0.0,aux_turma=0.0;
    for(i=1;i<=50;i++){ /*fará 5 vezes*/
        if(code==1 || code==2){
    
            printf("Digite a altura da %dª pessoa: \n",i);
            scanf("%f",&altura);
            printf("Agora o codigo do sexo. (1 => masculino, 2 => feminino): ");
            scanf("%d",&code);    
            
            if(code==1 || code==2){          
                if(code == 1){
                    cont_m++;
                    aux_m += altura;/*altura Somando a altura apenas dos meninos*/
                }
                else{
                    cont_f++;
                    aux_f += altura; /*Somando a altura apenas das meninas*/
                } 
                aux_turma += altura ; /*Somando a altura de todos*/

                if(i==1){ //Preciso inicializa-lás.
                    maior_a = altura;
                    menor_a = altura;
                }
                if(altura > maior_a){
                    maior_a = altura;
                } 
                if(altura < menor_a){
                    menor_a = altura;
                }
                
            }
        }
        if(code != 1 && code != 2){
            printf("\nCódigo não permitido!\n");
            printf("\n");
            i--;
            code = 1;
        }

        
    }

    printf("\nMaior altura da turma = %.2f",maior_a);
    printf("\nMenor altura da turma = %.2f",menor_a);
    printf("\nMedia da altura dos homens = %.2f",aux_m/cont_m);
    printf("\nMedia da altura das mulheres = %.2f",aux_f/cont_f);
    printf("\nMedia da altura da turma toda = %.2f",aux_turma/(i-1));

    return 0;
}