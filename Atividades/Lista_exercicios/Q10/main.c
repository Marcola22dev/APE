#include <stdio.h>


int main() {
	
	int valor = 0, bonus = 0;
	
	printf("Insira o valor das vendas: ");
	scanf("%d", &valor);
	
	printf("--------------------------------\n");
	
	if(valor >= 10000){
		bonus = valor * 0.10;
		printf("A meta foi atingida\n");
	}else{
		bonus = 0;
		printf("A meta nao foi atingida\n");
	}
	
	printf("Valor das Vendas: R$ %d\n",valor);
	printf("Bonus de produtividade: R$ %d",bonus);
	
	return 0;
}
