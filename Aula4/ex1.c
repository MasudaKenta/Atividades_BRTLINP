#include <stdio.h>

int main() {
    float imc;
    
    puts("Digite o IMC: ");
    scanf("%f", &imc);
    
    if(imc <= 24.9){
        if(imc >= 18.5)
            puts("Intervalo normal");
        else
            puts("Fora do intervalo normal [imc abaixo do esperado]");
    }
    else
        puts("Fora do intervalo normal [imc acima do esperado]");
    
    return 0;
}
