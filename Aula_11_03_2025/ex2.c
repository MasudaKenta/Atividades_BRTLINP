#include <stdio.h>

int main() {
    float nota;
    
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);
    
    if(nota >= 9){
    	if(nota <= 10)
    		printf("Conceito: A");
    	else
    		printf("Nota fora do padrao");
	}
	else{
		if(nota>=8){
			printf("Conceito: B");
		}
		else{
			if(nota>=7){
				printf("Conceito: C");
			}
			else{
				if(nota>=6){
					printf("Conceito: D");
				}
				else{
					if(nota>=0){
						printf("Conceito: F");
					}
					else{
						printf("Nota fora do padrao");
					}
						
				}
			}
			
		}
	}
    
    return 0;
}
