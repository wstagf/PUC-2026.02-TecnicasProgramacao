#include <stdio.h>

typedef struct {
    char nome[50];
    float nota;
} Aluno;

void cadastrar(Aluno *a) {
    printf("Nome: ");
    scanf("%s", a->nome);

    printf("Nota: ");
    scanf("%f", &a->nota);
}

void mostrar(Aluno a) {
    printf("\nNome: %s", a.nome);
    printf("\nNota: %.2f", a.nota);

    if(a.nota >= 6)
        printf("\nAprovado");
    else
        printf("\nReprovado");
}

int main() {
    Aluno aluno;

    cadastrar(&aluno);

    mostrar(aluno);

    return 0;
}