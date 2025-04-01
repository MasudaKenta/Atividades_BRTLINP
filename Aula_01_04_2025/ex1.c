#include <stdio.h>

int main(){
	
	int n=3, adv, cont=1;
	
	do{
		printf("Adivinhe o numero: ");
		scanf("%d", &adv);
		
		n--;
		if(adv == 7){
			printf("Voce ganhou!\n");
			return 0;
		}
		else{
			if(cont==3)
				printf("Fim de jogo!");
			else
				printf("Numero errado. Tentativas restantes: %d\n", n);	
			cont++;
		}

	}while(cont<=3);
	
	
	return 0;
}
