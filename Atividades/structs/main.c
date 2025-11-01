
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM 50



int main() {
int i = 0, maior_idade = 0;

struct Endereco{
	char logradouro[20];
	int numero;
	char cep[10];
};

struct Aluno{
	char nome[30];
	int idade;
	struct Endereco endereco[2];
	float notas[3];
};

struct Aluno aluno[TAM];

for(i = 0; i < TAM; i++){
	
	
	printf("Informe o nome do aluno %d: ",i+1);
	scanf(" %[^\n]s",&aluno[i].nome);
	
	printf("Informe a idade do aluno %d: ",i+1);
	scanf("%d",&aluno[i].idade);
	
	if(aluno[i].idade > maior_idade){
		maior_idade = aluno[i].idade;
}
	
	printf("informe o logradouro (Endereco 1) do aluno %d: ",i+1);
	scanf(" %[^\n]s",&aluno[i].endereco[0].logradouro);
	
	printf("informe o numero (Endereco 1) do aluno %d: ",i+1);
	scanf("%d",&aluno[i].endereco[0].numero);
	
	printf("informe o CEP (Endereco 1) do aluno %d: ",i+1);
	scanf(" %s",&aluno[i].endereco[0].cep);
	
	printf("informe o logradouro (Endereco 2) do aluno %d: ",i+1);
	scanf(" %[^\n]s",&aluno[i].endereco[1].logradouro);
	
	printf("informe o numero (Endereco 2) do aluno %d: ",i+1);
	scanf("%d",&aluno[i].endereco[1].numero);
	
	fflush(stdin);
	
	printf("informe o CEP (Endereco 2) do aluno %d: ",i+1);
	scanf("%s",&aluno[i].endereco[1].cep);
	
	printf("informe a N1 do aluno %d: ",i+1);
	scanf("%f",&aluno[i].notas[0]);
	
	printf("informe a N2 do aluno %d: ",i+1);
	scanf("%f",&aluno[i].notas[1]);
	
	printf("informe a N3 do aluno %d: ",i+1);
	scanf("%f",&aluno[i].notas[2]);
}

printf("--------------------------------\n");
printf("Aluno com a maior Idade: \n");

for(i = 0; i < TAM; i++){
	if(aluno[i].idade == maior_idade){
		printf("Aluno: %s\n | Idade: %d\n",aluno[i].nome,aluno[i].idade);
	}
}

}

