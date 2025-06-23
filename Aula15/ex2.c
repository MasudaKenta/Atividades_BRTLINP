#include <stdio.h>
#include <string.h>

int main(void){

    char nome[101], cor[101];
    int x, y, w, h;
    
    scanf("%100s", nome);
    scanf("%d %d %d %d", &x, &y, &w, &h);
    scanf("%100s", cor);

    strcat(nome, ".svg");

    FILE *pFile = NULL;

    pFile = fopen(nome, "w");

    if(pFile == NULL){
        printf("O Arquivo nao foi aberto!\n");
    }
    else{
        fprintf(pFile, "<svg version=\"1.1\"\nwidth=\"300\" height=\"200\"\nxmlns=\"http://www.w3.org/2000/svg\">\n<rect x=\"%d\" y=\"%d\" width=\"%d\" height=\"%d\" fill=\"%s\" />\n</svg>", x,y,w,h,cor);
    }

    fclose(pFile);

    return 0;
}
