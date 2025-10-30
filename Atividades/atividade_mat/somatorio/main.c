#include <stdio.h>


/*  */
int somatorio(int n){
	// condição de parada
	// quando N chega a 1, a soma é 1
	if(n == 1){
		return 1;
	}
	
	//quebra o problema em n + somatorio (n-1)
	//O somatório de N é N mais o somatório de todos os numeros anteriores
	return n + somatorio(n-1);
}
int main() {
	return 0;
	
	int numero = 0, resultado;
	
	printf("Informe um numero inteiro positivo: ");
	scanf("%d", &numero);
	
	if(numero <= 0){
		printf("Insira um numero inteiro positivo");
	}else{
		resultado = somatorio(numero);
		printf("O somatório dos numeros de 1 a %d eh: %d\n", numero, resultado);
	}
}
