#include <stdio.h>

int testa_par(int n){
	if(n%2==0)
		return 1;
	else
		return 0;
}


int main(){

	int n, teste;
	
	for(int i=0;i<2;i++){
		printf("Digite um numero: ");
		scanf("%d", &n);
		
		teste = testa_par(n);
		printf("%d e par? %d\n", n,teste);
	}
	
	return 0;
}
