#include <stdio.h>
#include <string.h>

int main(void){

    char senha[100];

    for(int i=1;i<=3;i++){
        printf("Digite a senha: ");
        scanf("%99s", senha);

        if(strcmp(senha, "azimo")==0){
            printf("Seja bem-vindo!\n");
            break;
        }
        else{
            if(i!=3){
                printf("Senha errada. Tentativas restantes: %d\n", 3-i);
            }
            else{
                printf("Tente novamente mais tarde\n");
            }
        
        }

    }
    

    return 0;
}
