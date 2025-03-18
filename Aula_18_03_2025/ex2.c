#include <stdio.h>
int main(){
	
	float n, sum=0, av;
	int cont=0;
	
	while(n!=-5){
		printf("Digite a nota %d: ", cont+1);
		scanf("%f", &n);
		sum+=n;
		cont+=1;
	}

	av = sum/(cont-1);
	
	printf("Resultado da media: %.2f", av);
	return 0;
}
