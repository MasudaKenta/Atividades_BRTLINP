#include <stdio.h>
#include <string.h>

char * /*void */ palindromo(char *str){
    for(char *i = str, *f = str + strlen(str) - 1; i < f; i++, f--)
        if(*i != *f){
            //printf("Nao e palindromo\n");
            //return;
            return "Nao eh palindromo\n";
        }
    //printf("Eh palindromo\n");
    return "Eh palindromo\n";
}

int main(void){

    char str[101];
    printf("Digite uma palavra: ");
    scanf("%100s", str);

    printf("%s", palindromo(str));
    //palindromo(str);

    return 0;
}
