/*9- Considere que o número de uma placa de veículo é composto por quatro algarismos.
Construa um Algoritmo que leia este número e apresente o algarismo correspondente à
casa de milhar.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n_placa, milhar, centena, dezena, unidade;

    printf("Informe o numero da placa: ");
    scanf("%d", &n_placa);
    
    centena = n_placa % 1000;
    milhar = n_placa % 10000;

    milhar = milhar - centena;

    printf("Milhar: %d",milhar);

    return 0;
}