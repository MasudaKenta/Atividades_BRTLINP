#include <stdio.h>
int main(){
	
	int n1,n2,n3,n4;
	
	do{
		printf("Digite a primeira nota [0-10]: ");
		scanf("%d", &n1);
		
		if(n1<0 || n1>10)
			continue;
		else
			break;
	}while(1);
	
	do{
		printf("Digite a segunda nota [0-10]: ");
		scanf("%d", &n2);
		
		if(n2<0 || n2>10)
			continue;
		else
			break;
	}while(1);
	
	
	do{
		printf("Digite a terceira nota [0-10]: ");
		scanf("%d", &n3);
		
		if(n3<0 || n3>10)
			continue;
		else
			break;
	}while(1);
	
	
	do{
		printf("Digite a quarta nota [0-10]: ");
		scanf("%d", &n4);
		
		if(n4<0 || n4>10)
			continue;
		else
			break;
	}while(1);
	
	
	for(int i=1;i<=n1;i++){
		printf("* ");
	}
	printf("\n");
	
	for(int i=1;i<=n2;i++){
		printf("* ");
	}
	printf("\n");
	
	for(int i=1;i<=n3;i++){
		printf("* ");
	}
	printf("\n");
	
	for(int i=1;i<=n4;i++){
		printf("* ");
	}
	printf("\n");
	
	return 0;
}
