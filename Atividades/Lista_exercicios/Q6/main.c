#include <stdio.h>


/* valor liquido 
	descontar 5% de juros
	Juros = Capital * taxa de juros * tempo  */

int main() {
	
	float valor_bruto, valor_liquido, x, j, p;
	int meses = 0;
	
	printf("Valor bruto do emprestimo: R$ ");
	scanf("%f", &valor_bruto);
	
	printf("Quantidade de meses: ");
	scanf("%d", &meses);
	
	printf("\n------------------------------\n");
	
	j = valor_bruto * 0.05 * meses; 
	x = j+valor_bruto;
	p = x / meses;
	
	printf("Valor liquido: R$%.2f\n", j);
	printf("Juros: R$%.2f\n", x);
	printf("Valor parcela: R$%.2f", p );
	
	return 0;
}
