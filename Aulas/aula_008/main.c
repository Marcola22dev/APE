#include <stdio.h>

/*

 aula sobre: for
 	
 trabalhar com tipo inteiro "int"
 	
	 for(;;){
	}
 
	for(inicializa��o;condi��o;salto){
	
	}

*/

int main() {
	
//		---contagem at� zero---
	
	int cont=0;
	 
	for(cont=10; cont>=0; cont--){
		printf("%d\n", cont);
	}
/*	  ---contagem at� dez---

	int cont=0;
	
	for(cont=1;cont<11;cont++){
		printf("%d\n", cont);
	}
*/

	
	return 0;
}
