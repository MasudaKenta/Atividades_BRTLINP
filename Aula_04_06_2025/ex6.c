#include <stdio.h>

struct filme {
	char nome[101];
	char diretor[101];
	char roteirista[101];
};

int main(void){

	struct filme f;

	FILE *file = NULL;

	printf("Digite o nome do filme: ");
	fgets(f.nome, sizeof(f.nome), stdin);
	printf("Digite o diretor do filme: ");
	fgets(f.diretor, sizeof(f.diretor), stdin);
	printf("Digite o roteirista do filme: ");
	fgets(f.roteirista, sizeof(f.roteirista), stdin);

	file = fopen("filme.txt", "wb");

	fwrite(&f, sizeof(struct filme), 1, file );

	fclose(file);

	return 0;
}

