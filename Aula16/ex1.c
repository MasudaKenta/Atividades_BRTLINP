#include <stdio.h>
int main(void){

	FILE *file = NULL;
	char destino[80];

	file = fopen("texto.txt", "r");

	while(fgets(destino, sizeof(destino), file)){
		
		printf("%s", destino);

	}

	printf("\n");

	fclose(file);

	return 0;
}

/* outro modo

	while(feof(file)==0){
		char destino[80];
		fgets(destino, sizeof(destino), file);
		printf("%s", destino);
	}

*/
