#include <stdio.h>

int main() {
	
	int saldo_atual, valor_da_compra;
	
	saldo_atual = 1000;

	printf("Insira o valor da compra: ");
	scanf("%d", &valor_da_compra);
	
	if(saldo_atual >= valor_da_compra){
		printf("Compra confirmada");
	}else{
		printf("Compra negada");
	}
	
	return 0;
}
