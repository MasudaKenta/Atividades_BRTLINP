#include <stdio.h>
int main(void){

	FILE *file = NULL;
	char linha[101];
	file = fopen("remedios.txt", "r");

	while(fgets(linha, sizeof(linha), file)){}

	printf("%s", linha);

	return 0;
}

//OBS: Não é o método mais eficiente, pois vai ler todas as linhas
