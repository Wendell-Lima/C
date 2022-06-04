/* 6- Considere que o número de uma placa de veículo é composto por quatro algarismos.
Construa um Algoritmo que leia este número e apresente o algarismo correspondente à
casa das unidades.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n_placa, unidade;

    printf("Informe o numero da placa: ");
    scanf("%d", &n_placa);

    unidade = n_placa % 10;

    printf("Unidade e: %d",unidade);

    return 0;
}