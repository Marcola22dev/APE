#include <stdio.h>
	// \n

int main() {
	
	int opcao = 0;
	
	printf("\n-----------------\n");
	printf("\tC A R D A P I O");
	printf("\n-----------------\n");
	
	printf("1 - Pizza\n2 - Hambuguer\n3 - Salada\n4 - Sair\n");
		
	printf("Escolha uma opcao digitando o numero correspondente: ");
	scanf("%d",&opcao);
	
	switch(opcao){
		case 1:
			printf("Pizza escolhida");
		break;
		
		case 2:
			printf("Hambuguer escolhido");
		break;
		
		case 3:
			printf("Salada escolhida");
		break;
		
		case 4:
			printf("Sair escolhido");
		break;
		
		default:
			printf("Opcao Invalida");
	}
	
	return 0;
}
