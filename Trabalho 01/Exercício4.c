/*
    4) Fazer um programa que permita duas pessoas jogarem o jogo da forca. Uma
    pessoa digita uma palavra e a outra deve adivinhar (letra a letra).
*/

#include <stdio.h>
#include <string.h>

int main(){
    char palavra[40],letra[1],aux[40];
    int tamanho_palavra, tamanho_letra,i,chances=6,acertos=0,acerto=0;
    do{
        printf("Digite uma palavra: ");
        scanf("%s",&palavra);
        tamanho_palavra = strlen(palavra);
    }while(tamanho_palavra<2);
    system("cls"); /*Limpo a tela*/

    for(i=0; i<tamanho_palavra; i++){ /*preenchendo o vetor auxiliar com "*" */
        aux[i] = '*';
    }

    while((chances>0) && (acertos<tamanho_palavra)){ /* a pessoa terá 6 tentativas para adivinhar*/
            printf("Chances = %d\n",chances);
            printf("%i Letras\n",tamanho_palavra);
            printf("Palavra = ");

            for(i=0;i<tamanho_palavra;i++){
                printf("%c",aux[i]);
            }

            do{
                printf("\nDigite uma letra: ");
                scanf("%s",&letra[0]);
                tamanho_letra = strlen(letra);
                if(tamanho_letra>1){
                    printf("\nApenas uma LETRA!\n\n");
                }
            }while(tamanho_letra>1);

            for(i=0;i<tamanho_palavra;i++){
                if(palavra[i]==letra[0]){
                    acerto = 1; 
                    aux[i]=palavra[i];
                    acertos++;               
                }
            }

            if(acerto == 0){
                chances--;
            }
            acerto=0;
            system("cls");
    }
    
    if(acertos==tamanho_palavra){
        printf("Parabéns você ganhou!");
    }
    else{
        printf("ih bobão, perdeu!");
    }
    return 0;
}