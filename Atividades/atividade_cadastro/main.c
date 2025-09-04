#include <stdio.h>
#include <string.h>

int main() {
	
	char tpsangue[2];
	char cidade[50], datanasc[15];
	char estado[50], cep[10];
	char nome_completo[50], cpf[15], rua[50];
	int idade, nmr_casa, nmrspt;
	float altura;
	
	printf("=========\n");
	printf("CADASTRO\n");
	printf("=========\n\n");
	
	printf("Nome completo: ");
	scanf ("%[^\n]s", nome_completo);
	
	printf("CPF: ");
	scanf("%s", &cpf);
	
	printf("Idade: ");
	scanf("%d", &idade);
	
	while ((getchar()) != '\n');
	
	printf("Rua: ");
	fgets(rua, sizeof(rua), stdin);
    rua[strcspn(rua, "\n")] = 0;

	printf("Numero da casa: ");
	scanf("%d", &nmr_casa);
	
	while ((getchar()) != '\n');
	
	printf("Cidade: ");
	fgets(cidade, sizeof(cidade), stdin);
	cidade[strcspn(cidade, "\n")] = 0;
	
	printf("Estado: ");
	fgets(estado, sizeof(estado), stdin);
    estado[strcspn(estado, "\n")] = 0;
	
	printf("Cep: ");
	scanf("%s", cep);
	
	while ((getchar()) != '\n');
	
	printf("Data de nascimento: ");
	scanf("%s", &datanasc);
	
	printf("Numero sapato: ");
	scanf("%d", &nmrspt);
	
	while ((getchar()) != '\n');
	
	printf("Altura: ");
	scanf("%f", &altura);
	
	printf("Tipo sanguineo: ");
	scanf("%s", &tpsangue);
	
	printf("\n================\n");
	printf("Dados Informados\n");
	printf("================\n\n");
	
	printf("Nome completo: %s\n", nome_completo);
	printf("CPF: %s\n", cpf);
	printf("Idade: %d\n", idade);
	printf("Rua: %s\n", rua);
	printf("Numero da casa: %d\n", nmr_casa);
	printf("Cidade: %s\n", cidade);
	printf("Estado: %s\n", estado);
	printf("Cep: %s\n", cep);
	printf("Data de nascimento: %s\n", datanasc);
	printf("Numero sapato:%d\n", nmrspt);
	printf("Idade em 10 anos: %d\n", idade+10);
	printf("Altura: %.2f\n", altura);
	printf("Tipo sanguineo: %s", tpsangue);
	
	return 0;
}
