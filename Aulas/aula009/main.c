#include <stdio.h>


/*
 for(inicializa��o;condi��o;salto;){
+= para definir um salto mais longo(pular 2 ou mais n�meros)
-= para definir um salto mais longo(diminuir 2 ou mais n�meros)
} 
*/


int main() {
	
//	int i=0;
	
/*		Contagem at� dez
	for(i=1;i<11;i++){ //Se for em ordem crescente minha condi��o tem que ser menor que o n�mero escolhido ex: i<=10, imprime 10
		printf("%d\n", i);
	}
*/
	 
/*		Contagem at� zero
  	for(i=10;i>0;i--){ // Se for em ordem decrescente come�amos com o maior e definimos o fim no menor, ou seja, i>0 - imprime 1
		printf("%d\n", i);
	}
*/

/* 		Contagem de 2 em 2
	for(i=1;i<=100;i+=2){ // i+=2 utilizado para pular de 2 em 2 n�meros
		printf("%d\n", i);
	}
*/

/*		Contagem de 500 a 10
	for(i=500;i>10;i-=3){ i-=3 utilizado para diminuir de 3 em 3 n�meros
		printf("%d\n", i);
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
