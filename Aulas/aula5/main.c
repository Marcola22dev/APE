#include <stdio.h>

/*
	char nome[20], sobrenome[20], nome_completo[20]; // String = %s -utilizamos quando precisamos escrever mais de uma caráctere, char + [] 
	
	printf("informe o nome: ");
	scanf("%s", &nome);
	
	printf("Informe o sobrenome: ");
	scanf("%s", &sobrenome);
	
	printf("Nome informado: %s %s", nome, sobrenome);
	printf("\n-----------------------------------------\n");
	
	printf("Informe nome completo: ");
	fflush(stdin);
	scanf("%[^\n]s", &nome_completo);
	
	printf("Nome completo informado: %s", nome_completo); 

*/

int main() {

	int n1 = 0, n2 = 0;

	printf("Informe n1: ");
	scanf("%d", &n1);
	
	printf("Informe n2: ");
	scanf("%d", &n2);
	
	printf("Resultado: %d ",n1-n2);

	
	return 0;
}


/* 
	expressões aritméticas 
	+, - 
	* = multiplicação
	/ = divisão
	% = mod - resto da divisão
	Ex: 

	%[^\n]s - permite usar espaço no scanf(enquanto não utilizada quebra de linha a string continua), sem a expressão regular o que vem após o espaço não é considerado 
	& - E comercial - usado para buscar na base de dados o que foi informado na entrada 
	fflush(stdin) - utilizado para limpar a base de dados, para evitar erros no string
	Erros encontrados -
	
	
			Cola cpf =

	char cpf[14];
	
	printf("Informe seu CPF: ");
	scanf("%s", &cpf);
	
	printf("CPF informado: %s", cpf);

*/
