#include <stdio.h>
int main(void){

    char nome[9] = "Guilherme";
    printf("Nome: %s\n", nome);
    for(int i=0;i<9;i++){
        if(i==0)
            printf("* ");
        printf("%c * ",nome[i]);
    }
    printf("\n");

    return 0;
}
