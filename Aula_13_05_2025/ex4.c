#include <stdio.h>
int main(void){

    int n, aux=1;
    printf("Digite um numero: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        for(int j=1; j<=aux; j++){
            printf("* ");
        }
        printf("\n");
        aux++;
    }

    return 0;
}
