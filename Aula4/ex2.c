#include <stdio.h>

int main() {
    float nota;
    
    printf("Digite a nota do aluno [0-10]: ");
    scanf("%f", &nota);
    
    if(nota >= 9.0){
    	printf("Conceito: A");
	}
	else{
		if(nota>=8.0){
			printf("Conceito: B");
		}
		else{
			if(nota>=7.0){
				printf("Conceito: C");
			}
			else{
				if(nota>=6.0){
					printf("Conceito: D");
				}
				else{
					printf("Conceito: F");
						
				}
			}
			
		}
	}
    
    return 0;
}
