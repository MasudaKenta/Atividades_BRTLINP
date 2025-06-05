#include <stdio.h>
int main(void){

	FILE *file = NULL;
	char data[11], hora[6];
	
	file = fopen("remedios.txt", "a");

	printf("[ex de entrada: \"Data: 03/06/2025 Hora: 14:00\"]\nDigite a data e o horario: ");
	scanf("Data: %s Hora: %s", data, hora);

	if(fprintf(file, "%s %s\n", data, hora)>=0)
		printf("dados salvos com sucesso!\n");


	fclose(file);

	return 0;
}

