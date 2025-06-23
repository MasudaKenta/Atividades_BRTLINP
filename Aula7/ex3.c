#include <stdio.h>

int main(){
	
	int opc=0;
	
	while(opc!=-1){

		printf("Opcoes: \n1 - Lavar, Enxaguar e Secar\n2 - Enxaguar e Secar\n3 - Secar\n4 - Desligar\nEscolha um dos modos: ");
		scanf("%d", &opc);
		
		switch(opc){
			case 1:
				puts("Lavando...");
			case 2:
				puts("Enxaguando...");
			case 3:
				puts("Secando...");
				break;
			case 4:
				puts("Desligando maquina.");
				break;
			default:
				puts("ERROR");
				break;
				
		}
		puts("______________________________________________");
	
		if(opc == 4)
			break;

	}
	
	return 0;
}
