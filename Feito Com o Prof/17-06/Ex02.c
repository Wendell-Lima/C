#include <stdio.h>
#include <locale.h>
/*
    1560 --> 15 -> 100, 1 -> 50, 1 -> 10
    560 --> 5 -> 100, 1 -> 50, 1 -> 10
    321 --> 3 -> 100, 2 -> 10, 1 -> 1
*/

int main(){
    int valor;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o valor: ");
    scanf("%d",&valor);

    printf ("Número de cédulas de R$ 100: %d\n",valor/100); /*como é int so vai pegar a parte inteira.*/
    valor = valor - valor/100*100; 
    printf ("Número de cédulas de R$ 50: %d\n",valor/50);
    valor = valor%50;
    printf ("Número de cédulas de R$ 10: %d\n",valor/10);
    valor = valor%10;
    printf ("Número de cédulas de R$ 5: %d\n",valor/5);
    valor = valor%5;
    printf ("Número de cédulas de R$ 1: %d\n",valor);


    return 0;
}