/*8- Considere que o número de uma placa de veículo é composto por quatro algarismos.
Construa um Algoritmo que leia este número e apresente o algarismo correspondente à
casa das centenas.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n_placa, centena, dezena, unidade;

    printf("Informe o numero da placa: ");
    scanf("%d", &n_placa);
    
    dezena = n_placa % 100;
    centena = n_placa % 1000;

    centena = centena - dezena;

    printf("Centena: %d",centena);

    return 0;
}