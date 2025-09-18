#include <stdio.h>


/*  */

int main() {
	
	int i=0, n=0;
/*	
	i=10;
	while(i>0){
		printf("%d\n", i);
		i--;
	}
*/
/*	
	i=1;
	while(i<101){
		printf("%d\n", i);
		i+=2;
	}
*/
/*
	i=500;
	while(i>10){
		printf("%d\n", i);
		i-=3;
	}
*/
	printf("Informe um numero:");
	scanf("%d", &n);
	
	i=1;
	while(i<=n){
		printf("%d\n", i);
		i++;
	}
	return 0;
}
