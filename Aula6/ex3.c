#include <stdio.h>
int main(){
	
	int l1=0,l2=0,l3=0, cont=0;
	
	while(l1!=-1){
		int h=0, c1=1000000, c2, sum=0;
		
		
		printf("Teste %d ---------------\n", cont+1);
			
		printf("Leitura dos lados: \n");
		
		//achar a hipotenusa e os catetos;
		printf("Digite o primeiro lado [Digite -1 para sair]: ");
		scanf("%d", &l1);
		if(l1!=-1){
			printf("Digite o segundo lado: ");
			scanf("%d", &l2);
			printf("Digite o terceiro lado: ");
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
				printf("Os lados formam um triangulo retangulo.\n");
			else
				printf("Os lados nao formam um triangulo retangulo.\n");
			
			h=0, c1=1000000, cont+=1;
		}
	}
	
	return 0;
}

/* Método mais eficiente, sem tantos if/else

#include <stdio.h>
int main(){
	
	int h=0,c1=0,c2=0, cont=1;
	
	while(h!=-1){
		printf("Teste %d ------------\n" , cont);
		printf("Digite os lados [digite -1 para sair]: \n");
		printf("Primeiro lado: ");
		scanf("%d", &h);
		
		if(h!=-1){
			printf("Segundo lado: ");
			scanf("%d", &c1);
			printf("Terceiro lado: ");
			scanf("%d", &c2);
			
			//Achar a hipotenusa e armazenar em h
			int aux;
			if(c1 > h){
				aux = h;
				h = c1;
				c1 = aux;
			}
			if(c2 > h){
				aux = h;
				h = c2;
				c2 = aux;
			}
				
			if((h*h) == (c1*c1)+(c2*c2))
				printf("Os lados formam um triangulo retangulo.\n");
			else
				printf("Os lados nao formam um triangulo retangulo.\n");
		}
		cont++;
	}
	return 0;
}
*/
