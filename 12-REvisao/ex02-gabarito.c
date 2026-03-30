#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];

    printf("Digite um nome: ");
    scanf("%s", nome);

    int tamanho = strlen(nome);

    printf("Tamanho: %d\n", tamanho);

    if(strcmp(nome, "admin") == 0) {
        printf("Acesso liberado\n");
    } else {
        printf("Acesso negado\n");
    }

    return 0;
}