#include <stdio.h>

int main(void) {
    float altura = 1.70;
    float peso = 68.0;
    float imc = peso / (altura*altura);
    printf("O seu IMC eh: %.f", imc);
    return 0;
}
