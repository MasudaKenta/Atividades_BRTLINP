#include <stdio.h>
#include <string.h>

int main(void){

    char completo[100], sobrenome[50];

    printf("Digite o seu nome: ");
    scanf("%99s", completo);
    printf("Digite o seu sobrenome: ");
    scanf("%49s", sobrenome);

    strcat(completo, " ");
    strcat(completo, sobrenome);
    printf("Nome completo: %s\n", completo);

    return 0;
}
