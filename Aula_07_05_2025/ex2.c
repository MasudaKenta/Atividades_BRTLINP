#include <stdio.h>
int main(void){
    int vetor[5] = {9, 7, 3, 6, 8};
    int aux;

    for(int i=0; i<5; i++){
        for(int j=i;j<4;j++){
            if (vetor[j] > vetor[j+1]) {
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }

    printf("vetor = { ");
    for(int i=0;i<5;i++){
        printf("%d ", vetor[i]);
    }
    printf("}\n");

    return 0;
}
