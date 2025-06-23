#include <stdio.h>

int subtrai3(int n);

int main(void) {
  int numero;
  printf("digite um numero: ");
  scanf("%d", &numero);
  
  printf("recebido: %d\n", numero);
  
  int resultado = subtrai3(numero);
  
  printf("resultado: %d\n", resultado);
  
  printf("atual: %d\n", numero);
  
  return 0;
}

int subtrai3(int n){
	return n-3;
}



