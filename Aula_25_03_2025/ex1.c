#include <stdio.h>
int main(){

    int n, soma=0, i;

    printf("Digite o numero limite: ");
    scanf("%d", &n);

    for(i=1 ;i<=n;i++){
    	
        if(i%2 != 0)
        	soma+=i;    
    }

    printf("A soma dos numeros impares e: %d", soma);

    return 0;
}
