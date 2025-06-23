#include <stdio.h>

void subtrai3(int *n);

int main(void) {
  int numero;
  printf("digite um numero: ");
  scanf("%d", &numero);
  
  printf("recebido: %d\n", numero);
  
  subtrai3(&numero);
  
  int resultado = numero;
  
  printf("resultado: %d\n", resultado);
  
  printf("atual: %d\n", numero);
  
  return 0;
}

void subtrai3(int *n){
	*n = *n-3;
}



