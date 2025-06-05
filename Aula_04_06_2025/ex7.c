#include <stdio.h>

struct filme {
	char nome[101];
	char diretor[101];
	char roteirista[101];
};

int main(void){

	struct filme res;

	FILE *file = NULL;

	file = fopen("filme.txt", "rb");

	fread(&res, sizeof(struct filme), 1, file);


	fclose(file);

	printf("Nome do filme: %s", res.nome);
	printf("Diretor do filme: %s", res.diretor);
	printf("Roteirista do filme: %s", res.roteirista);


	return 0;
}
