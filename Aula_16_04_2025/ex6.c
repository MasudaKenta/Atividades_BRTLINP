#include <stdio.h>
#include "igualdade.h"

int get(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    return n;
}

int main(){

    int a,b,c;
    a = get();
    b = get();
    c = get();
    printf("Maior: %d\n", maior(maior(a,b),c));

    /* 
    //usando vetores
    int num[3];
    for(int i=0; i<3; i++){
        num[i] = get();
    }
    printf("Maior: %d\n", maior(maior(num[0],num[1]),num[2]));
    */
    return 0;
}