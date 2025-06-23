#include <stdio.h>

int main(){
	
	int dado=2, sum=0;
	
	do{
		printf("Insira o numero do dado: ");
		scanf("%d", &dado);
		
		if(dado < 1 || dado > 6){
			printf("error...\n");
			continue;
		}
		else{
				if(dado%2==0)
					sum+=dado;
				else
					break;	
		}
		
	
			
	}while(1);
	
	printf("Soma dos numeros pares digitado ate o momento: %d", sum);
	
	return 0;
}
