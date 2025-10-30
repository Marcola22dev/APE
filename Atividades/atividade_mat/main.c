#include <stdio.h>


/* recebe como parâmetro um inteiro positivo N e retorne a soma de todos os números inteiros entre 1 e N.*/

int somatorio(int n){
	if(n == 1){
		return 1;
	// se n = 1, a soma é 1
	}
	// passo recursivo: soma o N atual com o somatório dos números anteriores.
	return n + somatorio(n-1);
}

int main(){
	int numero, resultado;
	
	printf("informe um numero inteiro positivo: ");
	scanf("%d", &numero);
	
	if(numero <= 0){
		printf("Insira um inteiro positivo.\n");
		// verificação se n é igual a zero
	}else{
		resultado = somatorio(numero); // declaração variável
		printf("A soma dos numeros inteiros entre 1 e %d eh: %d\n", numero, resultado);
	}
	
	return 0;
}
