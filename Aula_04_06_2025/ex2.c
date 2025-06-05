#include <stdio.h>
#include <string.h>

int main(void){

	FILE *file = NULL;
	char title[101], name[101], opc;
	printf("Digite o titulo do livro: ");
	scanf("%100s", title);
	file = fopen(strcat(title, ".txt"), "a");

	printf("Deseja adicionar o nome de um personagem: [Digite o nome do personagem/N]: ");

	getchar();

	while(fgets(name, sizeof(name), stdin)){
		
		if(strcmp(name, "N\n") == 0)
			break;
		fputs(name, file);

		printf("Deseja adicionar o nome de um personagem: [Digite o nome do personagem/N]: ");
	}

	fclose(file);


	return 0;
}
