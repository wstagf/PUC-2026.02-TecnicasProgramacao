#include <stdio.h>

float calcularMedia(float notas[]) {
    float soma = 0;

    for(int i = 0; i < 3; i++) {
        soma += notas[i];
    }

    return soma / 3;
}

void lerNotas(float *notas) {
    for(int i = 0; i < 3; i++) {
        printf("Nota %d: ", i+1);
        scanf("%f", &notas[i]);
    }
}

int main() {
    float notas[3];
    float media;

    lerNotas(notas);

    media = calcularMedia(notas);

    printf("Media: %.2f\n", media);

    return 0;
}