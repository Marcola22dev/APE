#include <stdio.h>

int main() {
    // Definimos o tamanho máximo do vetor de notas
    const int TAMANHO_MAXIMO = 10;
    
    // O vetor que armazena as notas. Usamos 'float' para notas decimais.
    float notas[TAMANHO_MAXIMO]; 
    
    // Variáveis para controle e cálculo
    float soma = 0.0;             
    int i;                        
    int contagem_notas = 0;       // Quantas notas foram realmente digitadas
    int aprovadas = 0;            
    int reprovadas = 0;           
    
    // Nota de corte para aprovação
    const float NOTA_APROVACAO = 7.0; 

    printf("--- SIMPLES ANALISE DE NOTAS ---\n");
    printf("Digite ate %d notas. Use um numero negativo para parar.\n", TAMANHO_MAXIMO);
    printf("Aprovacao: notas >= %.1f\n", NOTA_APROVACAO);
    printf("--------------------------------\n");

    // --- 1. LEITURA E ARMAZENAMENTO DAS NOTAS ---
    
    // O loop 'for' percorre o vetor do indice 0 ate o maximo (9)
    for (i = 0; i < TAMANHO_MAXIMO; i++) {
        float nota_atual;
        
        printf("Nota #%d: ", i + 1);
        scanf("%f", &nota_atual); // Le a nota do usuario

        // Se a nota lida for negativa, paramos o loop (quebra)
        if (nota_atual < 0.0) {
            printf("Leitura finalizada.\n");
            break; 
        }
        
        // Armazena a nota no vetor na posicao 'i'
        notas[i] = nota_atual;
        
        // Acumula a soma e conta a nota
        soma += nota_atual;
        contagem_notas++; 

        // ----------------------------------------------------
        // Contagem de Aprovados/Reprovados
        // ----------------------------------------------------
        if (nota_atual >= NOTA_APROVACAO) {
            aprovadas++;
        } else {
            reprovadas++;
        }
    }

    // --- 2. EXIBIÇÃO DOS RESULTADOS ---

    printf("\n--- RELATORIO ---\n");

    // So calcula e exibe se alguma nota valida foi inserida
    if (contagem_notas > 0) {
        float media = soma / contagem_notas;

        printf("Total de Notas: %d\n", contagem_notas);
        printf("Soma das Notas: %.2f\n", soma);
        printf("\n");
        printf("Media Geral: **%.2f**\n", media);
        printf("Total de Aprovados (>= %.1f): **%d**\n", NOTA_APROVACAO, aprovadas);
        printf("Total de Reprovados (< %.1f): **%d**\n", NOTA_APROVACAO, reprovadas);
        
    } else {
        printf("Nenhuma nota valida foi inserida.\n");
    }

    return 0;
}
}
