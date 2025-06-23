#include <stdio.h>
#include "util.h"

int main(){
    double r, d, c, a;
    printf("digite o valor do raio: ");
    scanf("%lf", &r);

    d = diametro(r);
    printf("valor do diametro: %lf\n", d);

    c = circunferencia(r);
    printf("valor da circunferencia: %lf\n", c);

    a = area(r); 
    printf("valor da area: %lf\n", a);

    return 0;

}