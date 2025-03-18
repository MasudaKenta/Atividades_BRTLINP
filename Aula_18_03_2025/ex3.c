#include <stdio.h>
int main(){
	
	int l1=0,l2=0,l3=0, cont=0;
	
	while(l1!=-1){
		int h=0, c1=1000000, c2, sum=0;
		
		
		printf("Teste %d ---------------\n", cont+1);
			
		printf("Leitura dos lados: \n");
		
		//achar a hipotenusa e os catetos;
		scanf("%d", &l1);
		if(l1!=-1){
			scanf("%d", &l2);
			scanf("%d", &l3);
			sum = l1+l2+l3;

      //encontrar a hipotenusa
			if(l1 > h)
				h = l1;
			if(l2 > h)
				h = l2;
			if(l3 > h)
				h = l3;

      //encontrar o cateto menor
			if(l1 < c1)
				c1 = l1;
			if(l2 < c1)
				c1 = l2;	
			if(l3 < c1)
				c1 = l3;

      //encontrar o cateto maior
			c2 = sum - h - c1;
			
			if((h*h) == (c1*c1)+(c2*c2))
				printf("O triangulo eh retangulo\n");
			else
				printf("O triangulo nao eh retangulo\n");
			
			h=0, c1=1000000, cont+=1;
		}
	}
	
	return 0;
}
