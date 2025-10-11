#include <stdio.h>


/* 
	vetores - estrutura de dados composta homogenea
	todos elementos s�o do mesmo tipo 
	
	for - trabalha com itera��es, n�meros, inteiros
	a vari�vel controladora de forma invari�vel sempre vai ser inteira
	
	while - maior controle no tipo de vari�vel 
	
	do... while - trata da quest�o do grande loop
	
		---Decis�o---
		
	switch case - bom para situa��es pr�-definidas
	usado muito em menus
	
	
	
	modulariza��o, separar em compartimentos, (subprogramas)
	
	1 = declara��o 
	int soma (int n1, int n2){
		int result = n1+n2;
		return result;
	}

	2 = prototipa��o
	int soma (int n1, int n2)
	
	3 = chamada 
	soma(n1, n2) 

	N�o � necess�rio utilizar o mesmo nome de vari�vel nas fun��es 

	

 */
// prototipa��o das fun��es - nomes n�o precisam ser iguais para chamar fun��es;
	int soma (int n1, int num2); 
	int subtracao(int n1, int n2);
	int multiplicacao(int num1, int n2);
	int divisao(int num1,int num2);


int main(){
	
	// aqui declaramos uma vari�vel inteira com nome de "n2"
	int n1 = 0, n2 = 0;
 	int  s = 0, sub = 0 ,m =0, d = 0; 
	char op;
	
	// valores que as vari�veis ir�o receber 
	n1 = 20;
	n2 = 4;
	
	// vari�veis que ir�o receber a chamada das fun��es
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

// FUN��ES QUE SER�O UTILIZADAS PARA AGILIZAR A VIDA 
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
