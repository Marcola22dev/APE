#include <stdio.h>


/*  */

int main() {
	int a=0, b=0;
	
	printf("n1: ");
	scanf("%d", &a); // n1 corresponder� � vari�vel a
	
	printf("n2: ");
	scanf("%d", &b);
	
	if(a==b){
		printf("iguais\n"); // se iguais imprimir� apenas "iguais"
	}else{
		if(a>b){
			if(a%2==0){ // se "a" for maior, verifica se � par ou impar
				printf("n1 maior par\n");
			}else{
				printf("n1 maior impar\n");
			}
		}else{
			if(b%2==0){ // se "b" for maior, verifica se � par ou impar
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
	Atribui��o
		=
	Compara��o
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
	L�gicos
		&& || !
Tabela Verdade
	&& (AND) As duas afirma��es precisam ser verdadeiras para a sa�da ser verdadeira
		V V = V
		V F = F
		F V = F
		F F = F
	
	|| (OR) Pelo menos uma afirma��o precisa ser verdadeira para a sa�da ser verdadeira
		V V = V
		V F = V
		F V = V 
		F F = F
	
	! (NOT) Qualquer que seja a sa�da ele vai inverter (V -> F || F -> V)
		!(V V = V) = F
		!(V F = V) = F
		!(F V = V) = F
		!(F F = F) = V
Observa��es
	Pense nas fun��es com chaves {} como blocos (main, if, else etc)
		Se coloca dentro dos blocos qualquer instru��o v�lida
*/
