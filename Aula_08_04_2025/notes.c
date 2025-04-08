#include <stdio.h>

int operacao(int x, int y){
	printf("operacao() foi adicionada na pilha\n");
	return multi(y) - multi(x);
}

int multi(int x){
	printf("multi() foi adicionada na pilha\n");
	return x*x;
}


int main(){
	
	int a=10, b=20;
	
	printf("Resultado: b*b - a*a: %d", operacao(a,b));
		
		
	return 0;	
}

/*
visualizaçõo em pilha do código


				  multi(b)   multi(a)
	   operacao   operacao   operacao   operacao
main-> main    -> main	  -> main    -> main    -> main
*/



/*
stack - pilha - (LIFO Last In First Out)

*/
