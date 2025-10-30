#include <stdio.h>


/* recebe como par�metro um inteiro positivo N e retorne a soma de todos os n�meros inteiros entre 1 e N.*/

int somatorio(int n){
	if(n == 1){
		return 1;
	// se n = 1, a soma � 1
	}
	// passo recursivo: soma o N atual com o somat�rio dos n�meros anteriores.
	return n + somatorio(n-1);
}

int main(){
	int numero, resultado;
	
	printf("informe um numero inteiro positivo: ");
	scanf("%d", &numero);
	
	if(numero <= 0){
		printf("Insira um inteiro positivo.\n");
		// verifica��o se n � igual a zero
	}else{
		resultado = somatorio(numero); // declara��o vari�vel
		printf("A soma dos numeros inteiros entre 1 e %d eh: %d\n", numero, resultado);
	}
	
	return 0;
}
