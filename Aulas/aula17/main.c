#include <stdio.h>
#include <string.h>


/*  
	Estrutura de dados heterogêneas
	
	struct Aluno{  
		char nome[20];	- variável membro
		int idade;	- variável membro
		* acessamos a variável membro com ( . + o nome da variável) = aluno.idade
};
	struct Aluno maria;
	
	maria.idade = 15;
	
	printf("idade de (maria): %d\n", aluno.idade);
	 
	scanf("%d", &maria.idade);
	
	printf("idade de (maria): %d\n", aluno.idade);

	#include <string.h>
	- biblioteca para declarar string na própria variável


*/

/* int main() {
	
	struct Aluno{  
		char nome[22];	//	- variável membro
		int idade;	//	- variável membro
};
	struct Aluno maria;
	
	maria.idade = 15; // declaração da idade 
	maria.nome;

	printf("Insira o nome completo: ");
	scanf("%[^\n]s", &maria.nome);
	fflush(stdin);
//	printf("idade de (maria): %d\n", maria.idade); // apresentação da idade atribuída acima
	
	printf("Informe a idade: ");
	scanf("%d", &maria.idade);
	
	printf("Nome informado: %s\n", maria.nome);
	printf("idade informada: %d\n", maria.idade);
	
	return 0;
}
*/

	//Utilizando strcpy;

//int main(){
//	
//	struct Aluno{  
//		char nome[22];	//	- variável membro
//		int idade;	//	- variável membro
//};
//	struct Aluno aluno; 
//	
//	strcpy(aluno.nome, "Rafael"); // atribuição das strings
//	aluno.idade = 20;
//	
//	printf("Nome de (aluno): %s\n", aluno.nome);
//	printf("Idade de (aluno): %d\n", aluno.idade);
//	
//	printf("--------------------------------\n");
//	
//	printf("Informe o nome de aluno: ");
//	scanf("%[^/n]s", &aluno.nome);
//	
//	fflush(stdin);
//	
//	printf("Informe a idade de aluno: ");
//	scanf("%d", &aluno.idade);
//	
//	printf("Nome informado: %s\n", aluno.nome);
//	printf("Idade informada: %d\n", aluno.idade);
//	
//	return 0;
//}


//int main(){
//	
//	struct Produto{
//		char desc[20];
//		float valor;
//	};
//	
//	struct Produto produto1, produto2;
//	
//	strcpy(produto1.desc, "Margarina Boa");
//	produto1.valor = 15.2;
//	
//	strcpy(produto2.desc, "Margarina Delicia");
//	produto2.valor = 16.4;
//	
//	printf("produto 1: %s\n", produto1.desc);
//	printf("Valor: R$%.2f\n\n", produto1.valor);
//	
//	
//	
//	printf("produto 2: %s\n", produto2.desc);
//	printf("Valor: R$%.2f\n", produto2.valor);
//	
//	return 0;
//}

//int main(){
////	struct End{
////		char endereco[30];
////		int numero;
////		char complemento[20];
////		char cep[10];
////	};
//	
//	struct Aluno{
//		char nome[22];
//		int idade;
////		struct End end;
//	};
//	
//	struct Aluno aluno;
//	aluno.idade = 20;
//	aluno.end.numero = 2;
//	aluno.end.cep;
//	
//	// Endereço
//	
//	printf("Informe o CEP: ");
//	scanf(" %s", &aluno.end.cep);
//
//	fflush(stdin);
//	printf("CEP informado: %s\n", aluno.end.cep);
//	
//	return 0;
//}

int main(){
	
	struct Aluno{
		char nome[20];
		int idade;
		//float notas[2];
	};
	
	struct Aluno aluno[20];	//vetor de alunos

	//	Aluno 1
	printf("Informe o nome: ");
	scanf("%[^\n]s", aluno[0].nome);
	
	printf("Informe a idade: ");
	scanf("%d", aluno[0].idade);
	fflush(stdin);
	printf("Nome aluno 1: %s", aluno[0].nome);
	printf("Idade aluno 1: %d", aluno[0].idade);

//	//Aluno 2
//	printf("Informe o nome: ");
//	scanf("%[^\n]s", aluno[1].nome);
//	printf("Informe a idade: ");
//	scanf("%d", aluno[1].idade);
	
//	printf("Nome aluno 2: %s", aluno[1].nome);
//	printf("Idade aluno 2: %s", aluno[1].idade);
	
	return 0;
}
