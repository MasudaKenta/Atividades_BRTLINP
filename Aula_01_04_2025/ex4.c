#include <stdio.h>

int main(){
	
	for(int a=0; a<=1; a++){
		for(int b=0; b<=1; b++){
			printf("A: %d  B: %d   %d && %d = %d\n", a, b, a, b, a&&b);
		}
	}
	
	return 0;
}
