#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){

    char str[6], letra;
    
    printf("Digite uma palavra: [ate 5 letras] ");
    scanf("%5s", str);

    system("clear");

    for(int i=1;i<=3;i++){
        printf("Insira uma letra: ");
        scanf(" %c", &letra);

        if(strchr(str, letra)!=NULL){
            printf("\"%c\" foi encontrada na palavra\n", letra);
            break;
        }
        else{
            if(i!=3){
                printf("\"%c\" nao foi encontrada na palavra. Tentativas restantes: %d\n", letra, 3-i);
            }
            else{
                printf("Tentativas esgotadas\n");
            }
        }
    }

    return 0;
}
