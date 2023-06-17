#include <stdio.h>
#include <stdlib.h>

// Faça um programa que realize a leitura dos seguintes dados relativos a  um conjunto de alunos:
// Matricula, Nome, Código da Disciplina, Nota1 e Nota2. Considere uma  turma de até 10 alunos.
// Após ler todos os dados digitados, e depois de armazená-los em um  vetor de estrutura, exibir na
//  tela a listagem final dos alunos com as  suas respectivas medias finais.

struct ficha_alunos
{
    float matricula;
    char nome[250];
    char disciplina[250];
    float notas[2];
    float media;
};

int main()
{

    struct ficha_alunos alunos[10];
    int i, j;

    for (i = 0; i < 10; i++)
    {

        printf("Digite a matricula:\n ");
        scanf("%f", &alunos[i].matricula);
        fflush(stdin);

        printf("Digite a disciplina:\n ");
        gets(alunos[i].disciplina);
        fflush(stdin);

        printf("Digite o nome:\n ");
        gets(alunos[i].nome);
        fflush(stdin);

        float soma = 0;
        for (j = 0; j < 2; j++)
        {

            printf("Digite as notas:\n ");
            scanf("%f",&alunos[i].notas[j]);
            soma += alunos[i].notas[j];
        }

        alunos[i].media = soma / j;
    }

    system("cls");

    for (i = 0; i < 10; i++)
    {

        printf("MATRICULA: %.0f\n", alunos[i].matricula);
        printf("DISCIPLINA: %s\n", alunos[i].disciplina);
        printf("NOME: %s\n", alunos[i].nome);

        for (j = 0; j < 2; j++)
        {

            printf("%d NOTA: %.2f\n",j+1, alunos[i].notas[j]);
        }

        printf("Media: %.2f \n", alunos[i].media);
        printf("\n");
    }

    return 0;
}
