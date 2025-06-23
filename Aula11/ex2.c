#include <stdio.h>

#define PI 3.14159

int main(void){

    double  r, area;
    printf("Digite o raio:");
    scanf("%lf", &r);
    printf("Area = %f\n", PI*r*r);

    return 0;
}
