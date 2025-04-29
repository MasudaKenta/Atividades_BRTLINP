#include <stdio.h>

int main(void){

    char str[100];

    for(int i=1;i<=3;i++){
        printf("Digite a senha: ");
        scanf("%99s", str);
        
        if(str[0]=='a' && str[1]=='z' && str[2]=='i' && str[3]=='m' && str[4]=='o' && str[5]=='\0'){
            printf("Seja bem-vindo!\n");
            break;
        }
        else {
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
