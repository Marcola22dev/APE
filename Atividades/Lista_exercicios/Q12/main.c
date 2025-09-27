#include <stdio.h>


int main() {
	
	int opcao = 0;
	float n1, n2;
	
	printf("--------------------------------\n");
	printf("     C A L C U L A D O R A      \n");
	printf("--------------------------------\n");
	
	printf("Insira n1: ");
	scanf("%f", &n1);
	
	printf("Insira n2: ");
	scanf("%f", &n2);
	
	printf("1 - Soma\n 2 - Subtracao\n 3 - Multiplicacao\n 4 - Divisao\n");
	
	printf("Escolha a operacao digitando o numero correspondente: ");
	scanf("%d",&opcao);
	
	switch(opcao){
		case 1:
			printf("Resultado: %.2f",n1 + n2);
		break;
			
		case 2:
			printf("Resultado: %.2f",n1 - n2);
		break;
		
		case 3:
			printf("Resultado: %.2f",n1 * n2);
		break;
		
		case 4:
			if(n2 == 0){
				printf("Nao e possivel a divisao por zero");
			} else{
				printf("Resultado: %.2f",n1 / n2);
			}
		break;
		
		default:
			printf("Operacao Invalida");
	}
	
	return 0;
}
