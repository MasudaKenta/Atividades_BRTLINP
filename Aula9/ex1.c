#include <stdio.h>

void multi3(int *y);

int main(void) {
  int x = 5;
  printf("X antes: %d\n", x);

  //int resultado = multi3(x); //vai ter que ser alterado
  multi3(&x);
  int resultado = x; 
  printf("Resultado: %d\n", resultado);

  printf("X depois: %d\n", x);
  return 0;
}

void multi3(int *y) {
  *y =  3 * *y;
}

