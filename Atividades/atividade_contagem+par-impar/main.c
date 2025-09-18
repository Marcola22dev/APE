#include <stdio.h>


/*  */

int main() {
	
	
/*	
		printf("Informe um numero:");
	scanf("%d", &n);
	
	i=1;
	while(i<=n){
		printf("%d\n", i);
		i++;
	}
*/	

		int n1=0, i=0;
	
	//entrada de dados 
	printf("Escreva um valor:"); 
	scanf("%d", &n1);
		
	//	Contador de 1 até o número informado acima	
	for(i=1; i<=n1;i++){
		
	// definir se é par ou impar
		if(i%2==0){ // % - mod foi utilzado para definir se há resto na divisão, se i "mod" 2 for "igual" a zero - imprime par
			printf("%d - Par\n", i);
		}else{
			printf("%d - Impar\n", i);
		}
		
	}
	
	return 0;
}
