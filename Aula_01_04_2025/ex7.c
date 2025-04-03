#include <stdio.h>
int main(){
	
	int n1,n2,n3,n4;
	
	printf("digite a primeira nota: ");
	scanf("%d", &n1);
	
	printf("digite a segunda nota: ");
	scanf("%d", &n2);
	
	printf("digite a terceira nota: ");
	scanf("%d", &n3);
	
	printf("digite a quarta nota: ");
	scanf("%d", &n4);
	
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
