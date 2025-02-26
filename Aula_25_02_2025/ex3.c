#include <stdio.h>

int main() {
    float nota;
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);
    
    if(nota>=9){
        printf("A\n");
        return 0;  
    }
    if(nota>=8){
        printf("B\n");
        return 0;
    }
    if(nota>=7){
        printf("C\n");
        return 0;
    }
    if(nota>=6){
        printf("D\n");
        return 0;
    }
    if(nota>=0){
        printf("F\n");
        return 0;
    }
    return 0;
}
