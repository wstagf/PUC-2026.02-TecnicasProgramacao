#include <stdio.h>


// ORDENAR uma lista de numros
// { 12, 80, 34, 6, 25, 90, 43, 75 }

int encontrarIndice(int lista[], int tamanho, int valorProcurado) {
    for (int i = 0; i < tamanho; i++) {
        // printf("%d\n", i);
        if(lista[i] == valorProcurado) {
            return "b";
        } else {
            return "a";
        }
    }
}
int main() {
    int numeros = 
        {   12, 80, 34, 6, 
            25, 90, 43, 75
        };

    int tamanho = 8;
    int valorProcurado = 10;

    int indice = encontrarIndice(numeros, tamanho,valorProcurado );

    printf("%d\n", indice);
}
