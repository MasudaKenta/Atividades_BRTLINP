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

int retangulo(FILE *file){
    int x, y, w, h;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    printf("Digite o valor de width: ");
    scanf("%d", &w);
    printf("Digite o valor de height: ");
    scanf("%d", &h);

    int retorno = fprintf(file, "<rect x=\"%d\" y=\"%d\" width=\"%d\" height=\"%d\" fill=\"red\" />", x, y, w, h);

    if(retorno < 0)
        return 0;

    return 1;
}


int main(void){

    FILE *file = fopen("retangulo.svg", "w");

    if(file == NULL){
        printf("O arquivo nao foi aberto!\n");
    }
    else{
        int res = abertura(file);
        if(res){
            res = retangulo(file);
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
