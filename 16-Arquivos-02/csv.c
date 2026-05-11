#include <stdio.h>
#include <string.h>

void separar(char texto[]) {

    char *token;

    token = strtok(texto, ";");

    while (token != NULL) {

        printf("%s\n", token);

        token = strtok(NULL, ";");
    }
}

int main() {
    FILE *arquivo;

    char linha[200];
 
    arquivo = fopen("d:\\Projetos\\PUC\\2026\\TP\\16-Arquivos-02\\dados.csv", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo\n");
        return 1;
    } else {
        printf("Foi possivel ler o arquivo");
        while (fgets(linha, sizeof(linha), arquivo) != NULL) {
            linha[strcspn(linha, "\n")] = 0; 
            printf("%s\n", linha);
            printf("Campos:\n");
            separar(linha); 
            printf("-------------------\n");
        }
    }


    return 0;
}