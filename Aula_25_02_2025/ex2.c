#include <stdio.h>

int main() {
    
    int num1, num2;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    if(num1>num2)
        printf("Maior: %d\nMenor: %d", num1, num2);
    if(num1<num2)
        printf("Maior: %d\nMenor: %d", num2, num1);
    if(num1==num2)
        printf("Iguais");
    
    return 0;
}
