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
		
	//	Contador de 1 at� o n�mero informado acima	
	for(i=1; i<=n1;i++){
		
	// definir se � par ou impar
		if(i%2==0){ // % - mod foi utilzado para definir se h� resto na divis�o, se i "mod" 2 for "igual" a zero - imprime par
			printf("%d - Par\n", i);
		}else{
			printf("%d - Impar\n", i);
		}
		
	}
	
	return 0;
}
