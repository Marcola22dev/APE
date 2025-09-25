#include <stdio.h>


/*  */

int main() {
	
	int idade = 0;
	char nome[15];
	float altura;
	
	printf("Informe o seu nome: ");
	scanf(" %s", &nome);
	
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	
	printf("Informe sua altura: ");
	scanf("%f", &altura);
	
	
	printf("\n-----------------------------------------------------\n");
	
	printf("Paciente %s possui %d anos e a altura de %.2fm", nome, idade, altura);
	
	return 0;
}
