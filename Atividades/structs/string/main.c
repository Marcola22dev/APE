#include <stdio.h>
#include <string.h>
#include <ctype.h> // mudar para mai�sculo e min�sculo, toupper e tolower;

/* empresa: Don't Worry Airlines
	usu�rio informar� o nome completo ou no m�nimo com 1 sobrenome
	
 */

int main() {
	
	char nome[22];
	
	
	
	printf("Insira seu nome completo: ");
	scanf("%[^\n]s", &nome);
	
	strlen(nome);
	
	
	printf("\n+-------------------------+\n");
	printf("|                         |\n");
	printf("|                         |\n");
	printf("+-------------------------+");
	

	
	return 0;
}

/*
	string - vetor de caracteres
	biblioteca (strcpy)
	mudar a letra para mai�scula 
	
	strcpy(nome1,nome2);
	strcpy(nome1, "nome da string"); - estrutura
	
	exemplo:
	
	char nome1[20];
	
	strcpy(nome1, nome2);
	
	strcpy(nome1, "batata");
	printf("%c", nome1[2]); - imprimir somente a letra E.
	
	- imprimir nome na vertical
	
	for(i=0;i<5;i++){
	printf(" %c\n", nome1);
	}
	D
	I
	E
	G
	O
	
	strlen(variavel) - retorna o tamanho da string em int, char, float, double
	strlen(nome1) = 6 letras
	
	strcat(var1, var2) - complementa o primeiro nome com o segundo
	strcat(nome, nome2) - (nome)batata (nome2)boa
	
	strcpy(nome, "Outro Diego"); - substitui anterior
	strcmp(nome, "Diego") - retorna diferen�a entre diego e Diego, se for o resultado for = 0 significa que n�o tem diferen�a
	stricmp(nome, "Diego"); - indiferen�a entre diego e Diego
	
	
	tolower ('A'); para letra min�scula
	
	toupper ('a'); para letra mai�scula
	
	Exemplo:
	
	char letra
	
	letra = 'a'
	
	toupper(letra);
	printf(" %c", letra);
	- retorna letra min�scula, sa�da = a;
	
	letra = toupper(letra);
	printf(" %c", letra);
	- retorna letra mai�scula, sa�da = A;

*/
