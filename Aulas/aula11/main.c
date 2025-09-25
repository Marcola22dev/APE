#include <stdio.h>


/* 
	printf(""); - saída
	
	scanf(""); - entrada
	
	if(){
	}else{}
	
 */

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
	
	printf("Medicamento: %s\n", medicamento);
	printf("Codigo: %d\n", codigo);
	printf("Valor unitario: %f\n", valor_unitario);
	
	return 0;
}
