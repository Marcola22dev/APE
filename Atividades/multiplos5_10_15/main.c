#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int valor = 0, i = 0, j = 0;
	
	printf("Informe um Valor:");
	scanf("%d", &valor);
	
	i=1;
	j=valor;
	while(i<=valor){
		printf("%d\t",i);
		if(j % 15 == 0){
			printf("M15\n");
		}else{
			if(j % 10 == 0){
				printf("M10\n");
			}else{
				if(j % 5 == 0){
					printf("M5\n");
				}else{
					printf("%d\n", j);
				}
			}
		}
		i++;
		j--;
	}
	
	return 0;
}
