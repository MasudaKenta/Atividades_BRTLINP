#include <stdio.h>
#include <string.h>

void bs(char * str){
    char aux;
    for(int i=0;i<strlen(str);i++){
        for(int j=i;j<strlen(str)-1;j++){
            if(str[j] > str[j+1]){
                aux = str[j];
                str[j] = str[j+1];
                str[j+1] = aux;
            } 
        }    
    }
}

int main(void){
    char str1[101], str2[101];
    printf("Digite a primeira palavra: ");
    scanf("%100s", str1);
    printf("Digite a segunda palavra: ");
    scanf("%100s", str2);

    bs(str1);
    bs(str2);

    if(strcmp(str1,str2)==0)
        printf("sao anagramas!\n");
    else
        printf("nao sao anagramas!\n");

    return 0;
}
