#include <stdio.h>

double media(double v[], int tam){
    double total=0;
    for(int i=0;i<tam;i++)
        total += v[i];
    return total/tam;
}

void dobro(double v[], int tam){
    for(int i=0;i<tam;i++)
        v[i] *= 2;

    printf("Nova media: %.2lf\n", media(v, tam));
}

void maior(double v[]){
    if(v[1]>v[0]){
        double aux = v[0];
        v[0] = v[1];
        v[1] = aux;
    }
}

int main(void){

    double numeros[2];
    for(int i=0;i<2;i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%lf", &numeros[i]);
    }

    puts("Numeros antes");
    for(int i=0;i<2;i++)
        printf("%.1lf\n", numeros[i]);


    printf("Media: %.1lf\n", media(numeros, 2));
    dobro(numeros, 2);

    puts("Numeros depois");
    for(int i=0;i<2;i++)
        printf("%.1lf\n",numeros[i]);

    puts("Antes de chamar maior()");
    for(int i=0;i<2;i++)
        printf("%.1lf ",numeros[i]);

    printf("\n");

    maior(numeros);

    puts("Depois de chamar maior()");
    for(int i=0;i<2;i++)
        printf("%.1lf ",numeros[i]);

    printf("\n");


    return 0;
}
