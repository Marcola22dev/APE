#include <stdio.h>


/*  */

int main() {
	
	char nome[10];
	float n1 = 3.87, n2 = 3.7, n3 = 4.5;
	float x = n1+n2+n3, media= x/3 ;
	
	printf("Informe seu nome: ");
	scanf(" %s", &nome);
	
	printf("\n----------------------------------------------\n");
	printf("Aluno: %s\n", nome);
	printf("Media: %.2f", media);
	
	
	
	
	
	return 0;
}
