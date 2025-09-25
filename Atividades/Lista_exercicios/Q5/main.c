#include <stdio.h>




int main() {
	
	int mes_a = 0, mes_b = 0;
	int consumo, diferenca;
	
	printf("Informe a leitura do mes anterior: ");
	scanf("%d", &mes_a);
	
	printf("Informe a leitura do mes atual: ");
	scanf("%d", &mes_b);
	
	diferenca = mes_a - mes_b;
	consumo = mes_b * 0.75;
	
	printf("Diferenca: %d\n", diferenca);
	
	printf("Valor da fatura atual: R$ %d", consumo);
	
	
	return 0;
}
