#include <stdio.h>


/*  */

int main() {
	int a=0, b=0;
	
	printf("n1: ");
	scanf("%d", &a); // n1 corresponderá à variável a
	
	printf("n2: ");
	scanf("%d", &b);
	
	if(a==b){
		printf("iguais\n"); // se iguais imprimirá apenas "iguais"
	}else{
		if(a>b){
			if(a%2==0){ // se "a" for maior, verifica se é par ou impar
				printf("n1 maior par\n");
			}else{
				printf("n1 maior impar\n");
			}
		}else{
			if(b%2==0){ // se "b" for maior, verifica se é par ou impar
				printf("n2 maior par\n");
			}else{
				printf("n2 maior impar\n");
			}
		}
	}
	
	return 0;
}

/*
Operadores
	Aritmeticos
		+ - * / %
	Atribuição
		=
	Comparação
		== != > < >= <=
		Exemplos:
			a = 5
			b = 7
				a > b false
				a < b true
				a == b false
				a != b true
				a >= b false
				a <= b true
			a = 5
			b = 5
				a > b = false
				a < b = false
				a == b = true
				a != b = false
				a >= b = true
				a <= b = true
	Lógicos
		&& || !
Tabela Verdade
	&& (AND) As duas afirmações precisam ser verdadeiras para a saída ser verdadeira
		V V = V
		V F = F
		F V = F
		F F = F
	
	|| (OR) Pelo menos uma afirmação precisa ser verdadeira para a saída ser verdadeira
		V V = V
		V F = V
		F V = V 
		F F = F
	
	! (NOT) Qualquer que seja a saída ele vai inverter (V -> F || F -> V)
		!(V V = V) = F
		!(V F = V) = F
		!(F V = V) = F
		!(F F = F) = V
Observações
	Pense nas funções com chaves {} como blocos (main, if, else etc)
		Se coloca dentro dos blocos qualquer instrução válida
*/
