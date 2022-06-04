/*39 - Criar um Algoritmo que informe a quantidade total de calorias de uma refeição a
partir do usuário que deverá informar o prato, a sobremesa e a bebida (veja a tabela a
seguir).*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int prato,sobremesa,bebida,total;

    printf("Digite o codigo referente ao PRATO, conforme a tabela a seguir:\n 1 - Vegetariano;\n 2 - Peixe;\n 3 - Frango;\n 4 - Carne.\n--> ");
    scanf("%d",&prato);

    printf("Agora, digite o codigo referente a SOBREMESA, conforme a tabela a seguir:\n 1 - Abacaxi;\n 2 - Sorvete diet;\n 3 - Mouse diet;\n 4 - Mouse chocolate.\n--> ");
    scanf("%d",&sobremesa);

    printf("E por fim, digite o codigo referente a BEBIDA, conforme a tabela a seguir:\n 1 - Chá;\n 2 - Suco de laranja;\n 3 - Suco de melao;\n 4 - Refrigerante diet.\n--> ");
    scanf("%d",&bebida);

    /*
    if(prato > 4 || sobremesa > 4 || bebida > 4)
    {
        printf("Apenas numeros de 1 a 4!!!");
    }
    */

    switch (prato){
        case 1: //Vegetariano
            total = 180;
        break;
        case 2: //Peixe
            total = 230;
        break;
        case 3: //Frango
            total = 250;
        break;
        case 4: //Carne
            total = 350;
        break;
        default: 
            printf("Apenas numeros de 1 a 4!");
    }

    switch (sobremesa){
        case 1: //Abacaxi
            total = total + 75;
        break;
        case 2: //Sorvete diet
            total = total + 110;
        break;
        case 3: //Mouse diet 
            total = total + 170;
        break;
        case 4: //Mouse chocolate
            total = total + 200;
        break;
        default: 
            printf("Apenas numeros de 1 a 4!");
    }
    
    switch (bebida){
        case 1: //Chá
            total = total + 20;
        break;
        case 2: //Suco de laranja
            total = total + 70;
        break;
        case 3: //Suco de melão
            total = total + 100;
        break;
        case 4: //Refrigerante diet
            total = total + 65;
        break;
        default: 
            printf("Apenas numeros de 1 a 4!");
    }

    printf("Total de calorias: %d",total," cal.");

    return 0;
}