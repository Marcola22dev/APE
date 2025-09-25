#include <stdio.h>	//	BIBLIOTECA UTILIZADA
#define PI 3.14159 //	declaração de PI para ser utilizado na equação
		


int main() {
	
	float raio, area; // declaração de variável

	scanf("%f", &raio);	// Entrada do valor de raio
	area = PI * raio * raio;	// 	equação para descobrir o valor da area
	printf("Area = %.2f\n", area); // Saída: resultado da equação acima
	
	return 0;
}
