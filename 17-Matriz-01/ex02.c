// Maior Elemento da Matriz
// Desenvolva um programa em C ,
// que leia uma matriz 4x4 de números inteiros. 

// O programa deve identificar o maior valor
//  armazenado na matriz e informar também
//   a linha e a coluna onde ele se encontra.


#include <stdio.h>

int main() {
    int minhaMatriz[4][4];
    int linhaAtual;
    int colunaAtual;

    int maiorValor;
    int linhaDoMaior;
    int colunaDoMaior;

    printf("Digite os valores da matriz 4x4:\n");
    for (linhaAtual = 0; linhaAtual < 4; linhaAtual++) {
       
        for(colunaAtual = 0; colunaAtual <4; colunaAtual++) {
            printf("Elemento [%d][%d]: ", linhaAtual, colunaAtual);
            scanf("%d", &minhaMatriz[linhaAtual][colunaAtual]);
        }
    }

    maiorValor = minhaMatriz[0][0];
    linhaDoMaior = 0;
    colunaDoMaior = 0;

    printf("\n Matriz informada:\n");
    for (linhaAtual = 0; linhaAtual < 4; linhaAtual++) {
        for(colunaAtual = 0; colunaAtual <4; colunaAtual++) {
            printf("%d\t", minhaMatriz[linhaAtual][colunaAtual]);
            if (minhaMatriz[linhaAtual][colunaAtual] > maiorValor) {
                maiorValor = minhaMatriz[linhaAtual][colunaAtual];
                linhaDoMaior = linhaAtual;
                colunaDoMaior = colunaAtual;
            }
        }
        printf("\n");
    }

    printf("\nMaior valor encontrado: %d\n", maiorValor);
    printf("Posicao: linha %d, coluna %d\n", linhaDoMaior, colunaDoMaior);





    return 0;
}