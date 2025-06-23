#include <stdio.h>

int abertura(FILE *file){
    int retorno = fprintf(file, "<svg version=\"1.1\" ");

    if (retorno < 0) 
      return 0;

    retorno = fprintf(file, "width=\"300\" height=\"200\" ");

    if (retorno < 0) 
      return 0;

    retorno = fprintf(file, "xmlns=\"http://www.w3.org/2000/svg\">");

    if (retorno < 0) 
      return 0;

    return 1;
}

int fechamento(FILE *file){
    int retorno = fprintf(file, "</svg>");

    if (retorno < 0) 
        return 0;

    return 1;
}

int circulo(FILE *file){
    int cx,cy,r;
    printf("Digite o valor de cx: ");
    scanf("%d", &cx);
    printf("Digite o valor de cy: ");
    scanf("%d", &cy);
    printf("Digite o valor de r: ");
    scanf("%d", &r);
   
    int retorno = fprintf(file, "<circle cx=\"%d\" cy=\"%d\" r=\"%d\"/>", cx, cy, r);

    if(retorno < 0)
        return 0;

    return 1;
}


int main(void){

    FILE *file = fopen("circulo.svg", "w");

    if(file == NULL){
        printf("O arquivo nao foi aberto!\n");
    }
    else{
        int res = abertura(file);
        if(res){
            res = circulo(file);
            if(res){
                res = fechamento(file);
            }
            else{
                printf("Erro ao fechar o arquivo!\n");
            }
        }
        else{
            printf("Erro ao gravar no arquivo!\n");
        }
    }
    return 0;
}
