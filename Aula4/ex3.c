#include <stdio.h>

int main() {
    float peso, altura, imc;
    
    printf("Digite o seu peso [em kg]: ");
    scanf("%f", &peso);
    
    printf("Digite a sua altura [em m]: ");
    scanf("%f", &altura);
    
    imc = peso/(altura*altura);
    
    printf("\nSeu imc: %.1f\nDiagnostico: ", imc);
     
    if(imc > 40.0){
    	printf("obesidade classe III\n");
	}
	else{
		if(imc >= 35.0){
			printf("obesidade classe II\n");
		}
		else{
			if(imc >= 30.0){
				printf("obesidade classe I\n");
			}
			else{
				if(imc >= 25.0){
					printf("sobrepeso\n");
				}
				else{
					if(imc >= 18.5){
						printf("intervalo normal\n");
					}
					else{
						printf("baixo peso");
					}
				}
			}
		}
	}
    
    
    return 0;
}
