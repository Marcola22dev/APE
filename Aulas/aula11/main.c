#include <stdio.h>


/* 
	vetores - estrutura de dados composta homogenea
	todos elementos são do mesmo tipo 
	
	for - trabalha com iterações, números, inteiros
	a variável controladora de forma invariável sempre vai ser inteira
	
	while - maior controle no tipo de variável 
	
	do... while - trata da questão do grande loop
	
		---Decisão---
		
	switch case - bom para situações pré-definidas
	usado muito em menus
	
	
	
	modularização, separar em compartimentos, (subprogramas)
	
	1 = declaração 
	int soma (int n1, int n2){
		int result = n1+n2;
		return result;
	}

	2 = prototipação
	int soma (int n1, int n2)
	
	3 = chamada 
	soma(n1, n2) 

	Não é necessário utilizar o mesmo nome de variável nas funções 

	

 */
// prototipação das funções - nomes não precisam ser iguais para chamar funções;
	int soma (int n1, int num2); 
	int subtracao(int n1, int n2);
	int multiplicacao(int num1, int n2);
	int divisao(int num1,int num2);


int main(){
	
	// aqui declaramos uma variável inteira com nome de "n2"
	int n1 = 0, n2 = 0;
 	int  s = 0, sub = 0 ,m =0, d = 0; 
	char op;
	
	// valores que as variáveis irão receber 
	n1 = 20;
	n2 = 4;
	
	// variáveis que irão receber a chamada das funções
	s = soma(n1, n2);
	sub = subtracao(n1, n2);
	m = multiplicacao(n1,n2);
	d = divisao(n1,n2);
	
	printf("Informe o operador: ");
	scanf(" %c", &op);
	
	switch(op){
		case '+':
		printf("Soma: %d", s);
		break;
		
		case '-':
		printf("Subtracao: %d", sub);
		break;
		
		case '*':
		printf("Multiplicacao: %d", m);
		break;
		
		case '/':
		printf("Divisao: %d", d);
		break;
			
		default: 
			printf("op invalido!");
	}
	return 0;
}

// FUNÇÕES QUE SERÃO UTILIZADAS PARA AGILIZAR A VIDA 
int soma (int n1, int num2){ 
	int result = n1 + num2;
	return result;
}

int subtracao(int n1, int n2){ 
	int result = n1 - n2;
	return result;
}

int multiplicacao(int num1, int n2){
	int result = num1 * n2;
	return result;
}

int divisao(int n1 ,int n2){
	int result = n1 / n2;
	return result;
}
