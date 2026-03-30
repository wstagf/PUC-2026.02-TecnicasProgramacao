#include <stdio.h>
float/ calcularMedia(float notas[]) {
    float soma = 0;
    for(int i = 0; i < ___; i++) {
        soma += ___;
    }
    return soma / ___;
}

void lerNotas(float *notas) {
    for(int i = 0; i < 3; i++) {
        printf("Nota %d: ", i+1);
        scanf("%f", ___);
    }
}

int main() {
    float notas[3];
    float media;
    lerNotas(___);
    media = ___(notas);
    printf("Media: %.2f\n", ___);
    return 0;
}