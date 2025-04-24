#include <stdio.h>
int soma(int v[], int tam){
    int total=0;
    for(int i=0;i<tam;i++)
        total += v[i];
    return total;
}

int main(){    

    int vetor[3];
    for(int i=0;i<3;i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &vetor[i]);
    } 
    int res = soma(vetor, 3);
    printf("Soma: %d\n", res);
    
    return 0;
}
