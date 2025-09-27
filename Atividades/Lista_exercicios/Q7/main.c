#include <stdio.h>


/* */

int main() {
	
	int idade = 0;
	
	printf("Informe sua idade: ");
	scanf("%d", &idade);
	
	if(idade < 18){
		printf("Meia-Entrada");
	}else{
		printf("Entrada inteira");
	}
	
	return 0;
}
