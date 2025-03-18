#include <stdio.h>

int main(){
	
	float raio, d, c, a;
	
	printf("Digite o raio do circulo: ");
	scanf("%f", &raio);
	
	d = raio*2;
	c = 2*3.14*raio;
	a = 3.14 * (raio*raio);
	
	printf("Diametro do circulo: %.2f\n", d);
	printf("Circunferencia do circulo: %.2f\n", c);
	printf("Area do circulo: %.2f\n", a);
	
	return 0;
}
