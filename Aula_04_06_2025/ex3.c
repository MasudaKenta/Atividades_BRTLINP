#include <stdio.h>
#include <string.h>

int main(void){

	FILE *file = NULL;

	char title[101], name[101], opc;

	printf("Digite o titulo do livro: ");
	scanf("%100s", title);

	file = fopen(strcat(title, ".txt"), "r");

	if(file == NULL){
		printf("Arquivo nao encontrado\n");
		return 0;
	}
		

	printf("==========================\nOpcoes:\nP - imprimir nome\nF - encerrar programa\n==========================\n");
	while(fgets(name, sizeof(name), file)){
		//printf("=================\nP - imprimir nome\nF - encerrar programa\n=================\nEscolha uma opcao: ");
		scanf(" %c", &opc);

		if(opc=='F')
			break;

		printf("%s", name);
	}

	fclose(file);

	return 0;
}
