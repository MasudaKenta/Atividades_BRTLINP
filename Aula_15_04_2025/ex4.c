#include <stdio.h>

void compara(int a, int b){

    if(a>=b)
        printf("O maior: %d\n", a);
    else
        printf("O menor: %d\n", b);

    if(a<=b)
        printf("O maior: %d\n", a);
    else
        printf("O menor: %d\n", b);

    printf("Iguais? %s\n", (a==b)?"Sim":"Nao");
}

int main(){

    compara(100,99);
    return 0;
}
