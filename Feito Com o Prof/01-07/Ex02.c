/*
    2) Fazer um algoritmo que gere os n primeiros termos da serie de fibonacci
    0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
*/

#include <stdio.h>;

int main(){
    int first_num=0,second_num=1,contador=0;

    do{
        printf("%d -> ",first_num);
        second_num += first_num;
        first_num = second_num - first_num;
        contador++;
    }while(contador<=10);


    return 0;
}