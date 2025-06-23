#include <stdio.h>

int main(){

    int x[5];
    for(int i=0;i<5;i++){
        scanf("%d", &x[i]);
    }

    for(int i=0;i<5;i++){
        printf("x[%d] = %d;\n", i, x[i]);
    }

    return 0;
}

