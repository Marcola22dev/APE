#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char nome[30];
    char primeiro[20];
    char sobrenome[20];
    int i, posPrimeiroEspaco = -1, posUltimoEspaco = -1;
    
    printf("--------------------------------\n");
    printf("      Don't Worry Airlines      \n");
    printf("--------------------------------\n");
    
    printf("Insira o seu Nome Completo: ");
    scanf("%[^\n]s", nome);

    int tamanho = strlen(nome);

    // Encontra o primeiro e o último espaço
    
    for (i = 0; i < tamanho; i++) {
        if (nome[i] == ' ') {
            if (posPrimeiroEspaco == -1)
                posPrimeiroEspaco = i;
            posUltimoEspaco = i;
        }
    }

    // Pega o primeiro nome
    
    if (posPrimeiroEspaco != -1) {
        strncpy(primeiro, nome, posPrimeiroEspaco);
        primeiro[posPrimeiroEspaco] = '\0';
    } else {
        strcpy(primeiro, nome);
    }

    // Pega o último sobrenome
    
    if (posUltimoEspaco != -1) {
        int j = 0;
        for (i = posUltimoEspaco + 1; i < tamanho; i++) {
            sobrenome[j++] = nome[i];
        }
        sobrenome[j] = '\0';
    } else {
        strcpy(sobrenome, nome);
    }

    // transforma sobrenome em maiúsculo
    
    for (i = 0; i < strlen(sobrenome); i++) {
        sobrenome[i] = toupper(sobrenome[i]);
    }

    // Primeira letra do primeiro nome em maiúscula, resto minúscula
    
    primeiro[0] = toupper(primeiro[0]);
    for (i = 1; i < strlen(primeiro); i++) {
        primeiro[i] = tolower(primeiro[i]);
    }

    printf("+-------------------------+\n");
    printf("|       %s/%s       |\n", sobrenome, primeiro);
    printf("|       Boa Viagem!       |\n");
    printf("+-------------------------+\n");

    return 0;
}
