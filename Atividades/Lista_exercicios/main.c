#include <stdio.h>




int main() {
	
	int codigo = 0;
	char medicamento [10];
	float valor_unitario;
	
	printf("Medicamento:");
	scanf(" %s", &medicamento );
	
	printf("Codigo:");
	scanf("%d", &codigo);
	
	printf("Qual o valor unitario:");
	scanf("%f", &valor_unitario);
	
	printf("\n--------------------------------------------\n");
	
	printf("Medicamento informado: %s\n", medicamento);
	printf("Codigo informado: %d\n", codigo);
	printf("Valor unitario informado: %.2f\n", valor_unitario);
	
	return 0;
}
