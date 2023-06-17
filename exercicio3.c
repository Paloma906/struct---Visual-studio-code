#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Implemente um programa que leia o nome, a idade e o endere�o de  uma pessoa e armazene os dados em uma estrutura. 
// Mostre os dados do usuario.

struct ficha_pessoa{

    char nome[250];
    int idade;
    char endereco[100];
};

int main(){

    setlocale(LC_ALL, "Portuguese");

    struct ficha_pessoa pessoa;

    printf("Digite o nome:\n ");
    gets(pessoa.nome);
    fflush(stdin);

    printf("Digite a idade:\n ");
    scanf("%d",&pessoa.idade);
    fflush(stdin);

    printf("Digite o endereco:\n ");
    gets(pessoa.endereco);
    fflush(stdin);

    system("cls");

    printf("Nome:%s\n",pessoa.nome);
    printf("Idade: %d\n",pessoa.idade);
    printf("Endereco:%s\n",pessoa.endereco);
    
   return 0; 
}
