#include <stdio.h>

int main() {
    int minhaMatriz[3][3];
    int linhaAtual;
    int colunaAtual;

    printf("Digite os valores da matriz 3x3:\n");
    for (linhaAtual = 0; linhaAtual < 3; linhaAtual++) {
       
        for(colunaAtual = 0; colunaAtual <3; colunaAtual++) {
            printf("Elemento [%d][%d]: ", linhaAtual, colunaAtual);
            scanf("%d", &minhaMatriz[linhaAtual][colunaAtual]);
        }
    }


    printf("\n Matriz informada:\n");
    for (linhaAtual = 0; linhaAtual < 3; linhaAtual++) {
        for(colunaAtual = 0; colunaAtual <3; colunaAtual++) {
            printf("%d\t", minhaMatriz[linhaAtual][colunaAtual]);
        }
        printf("\n");
    }
    return 0;
}