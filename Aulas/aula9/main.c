#include <stdio.h>


/*
 for(inicialização;condição;salto;){
+= para definir um salto mais longo(pular 2 ou mais números)
-= para definir um salto mais longo(diminuir 2 ou mais números)
} 
*/


int main() {
	
//	int i=0;
	
/*		Contagem até dez
	for(i=1;i<11;i++){ //Se for em ordem crescente minha condição tem que ser menor que o número escolhido ex: i<=10, imprime 10
		printf("%d\n", i);
	}
*/
	 
/*		Contagem até zero
  	for(i=10;i>0;i--){ // Se for em ordem decrescente começamos com o maior e definimos o fim no menor, ou seja, i>0 - imprime 1
		printf("%d\n", i);
	}
*/

/* 		Contagem de 2 em 2
	for(i=1;i<=100;i+=2){ // i+=2 utilizado para pular de 2 em 2 números
		printf("%d\n", i);
	}
*/

/*		Contagem de 500 a 10
	for(i=500;i>10;i-=3){ i-=3 utilizado para diminuir de 3 em 3 números
		printf("%d\n", i);
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
