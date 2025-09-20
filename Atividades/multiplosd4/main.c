#include <stdio.h>


/* Desenvolva um programa onde o usuário informará um valor, será realizada
a contagem de 1 até o valor informado e "ao lado" do número informado até 1, 
caso a multiplicação das duas colunas obtenha um múltiplo de 4, apresente à frente "m4"  */

int main() {
		
	int v=0, i=0, x=0, m=0, m4;
	
	printf("Informe um valor:");
	scanf("%d", &v);
	
	i = 1;
	x = v;
	while(i <= v){
			m = i * x;
			if(m % 4 == 0){
				printf("%d\t%d\tM4\n", i,x);
				i++;
				x--;
			}else{
				printf("%d\t%d\n", i,x );
				i++;
				x--;
			}
	}
	
	
/*				Resolução professor 

	int valor = 0, i = 0, j= 0
*/
	return 0;
}
