#include <stdio.h>

double diametro(double raio){
    return 2*raio;
}

double circunferencia(double raio){
    return 2*3.14*raio;
}

double area(double raio){
    return 3.14*raio*raio;
}

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
