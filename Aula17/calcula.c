#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

	printf( "Content-type: text/html\n\n" );

	char *res = getenv("QUERY_STRING");

	char *filtro = strchr(res, '=');

	filtro++;

	int ano = 2025 - atoi(filtro);

	printf("Passaram %d anos de %s para 2025\n", ano, filtro);

	return 0;
}
