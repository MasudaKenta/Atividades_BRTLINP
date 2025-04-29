#include <stdio.h>
int main(void){

    int n, soma=0;
    printf("Digite um numero:");
    scanf("%d", &n);

    for(int i=1;i<n;i++){
        if(i%3==0 || i%5==0)
            soma+=i;
    }

    printf("Soma dos multiplos de 3 e 5 que estao abaixo de %d: %d\n", n, soma);

    return 0;
}
