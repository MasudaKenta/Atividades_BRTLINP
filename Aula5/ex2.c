#include <stdio.h>

int main() {
	int n1,n2,maior;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	printf("O maior numero eh: %d", (n1>n2) ? n1 : n2);
	
    return 0;
}

