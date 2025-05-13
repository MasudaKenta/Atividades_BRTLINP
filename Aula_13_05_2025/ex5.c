#include <stdio.h>

void t_A(int n, int aux){
    for(int i=0; i<n; i++){
        for(int j=1; j<=aux; j++){
            printf("* ");
        }
        printf("\n");
        aux++;
    }
}

void t_D(int n, int a, int b){

    for(int i=0; i<n; i++){
        for(int j=0; j<a; j++){
            printf("  ");
        }
        for(int j=0; j<b; j++){
            printf("* ");
        }
        printf("\n");
        a--;
        b++;
    }

}
int main(void){

    int n;
    char opc='A';
    printf("Digite um numero: ");
    scanf("%d", &n);

    t_A(n,1);

    while(opc != 'F'){
        scanf(" %c", &opc);
        if(opc == 'A')
            t_A(n,1);
        else{
            if(opc == 'D')
                t_D(n, n-1, 1);
            else
                break;
        }
    }
    return 0;
}
