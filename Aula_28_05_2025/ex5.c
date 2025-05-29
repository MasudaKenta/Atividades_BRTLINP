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

int linha(FILE *file){
    int x1,y1,x2,y2,stroke_w;
    char stroke[101];

    printf("Digite o valor de x1: ");
    scanf("%d", &x1);
    printf("Digite o valor de y1: ");
    scanf("%d", &y1);
    printf("Digite o valor de x2: ");
    scanf("%d", &x2);
    printf("Digite o valor de y2: ");
    scanf("%d", &y2);
    printf("Digite a cor da linha: ");
    scanf("%s", stroke);
    printf("Digite a espessura da linha: ");
    scanf("%d", &stroke_w);
   
    int retorno = fprintf(file, "<line x1=\"%d\" y1=\"%d\" x2=\"%d\" y2=\"%d\" style=\"stroke:%s;stroke-width:%d\" />", x1,y1,x2,y2,stroke,stroke_w);

    if(retorno < 0)
        return 0;

    return 1;
}


int main(void){

    FILE *file = fopen("linha.svg", "w");

    if(file == NULL){
        printf("O arquivo nao foi aberto!\n");
    }
    else{
        int res = abertura(file);
        if(res){
            res = linha(file);
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
