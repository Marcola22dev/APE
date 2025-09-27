#include <stdio.h>


int main() {
	
	float n1, n2, n3, media;
	
	printf("--------------------------------\n");
	printf("------F A C U L D A D E---------\n");
	printf("--------------------------------\n\n");
	
	printf("Informe a nota da porva 1: ");
	scanf(" %f", &n1);
	
	printf("Informe a nota prova 2: ");
	scanf(" %f", &n2);
	
	printf("Informe a nota da prova 3: ");
	scanf(" %f", &n3);
	 
	media = (n1+n2+n3)/3;
	
	printf("\n--------------------------------\n");
	
	if(media >= 7){
		printf("Aluno Aprovado");
	}else{
		printf("Aluno Reprovado");
	}
	
	return 0;
}
