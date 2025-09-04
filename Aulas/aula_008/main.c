#include <stdio.h>

/*

 aula sobre: for
 	
 trabalhar com tipo inteiro "int"
 	
	 for(;;){
	}
 
	for(inicialização;condição;salto){
	
	}

*/

int main() {
	
//		---contagem até zero---
	
	int cont=0;
	 
	for(cont=10; cont>=0; cont--){
		printf("%d\n", cont);
	}
/*	  ---contagem até dez---

	int cont=0;
	
	for(cont=1;cont<11;cont++){
		printf("%d\n", cont);
	}
*/

	
	return 0;
}
