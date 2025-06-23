#include <stdio.h>
#include <string.h>

void reverse(char *str){
    char *i = str;
    str+=strlen(str)-1;
    
    printf("Palavra invertida: ");
    while(i<=str){
        printf("%c", *str);
        str--;
    }
    printf("\n");
}

int main(void){

    char str[101];
    printf("Digite uma palavra: ");
    scanf("%100s", str);

    reverse(str);

    return 0;
}
