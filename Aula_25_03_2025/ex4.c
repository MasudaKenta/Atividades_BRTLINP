#include <stdio.h>

int main(){
	
	char opc;
	int qtdB=0, qtdH=0, qtdS=0, qtdC=0, total;
	float vTotal;
	
	while(opc!='e' || opc!='E'){
		if(opc != '\n')
			printf("--------------------\n[B, H, S, C] - informe a letra do produto vendido\nT - para acessar a tabela de precos\nE - para finalizar venda\n--------------------\n");
		opc = getchar();
		
		switch(opc){
			case 'B':
				qtdB++;
				puts("Batata inserida na venda.");
				break;
			case 'H':
				qtdH++;
				puts("Hamburguer inserido na venda.");
				break;
			case 'S':
				qtdS++;
				puts("Suco inserido na venda.");
				break;
			case 'C':
				qtdC++;
				puts("Combo inserido na venda.");
				break;
			case 'T':
				puts("--------------------\nBatata     - R$10.00\nHamburguer - R$15.00\nSuco       - R$9.00\nCombo      - R$30.00\n--------------------");
				break;      
			case 'E':
				break;
		}
		
		if(opc == 'E')
			break;
	}
	
	vTotal = qtdB*10.0 + qtdH*15.0 + qtdS*9.0 + qtdC*30.0;
	printf("---------------------\nBatata:      %d %s\nHamburguer:  %d %s\nSuco:        %d %s\nCombo:       %d %s\n---------------------\nTotal:       %d\n\nValor total: R$ %.2f", qtdB,(qtdB>1)?"vendidas":"vendida", qtdH, (qtdH>1)?"vendidos":"vendido", qtdS, (qtdS>1)?"vendidos":"vendido", qtdC, (qtdC>1)?"vendidos":"vendido", (qtdB+qtdH+qtdS+qtdC), vTotal);
	
	
	return 0;
}
