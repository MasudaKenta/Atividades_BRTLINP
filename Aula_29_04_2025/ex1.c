#include <stdio.h>
#include <string.h>
int main(void){
    /*
    char nome[10] = "Guilherme";
    printf("Nome: %s\n", nome);
    for(int i=0;i<9;i++){
        printf("* %c ",nome[i]);
    }
    printf("*\n");
    */

    char nome[50];
    printf("Digite seu nome: ");
    scanf("%49s", nome);
    //int tam = strlen(nome);
    for(int i=0;nome[i]!='\0';i++){
        printf("* %c ",nome[i]);
    }
    printf("*\n");

    return 0;
}
