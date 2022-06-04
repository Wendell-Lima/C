/*43- Escreva um Algoritmo que leia um peso na Terra e o número de um planeta e
imprima o valor do seu peso neste planeta. A relação de planetas é dada a seguir
juntamente com o valor das gravidades relativas á Terra:*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float peso_terra,peso_fora;
    int escolha;
    printf("Digite o seu peso na terra em kg: ");
    scanf("%f", &peso_terra);

    printf("\nAgora escolha em qual planeta voce deseja saber seu peso.\n");

    printf("Digite o numero correspondente a cada planeta, conforme a tabela abaixo: \n1 -> Mercurio\n2 -> Venus\n3 -> Marte\n4 -> Jupiter\n5 -> Saturno\n6 -> Urano\n7 -> Netuno\n");
    scanf("%d", &escolha);

    switch(escolha){
        case 1: //Mercurio
            peso_fora = peso_terra*0.37;
            printf("Seu peso em Mercurio e: %.2f",peso_fora);
        break;
        case 2: //Venus
            peso_fora = peso_terra*0.88;
            printf("Seu peso em Venus e: %.2f",peso_fora);
        break;
        case 3: //Marte
            peso_fora = peso_terra*0.38;
            printf("Seu peso em Marte e: %.2f",peso_fora);
        break;
        case 4: //Jupiter
            peso_fora = peso_terra*2.64;
            printf("Seu peso em Jupiter e: %.2f",peso_fora);
        break;
        case 5: //Saturno
            peso_fora = peso_terra*1.15;
            printf("Seu peso em Saturno e: %.2f",peso_fora);
        break;
        case 6: //Urano
            peso_fora = peso_terra*1.17;
            printf("Seu peso em Urano e: %.2f",peso_fora);
        break;
        case 7: //Netuno
            peso_fora = peso_terra*1.18;
            printf("Seu peso em Netuno e: %.2f",peso_fora);
        break;

        default:
            printf("APENAS NUMEROS DE 1 A 7!");
    }

    return 0;
}