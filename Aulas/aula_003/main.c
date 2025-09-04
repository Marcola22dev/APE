#include <stdio.h>




int main() {
	
	/*printf("Hello World!\n\n");
	
	//definimos a variável
	int idade = 0, EDA = 0, dois = 0; // podemos declarar a variáveis em um só bloco e nomeá-las em um só bloco
	idade = 10;
	EDA = idade+10; // EDA: em dez anos
	dois = 2;
	
	
	
	/*float altura;
	altura = 2.10;*/
	
	
	/*printf("idade: %d\n" ,idade);
	printf("altura: %.2f\n" ,altura);
	printf("idade atual: %d anos, em dez anos tera a idade: %d anos\n\n" ,idade, dois);
	
	//-------------------------------------------------------------------------------------------------------------------------------------------//
	
	printf("idade: %d\naltura: %.2f\nidade atual: %d anos, em 10 anos tera a idade: %d anos\n\n" ,idade, altura, idade, EDA ); // tudo em uma só saída
	
	// podemos declarar direto
	printf("idade: 10\n\n");*/
	
	
	// entrada e saida de dados 
	
	int idade = 0;
	
	printf("Informe sua idade: ");
	scanf("%d",&idade); // Entrada de dados
	
	printf("Idade: %d\n\n" ,idade);
	
	float altura = 0;
		
	printf("Informe sua altura: ");
	scanf("%f", &altura); // & usado para puxar o histórico da memória
	
	printf("Altura: %.2f\n\n",altura);
	
	return 0;
}

//operador (=)
//int idade = 10 - lê-se int idade recebe 10
