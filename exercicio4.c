#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

//Implemente um programa que leia as informaÃ§Ãµes de um livro com  os seguintes dados:  
// Nome 
// Autor 
//Categoria 
//Preço 
//Armazene os dados em uma estrutura com vetor para 3 livros. Mostre os dados do livro.

struct ficha_livro
{
    char nome[250];
    char autor[250];
    char categoria[250];
    float preco;
};

int main(){

    struct ficha_livro livro[3];
    int i;

    setlocale(LC_ALL, "Portuguese");
    
    for (i=0;i<3;i++){

        printf("Digite o nome do livro: ");
        gets(livro[i].nome);
        fflush(stdin);

        printf("Digite o autor: ");
        gets(livro[i].autor);
        fflush(stdin);

        printf("Digite a categoria: ");
        gets(livro[i].categoria);
        fflush(stdin);

        printf("Digite o preco: ");
        scanf("%f",&livro[i].preco);
        fflush(stdin);
    }

    system("cls");

    for (i=0;i<3;i++){

        printf("NOME DO LIVRO:%s\n",livro[i].nome);
        printf("AUTOR:%s\n",livro[i].autor);
        printf("CATEGORIA: %s\n",livro[i].categoria);
        printf("PRECO:%.2f\n",livro[i].preco);
         
        printf("\n");
    }
   
    return 0;
}
