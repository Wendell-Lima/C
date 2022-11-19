#include <stdio.h>

int main(){

    typedef struct {
        int hora;
        int minuto;
        int segundo;

    } thorario;

    thorario agora, *depois;
    depois = &agora;

    depois -> hora = 20;  /*A estrutura depois aponta ( -> ) para hora*/
    depois -> minuto = 80;
    depois -> segundo = 50; 
    
    int somatorio = 100;
    thorario antes;

    antes.hora = somatorio + depois -> segundo;
    antes.minuto = agora.hora + depois -> minuto;
    antes.segundo = depois -> minuto + depois -> segundo;

    printf("Horario: %d:%d:%d\n", antes.hora, antes.minuto, antes.segundo); 


    return 0;
}