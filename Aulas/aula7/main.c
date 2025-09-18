#include <stdio.h>


/*  */

int main() {
	
	int n1 = 0, n2 = 0;
	char op;
	
	printf("--------------------------------\n");
	printf("--------- Calculadora ----------\n");
	printf("--------------------------------\n");
	
	printf("Informe n1: ");
	scanf("%d", &n1);
	
	printf("Informe op: ");
	scanf(" %c", &op);
	
	printf("Informe n2: ");
	scanf("%d", &n2);
	
	printf("--------------------------------\n");
	
	if(op == '-'){
		printf("Resultado: %d ", n1 - n2);
	}else{
		if(op == '+'){
			printf("Resultado: %d ", n1 + n2);
		}else{
			if(op == '*'){
				printf("Resultado: %d ", n1 * n2);
			}else{
				if(op == '/'){
					printf("Resultado: %d ", n1 / n2);	
				}else{
					if(op == '%'){
						printf("Resultado: %d ", n1 % n2);
					}
				}
			}
		}
	}
	
	
	
	
	return 0;
}
