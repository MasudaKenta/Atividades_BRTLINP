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
	
	av = sum/(cont-1);	//devemos decrementar 1 de cont, pois ele está em 4
	
	printf("A media das notas eh: %.2f", av);
		
	return 0;
}

/* OUTRA VERSÃO
#include <stdio.h>
int main(){
	int cont=1, qtd;
	float n, sum, av;
	
	printf("Quantas nota serao lidas? ");
	scanf("%d", &qtd);
	
	while(cont<=qtd){
		printf("Digite a nota %d: ", cont);
		scanf("%f", &n);
		sum += n;
		cont += 1; 
	}
	
	av = sum/qtd;	
	
	printf("A media das notas eh: %.2f", av);
		
	return 0;
}
*/
