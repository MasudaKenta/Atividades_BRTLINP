#include <stdio.h>

int main(void){

    char str[100], senha[]="azimo";
    int aux=1, vidas=3;

    while(vidas>=1){
        printf("Digite a senha: ");
        scanf("%99s", str);

        for(int i=0;str[i]!='\0';i++){
            if(str[i] != senha[i]){
                aux=0;
                break;
            }
        }

        if(aux){
            printf("Seja bem-vindo!\n");
            break;
        }
        else{
            vidas--;
            if(vidas>0)
                printf("Senha errada. Tentativas restantes: %d\n", vidas);
            else
                printf("Tente novamente mais tarde\n");
            aux=1;
        }

    }

    return 0;
}
