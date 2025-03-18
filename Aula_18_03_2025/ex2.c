#include <stdio.h>
int main(){
	
	float n, sum=0, av;
	int cont=0;
	
	while(n!=-5){
		printf("Digite a nota %d: ", cont+1);
		scanf("%f", &n);
		if(n!=-5)
			sum+=n;
		cont+=1;
	}
	
	cont-=1;
	av = sum/cont;
	
	if(cont==0){
		printf("Resultado da media: %.2f", 0);
	}
	else{
		printf("Resultado da media: %.2f", av);
	}
	
	
	return 0;
}
