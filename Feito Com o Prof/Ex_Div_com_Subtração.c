#include <stdio.h>
#include <math.h>
/*

 	125/25 = 125 - 25 = 100, 100 - 25 = 75, 75 - 25 = 50, 50 - 25 = 25, 25 - 25 = 0 
	Foram feitas 5 subtra��es para se chegar a 0.
*/
int main(){
	int X,Y,D=0;
	
	printf("Digite dois n�meros inteiros para serem divididos: "); //primeiro dividendo depois divisor.
	scanf("%d %d",&X,&Y);
	
	
	if(Y!=0){
		if(abs(X)>=abs(Y))
		for(int i=abs(X);i>0;i-=abs(Y)){
			D++;
		}
		else{
			D = 0;
		}
	}
	else{
		printf("N�o pode ser dividido por 0.");
	}
	
	if(X<0 && Y>0){
        printf("Divis�o: %d",D*-1);
    }
    else if(X>0 && Y<0){
        printf("Divis�o: %d",D*-1);
    }
    else{
    	printf("Divis�o: %d",D);
    }
    
    return 0;
}
