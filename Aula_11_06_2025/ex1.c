#include <stdio.h>
#include <string.h>

void inicio(){
	printf( "Content-type: text/html\n\n" );
  	printf("<html>\n");
  	printf("	<head>\n");
  	printf("		<meta charset=\"UTF-8\">\n");
}

void meio(){
	printf("	</head>\n");
 	printf(	"	<body>\n");
}

void fim(){
	printf("	</body>\n");
  	printf("</html>\n");

}

void aba(char *text){

	printf("		<title>%s</title>\n", text);

}

void titulo(char *title){
	
	printf("		<h1>%s</h1>\n", title);

}


int main(void){

	inicio();
	aba("Segunda pagina");
	meio();
	titulo("Usando argumento");
	fim();

	return 0;
}
