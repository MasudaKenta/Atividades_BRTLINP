#include <stdio.h>
#include <stdlib.h>

int main(void){
    char *recebido = getenv("QUERY_STRING");

    printf( "Content-type: text/html\n\n" );
  
    printf("Recebido: %s\n", recebido);

    return 0;
}
