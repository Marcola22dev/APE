#include <stdio.h>


/* Desenvolva um programa onde o usu�rio informar� um valor, ser� realizada
a contagem de 1 at� o valor informado e "ao lado" do n�mero informado at� 1, 
caso a multiplica��o das duas colunas obtenha um m�ltiplo de 4, apresente � frente "m4"  */

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
	
	
/*				Resolu��o professor 

	int valor = 0, i = 0, j= 0
*/
	return 0;
}
