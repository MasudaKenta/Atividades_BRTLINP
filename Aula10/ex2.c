#include <stdio.h>

int rNum(){
	int n;
	scanf("%d", &n);
	return n;
}

int sum(int a, int b){
	return a+b;
}

void message(int sum){
	printf("os numeros foram somados!\n");
}

int main(){

	int n = rNum();
	printf("numero retornado: %d\n----------------------------------------\n", n);
	
	
	int n1,n2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	int res = sum(n1,n2);
	
	printf("resultado da soma: %d\n----------------------------------------\n", res);	
		
	message(res);
	return 0;
}
