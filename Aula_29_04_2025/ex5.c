#include <stdio.h>
#include <string.h>

int main(void){

    char senha[100];
    printf("Digite uma senha: ");
    scanf("%99s", senha);
    if(strlen(senha)>=8)
        printf("Senha conforme\n");
    else
        printf("Erro na senha\n");

    return 0;
}
