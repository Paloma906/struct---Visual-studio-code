#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Crie uma estrutura representando os alunos de um determinado  curso. A estrutura deve conter a matrícula do aluno, nome, nota da  primeira prova, nota da segunda prova e nota da terceira prova.
(a) Permita ao usuário entrar com os dados de 5 alunos;
(b) Informe a maior nota da primeira prova;
(c) Informe a maior media geral;
(d) Informe a menor media geral;
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o  valor 6 para aprovação.*/

struct ficha_aluno
{
    float matricula;
    char nome[250];
    float notas[3];
    float media;
    float soma;
};

int main()
{

    int i, j;
    float soma, maiorMedia = INT_MIN, menorMedia = INT_MAX, media = 0;
    float maiorNota = INT_MIN;
    struct ficha_aluno aluno[5];

    for (i = 0; i < 5; i++)
    {

        printf("Digite a matricula:\n ");
        scanf("%f", &aluno[i].matricula);
        fflush(stdin);
        

        printf("Digite o nome do aluno: \n");
        gets(aluno[i].nome);
        fflush(stdin);

        for (j = 0; j < 3; j++)
        {
            printf("Digite a nota: \n");
            scanf("%f", &aluno[i].notas[j]);
            aluno[i].soma += aluno[i].notas[j];

            if (aluno[i].notas[j] > maiorNota)
            {
                maiorNota = aluno[i].notas[j];
            }
        }
        aluno[i].media = aluno[i].soma / 3;


        if (aluno[i].media > maiorMedia)
        {
            maiorMedia = aluno[i].media;
        }

        if (aluno[i].media < menorMedia)
        {

            menorMedia = aluno[i].media;
        }

        system("cls");
    }


// mostrar dados

    for (i = 0; i < 5; i++)
    {

        printf("Maior nota da primeira prova:%f\n", maiorNota);
        printf("MENOR MEDIA: %.2f\n", menorMedia);
        printf("MAIOR MEDIA: %.2f\n", maiorMedia);
        
        if (aluno[i].media > 6)
        {
            printf("Aluno aprovado!");
        } else{

            printf("Aluno reprovado!");
        }

    }

    return 0;
}