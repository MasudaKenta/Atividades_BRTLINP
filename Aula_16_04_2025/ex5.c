#include <stdio.h>
#include "igualdade.h"

int main(){

    int a,b;
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite um numero: ");
    scanf("%d", &b);

    if(!igual(a,b)){
        printf("Iguais: %s\n", (igual(a,b))?"sim":"nao");
        printf("Maior: %d\n", maior(a,b));
        printf("Menor: %d\n", menor(a,b));
    }
    else{
        printf("Iguais: %s\n", (igual(a,b))?"sim":"nao");
    }


    return 0;
}