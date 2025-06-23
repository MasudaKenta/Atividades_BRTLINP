#include <stdio.h>
#include <string.h>

int main(void){
    char str[11];
    printf("Digite a palavra: ");
    scanf("%10s", str);
    for(int i=0,j= strlen(str)-1; i<j; i++, j--){
        if(str[i] != str[j]){
            printf("Resultado: NAO e!\n");
            return 0;
        }
    }
    printf("Resultado: e um palindromo!\n");
    return 0;
}
