#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
#include "medias.h"


int main(int argc, char *argv[]) {
	int op;
	
	setlocale(LC_ALL, "Portuguese");
	
	do{
		system("cls");
		printf("-= MENU =-\n");
		printf("1 - Medias\n");
		printf("2 - Util\n");
		printf("0 - Sair\n\n");
		printf("Selecione a opção: ");
		
		op = getche();
		op -= 48;
		fflush(stdin);
		
		printf("\n");
		switch(op){
			case 1:
				//medias;
				break;
			case 2:
				//util;
				break;
			case 0:
				printf("Fechando...\n");
				Sleep(500);
				op = 1;
				break;
		}
		
		
	}while(!op);
	
	return 0;
}
