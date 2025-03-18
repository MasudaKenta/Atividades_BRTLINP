#include <stdio.h>
int main(){
	int cont=1;
	float n, sum, av;
	
	while(cont<=3){
		printf("Digite a nota %d: ", cont);
		scanf("%f", &n);
		sum = sum + n;
		cont = cont + 1; 
	}
	
	av = sum/(cont-1);
	
	printf("A media das notas eh: %.2f", av);
		
	return 0;
}
