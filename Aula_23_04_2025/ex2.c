#include <stdio.h>

#define PI 3.14159

int main(void){

    double  r, area;
    printf("Digite o raio:");
    scanf("%lf", &r);
    area = PI * r * r;
    printf("Area = %f\n", area);

    return 0;
}
