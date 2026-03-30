#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    printf("Digite um nome: ");
    ___("%s", ___);
    int tamanho = ___(nome);
    printf("Tamanho: %d\n", ___);
    if(___(nome, "admin") == 0) {
        printf("Acesso liberado\n");
    } else {
        printf("Acesso negado\n");
    }
    return 0;
}