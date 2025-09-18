#include <stdio.h>
#include <stdlib.h>



int main() {
	
printf("----------------\n");
printf("C A D A S T R O\n");
printf("----------------\n");
	

	char nome [15];
	int idade = 0;
	char status;
	float altura;
	double salario;
	char email [15];
	
	
	printf("Nome: ");
	scanf("%s" ,&nome);
	
	printf("Idade: ");
	scanf("%d" ,&idade);
	
	printf("Status (a ou i): ");
	scanf(" %c" ,&status);

	printf("Altura: ");
	scanf("%f", &altura);
	
	printf("Salario (coin): ");
	scanf("%lf", &salario);
	
	printf("E-mail: ");
	scanf("%s", &email);
	
	printf("\n----------------\n");
	
	printf("Nome: %s\n" ,nome);
	printf("Idade: %d\n" ,idade);
	printf("Status: %c\n" ,status);
	printf("Altura: %.2f\n" ,altura);
	printf("Salario: %lf\n" ,salario);
	printf("E-mail: %s\n" ,email);
	
	
	
	
	
	return 0;
}

/*
	---Exemplo de valores para cada tipo de variável---

	int idade
	char estado
	float altura
	double criptomoeda

	---STRING---
	
	String
	char *nome*
	String não é um tipo primitivo

	especificador de string 
	Especificador = %s
	
	COMENTÁRIOS
-	[] usado para adicionar mais de um caráctere no char
	-TESTAR LINHA POR LINHA-

	
	Erros encontrados
	
	Formatação somente na saída
	
	Um passo por vez: entrada e saída se estiver correto, próxima entrada e saída, seguimos assim até terminar o código.

	erro de buffer = conflito entre o char normal e o char em string, como resolver: sempre que for receber %c em um código, que tem string, adicionar espaço antes do %.
	fflush(stdin) - limpando o banco 

	acesso negado: possivel programa sobrando e impedindo uma nova execução
	
*/
