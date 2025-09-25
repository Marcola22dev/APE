#include <stdio.h>


/* valor liquido 
	descontar 5% de juros
	Juros = Capital * taxa de juros * tempo  */

int main() {
	
	float valor_bruto, valor_liquido, x, j;
	int meses = 0;
	
	printf("Valor bruto do emprestimo: R$ ");
	scanf("%f", &valor_bruto);
	
	printf("Quantidade de meses: ");
	scanf("%d", &meses);
	
	printf("\n------------------------------\n");
	
	j = valor_bruto * 0.05 * meses; 
	
	printf("Valor liquido: R$%.2f\n", j);
	printf("Valor total(com juros): R$%.2f", j+valor_bruto);
	
	return 0;
}
