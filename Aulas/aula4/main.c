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
	---Exemplo de valores para cada tipo de vari�vel---

	int idade
	char estado
	float altura
	double criptomoeda

	---STRING---
	
	String
	char *nome*
	String n�o � um tipo primitivo

	especificador de string 
	Especificador = %s
	
	COMENT�RIOS
-	[] usado para adicionar mais de um car�ctere no char
	-TESTAR LINHA POR LINHA-

	
	Erros encontrados
	
	Formata��o somente na sa�da
	
	Um passo por vez: entrada e sa�da se estiver correto, pr�xima entrada e sa�da, seguimos assim at� terminar o c�digo.

	erro de buffer = conflito entre o char normal e o char em string, como resolver: sempre que for receber %c em um c�digo, que tem string, adicionar espa�o antes do %.
	fflush(stdin) - limpando o banco 

	acesso negado: possivel programa sobrando e impedindo uma nova execu��o
	
*/
