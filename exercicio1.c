#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// • Crie um programa usando Struct com as informações abaixo:  • Nome
// • Idade
// • Peso
// • Altura
// Mostre os dados do usuário.

struct ficha_pessoa 
{

    char nome[250];
    int idade;
    float peso, altura;
    
};

int main()

{
    setlocale(LC_ALL, "Portuguese");

    struct ficha_pessoa pessoa;

    printf("Digite o nome:\n ");
    gets(pessoa.nome);

    printf("Digite a idade:\n ");
    scanf("%d",&pessoa.idade);

    printf("Digite o peso:\n ");
    scanf("%f",&pessoa.peso);

    printf("Digite a altura:\n ");
    scanf("%f",&pessoa.altura);

    system("cls");

    printf("Nome: %s\n",pessoa.nome);
    printf("Idade: %d\n",pessoa.idade);
    printf("Peso: %.2f\n",pessoa.peso);
    printf("Altura: %f\n",pessoa.altura);

    return 0;
}