#include <stdio.h>
#define TAM 2




int main() {
	
	struct Endereco{
		char cep[11];
		char logradouro[10];
		int numero;
	};
	
	struct Aluno{
		char nome[30];
		int idade;
		struct Endereco end[2]; // Chamada da struct endereço que ja esta criada
//		notas[3];
	};
	
	char nome[30];
	int idade = 0, maior_idade, i = 0;
	
	struct Aluno aluno[TAM];
	
	for(i = 0;i < TAM; i++){
		
		printf("Informe o nome: ");
		scanf(" %[^\n]s", &aluno[i].nome);
	
		printf("Informe a idade: ");
		scanf("%d", &aluno[i].idade);
		
		printf("Informe o logradouro %d: ", i+1);
		scanf(" %[^\n]s", &aluno[i].end[0].logradouro);
		
		printf("Informe o cep %d: ", i+1);
		scanf(" %[^\n]s", &aluno[i].end[0].cep);
	
		printf("Informe o numero %d: ", i+1);
		scanf("%d", &aluno[i].end[1].numero);
		
		fflush(stdin);
		
		
	}
	
	for(i = 0; i < TAM; i++){
		printf("nome: %s e idade: %d do aluno(a) mais velho(a);", aluno[i].nome, aluno[i].idade);
	}
	
	
	return 0;
}


/*
	
struct Endereco{
		cep;
		lograduro;
		numero;
	};
	
	struct Aluno{
		nome;
		idade;
		struct Endereco end[2]; // Chamada da struct endereço que ja esta criada
		notas[3];
	};
	
	struct Aluno aluno[10];
	
	strcpy(aluno.endereco[0].cep, "70.000-000"); - alocando um cep a alocação número 1 do vetor









*/
