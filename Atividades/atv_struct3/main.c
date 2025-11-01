#include <stdio.h>
#include <stdlib.h>

/* CONTROLE DE ESTOQUE 
CRIE STRUCTS:
UF
CIDADE
PRODUTO
MARCA
FORNECEDOR
CATEGORIA

do while dentro do switch case
 */

int le_valida_menu();

int main() {
	
	int opcao = 0, opcao_7 = 0;
	
	struct Uf{
		char nome_uf[15];
		char sigla[2];	
	};
	
	struct Cidade{
		char nome[15];
		struct Uf uf;
	};
	
	struct Marca{
		char nome_marca[15];
	};
	
	struct Fornecedor{
		char nome_fornecedor[15];
		struct Cidade cidade;
	};
	
	struct Categoria{
		char nome_categoria[15];
	};
	
	struct Produto{
		char nome_produto[15];
		float valor_poduto;
		struct Marca marca;
		struct Fornecedor fornecedor;
		struct Categoria categoria[5];
	};
	
	struct Uf uf;
	struct Cidade cidade;
	struct Marca marca;
	struct Fornecedor fornecedor;
	struct Categoria categoria;
	struct Produto produto;
	
	do{
				
		switch(opcao){
		case 1:
		break;
		
		case 2:
		break;
		
		case 3:
		break;
		
		case 4:
		break;
		
		case 5:
		break;
		
		case 6:
		break;
		
		default:
			system("cls");
//			printf("Opção inválida, tente novamente!");
		
		case 7:
//			switch(opcao_7){
//				printf("(1) - quantidade de produtos\n(2) - quantidade de cidades cadastradas\n(3) - quais UF´s apresentam os produtos com maior valor\n(4) - os fornecedores de determinadas cidades");
//				case 1:
//				break;
//				
//				case 2:
//				break;
//				
//				case 3:
//				break;
//				
//				case 4:
//				break;
//				
//				default:
//					system("cls");
//					printf("Opção inválida, tente novamente!");
//			}
		break;
		
		case 8:
		break;
	}
		
	}while(opcao != 8);

	
	
	
	
	
	
	return 0;
}

int le_valida_menu(){
	
	int opcao;
	int cont = 0;

	do{
		if(cont == 0){
			printf("(1) - manter categoria\n(2) - manter fornecedor\n(3) - manter produto\n(4) - manter marca\n(5) - manter UF\n(6) - manter cidade\n(7) - relatórios\n(8) - sair");
			scanf("%d", &opcao);
		} else{
			printf("Erro, insira uma opcao válida");
		}	
	}while(opcao != 8);
	
	return 0;
}
