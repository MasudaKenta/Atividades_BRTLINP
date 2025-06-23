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

int texto(FILE *file){
    char classe[101], estilo[101], tamanho[101], fonte[101], texto[101];
    int x,y;

    printf("Digite o nome da classe: ");
    scanf("%100s", classe);

    printf("Digite o estilo da fonte: ");
    scanf("%100s", estilo);

    printf("Digite o tamanho da fonte: ");
    scanf("%100s", tamanho);

    printf("Digite o nome da fonte: ");
    scanf("%100s", fonte);

    printf("Digite a coordenada x: ");
    scanf("%d", &x);

    printf("Digite a coordenada y: ");
    scanf("%d", &y);

    printf("Digite o texto: ");
    scanf("%100s", texto);

    int retorno = fprintf(file, "<style> .%s { font: %s %s %s; } </style>\n<text x=\"%d\" y = \"%d\" class=\"%s\"> %s </text>", classe, estilo, tamanho, fonte, x, y, classe, texto);

    if(retorno < 0)
        return 0;

    return 1;
}


int main(void){

    FILE *file = fopen("texto.svg", "w");

    if(file == NULL){
        printf("O arquivo nao foi aberto!\n");
    }
    else{
        int res = abertura(file);
        if(res){
            res = texto(file);
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
