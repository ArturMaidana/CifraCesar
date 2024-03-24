#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para criptografar texto usando a cifra de César
void cifra_cesar(char texto[], int chave) {
    int i;
    for (i = 0; texto[i] != '\0'; i++) {
        if (texto[i] >= 'a' && texto[i] <= 'z') {
            texto[i] = 'a' + (texto[i] - 'a' + chave) % 26;
        } else if (texto[i] >= 'A' && texto[i] <= 'Z') {
            texto[i] = 'A' + (texto[i] - 'A' + chave) % 26;
        }
    }
}

int main() {
    char texto[1000];
    int chave;

    // Solicitar entrada de texto e chave
    printf("Digite o texto a ser cifrado: ");
    fgets(texto, sizeof(texto), stdin);
    printf("Digite a chave de cifra de César: ");
    scanf("%d", &chave);

    // Remover a quebra de linha adicionada pelo fgets
    texto[strcspn(texto, "\n")] = '\0';

    // Criptografar o texto
    cifra_cesar(texto, chave);

    // Imprimir o texto cifrado
    printf("Texto cifrado: %s\n", texto);

    return 0;
}
