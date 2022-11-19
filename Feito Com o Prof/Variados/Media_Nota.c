#include <stdio.h>
#include <stdlib.h>

int main (){
    float nota1, nota2, nota3, media;
    printf("Informe as 3 notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    media = (nota1+nota2+nota3)/3;

    printf("Média do aluno: %.1f\n",media);
    if(media>=7.0)
        printf("Aprovado\n");
    else
        printf("Reprovado\n");
    
    system("pause");
    return 0;
}