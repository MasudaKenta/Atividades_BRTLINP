#include <stdio.h>
int main(void){

    int n, soma=0;
    printf("Digite um numero:");
    scanf("%d", &n);

    for(int i=1;i<n;i++){
        if(i%3==0 || i%5==0){
            printf("%d ", i);
            soma+=i;
        }
    }

    printf("= %d\n", soma);

    return 0;
}
