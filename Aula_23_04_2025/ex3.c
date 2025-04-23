#include <stdio.h>
int main(void){

    double notas[4], total=0;
    for(int i=0;i<4;i++){
        printf("Digite a nota %d: ", i+1);
        scanf("%lf", &notas[i]);
        total += notas[i];
    }

    printf("Media das notas: %.2lf\n", total/4.0);

    return 0;
}
