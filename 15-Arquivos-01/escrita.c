#include <stdio.h>

int main() {
    FILE *arquivo = fopen("dados.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    fprintf(arquivo, "Nome: João\n");
    fprintf(arquivo, "Idade: 20\n");

    fclose(arquivo);
    return 0;
}

