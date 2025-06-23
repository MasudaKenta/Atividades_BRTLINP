#include <stdio.h>
#include <string.h>

void abertura(FILE *file){
    int retorno = fprintf(file, "<svg version=\"1.1\" ");

    retorno = fprintf(file, "width=\"1000\" height=\"1000\" ");

    retorno = fprintf(file, "xmlns=\"http://www.w3.org/2000/svg\">");

}

void fechamento(FILE *file){
    int retorno = fprintf(file, "</svg>");
}

void retangulo(FILE *file){
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

}

void circulo(FILE *file){
    int cx,cy,r;
    printf("Digite o valor de cx: ");
    scanf("%d", &cx);
    printf("Digite o valor de cy: ");
    scanf("%d", &cy);
    printf("Digite o valor de r: ");
    scanf("%d", &r);
   
    int retorno = fprintf(file, "<circle cx=\"%d\" cy=\"%d\" r=\"%d\"/>", cx, cy, r);

}

void linha(FILE *file){
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

}

void texto(FILE *file){
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

}


int main(void){

    char namefile[101];
    char opc='1';


    printf("Digite o nome do arquivo: ");   
    scanf("%100s", namefile);

    strcat(namefile, ".svg");

    FILE *file = fopen(namefile, "w");
    abertura(file);


    while(opc != 'F' || opc != 'f'){
        printf("1 - retangulo\n");
        printf("2 - circulo\n");
        printf("3 - linha\n");
        printf("4 - texto\n");
        printf("F - finalizar\n");

        scanf(" %c", &opc);

        if(opc == 'F' || opc == 'f')
            break;

        switch(opc){
            case '1':
                retangulo(file);
                break;
            case '2':
                circulo(file);
                break;
            case '3':
                linha(file);
                break;
            case '4':
                texto(file);
                break;
            default:
                printf("Opcao invalida\n");
                break;
        }

    }

    fechamento(file);


    return 0;
}
