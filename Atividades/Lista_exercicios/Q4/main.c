#include <stdio.h>	//	BIBLIOTECA UTILIZADA
#define PI 3.14159 //	declara��o de PI para ser utilizado na equa��o
		


int main() {
	
	float raio, area; // declara��o de vari�vel

	scanf("%f", &raio);	// Entrada do valor de raio
	area = PI * raio * raio;	// 	equa��o para descobrir o valor da area
	printf("Area = %.2f\n", area); // Sa�da: resultado da equa��o acima
	
	return 0;
}
