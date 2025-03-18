#include <stdio.h>
int main(){
	int cont=1, sum=0, n, av;
	
	while(cont<=3){
		printf("Digite a nota %d: ", cont);
		scanf("%d", &n);
		sum = sum + n;
		cont = cont + 1; 
	}
	
	av = sum/(cont-1);
	
	printf("A media das notas eh: %d", av);
		
	return 0;
}
