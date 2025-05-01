#include <stdio.h>
#include <string.h>

int main(void){

    char nome[100], sobrenome[50];

    printf("Digite o seu nome: ");
    scanf("%99s", nome);
    printf("Digite o seu sobrenome: ");
    scanf("%49s", sobrenome);

    strcat(nome, " ");
    strcat(nome, sobrenome);
    printf("Nome completo: %s\n", nome);

    return 0;
}
