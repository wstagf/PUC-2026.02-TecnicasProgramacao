// 💡 Problema

// Complete o código para:

// Cadastrar um aluno (nome + nota)
// Calcular situação (aprovado/reprovado)
// Exibir os dados
// 🧪 Código com Lacunas
#include <stdio.h>

typedef struct {
    char nome[50];
    float nota;
} Aluno;

void cadastrar(Aluno *a) {
    printf("Nome: ");
    scanf("%s", ___);

    printf("Nota: ");
    scanf("%f", ___);
}

void mostrar(Aluno a) {
    printf("\nNome: %s", ___);
    printf("\nNota: %.2f", ___);

    if(___ >= 6)
        printf("\nAprovado");
    else
        printf("\nReprovado");
}

int main() {
    Aluno aluno;

    cadastrar(___);

    mostrar(___);

    return 0;
}