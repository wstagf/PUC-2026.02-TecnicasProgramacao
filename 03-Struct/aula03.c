#import <stdio.h>

#define MAX_ALUNOS 10

struct Aluno {
    char nome[50];
    int matricula;
    float n1;
    float n2;
    float media;
};


int main() {
    struct Aluno turma[MAX_ALUNOS];

    int total = 0;
    int opcao;

    do {
        printf("===== Menu cadastro de alunos =====\n");
        printf("1. Cadastrar aluno\n");
        printf("2 - Listar alunos\n");
        printf("0 - Sair\n");

        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
               
                printf("vamos cadastrar.\n");
                printf("\n  -----  Cadastro de Aluno ----- \n ");
                printf("Digite o nome do aluno: ");
                scanf(" %[^\n]s", turma[total].nome);
                printf("Digite a matricula do aluno: ");
                scanf("%d", &turma[total].matricula);
                printf("Digite a primeira nota: ");
                scanf("%f", &turma[total].n1);
                printf("Digite a segunda nota: ");
                scanf("%f", &turma[total].n2);
                turma[total].media = (turma[total].n1 + turma[total].n2) / 2;
                total++;
                break;
            case 2:
                 printf("Listando alunos cadastrados.\n");
                for (int i = 0; i < total; i++)
                    {
                        printf("Nome: %s\n", turma[i].nome);
                        printf("Matricula: %d\n", turma[i].matricula);
                        printf("Media: %.2f\n", turma[i].media);
                        printf("Situacao: %s\n", (turma[i].media >= 60) ? "Aprovado" : "Reprovado");
                        printf("\n");
                    }
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while ( opcao!= 0 );
    
    
    

    // for (size_t i = 0; i < 10; i++)
    // {
    //     printf("Digite o nome do aluno: ");
    //     fgets(nome, sizeof(nome), stdin);
    //     printf("Digite a matricula do aluno: ");
    //     scanf("%d", &matricula);
    //     printf("Digite a primeira nota: ");
    //     scanf("%f", &n1);
    //     printf("Digite a segunda nota: ");
    //     scanf("%f", &n2);

    //     media = (n1 + n2) / 2;
    //     printf("Nome: %s", nome);
    //     printf("Matricula: %d\n", matricula);
    //     printf("Media: %.2f\n", media);

    //     printf("Situacao: %s\n", (media >= 6.0) ? "Aprovado" : "Reprovado");
    
    //}
    

    return 0;
}