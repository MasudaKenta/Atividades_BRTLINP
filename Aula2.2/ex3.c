#include <stdio.h>

int main(void) {
    float altura, peso, imc;
    
    printf("Insira a sua altura: ");
    scanf("%f", &altura);
    printf("Insira o seu peso: ");
    scanf("%f", &peso);

    imc = peso / (altura*altura);
   
    printf("O seu IMC eh: %f", imc);
    
    return 0;
}
