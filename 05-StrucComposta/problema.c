/*
Situação Real:
Sistema simples de cadastro de alunos 
para uma faculdade.
Cada aluno possui: 
   Nome, Matrícula
   Endereço (rua, número, cidade)

“Faz sentido misturar dados de
 endereço diretamente dentro 
 da struct Aluno ou podemos
  organizar melhor?”

*/

#include <stdio.h>
#include <string.h>

typedef struct {
    char rua[50];
    int numero;
    char cidade[50];
} Endereco;


typedef struct {
    char nome[50];
    int matricula;
    Endereco endereco;
} Aluno;



int main() {
    Aluno aluno1;
 
    aluno1.matricula = 123456;
    strcpy(aluno1.nome, "Thiago");

    strcpy(aluno1.endereco.rua, "Avenida Ahnaguera");

    printf("Matricula: %d\n", aluno1.matricula);
    printf("Nome: %s\n", aluno1.nome);
    printf("endereco: %s\n", aluno1.endereco.rua);
    return 0;
}