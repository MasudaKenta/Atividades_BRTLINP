#include <stdio.h>
#include <string.h>

int main(void){

    char str[6], letra;
    
    printf("Digite uma palavra: [ate 5 letras] ");
    scanf("%5s", str);

    for(int i=1;i<=3;i++){
        printf("Insira uma letra: ");
        scanf(" %c", &letra);

        if(strchr(str, letra)!=NULL){
            printf("Letra encontrada\n");
            break;
        }
        else{
            if(i!=3){
                printf("Letra nao encontrada. Tentativas restantes: %d\n", 3-i);
            }
            else{
                printf("Tentativas esgotadas\n");
            }
        }
    }

    return 0;
}
