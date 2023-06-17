#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//Crie um programa usando Struct com as informacoes abaixo:  Nome 
//Idade 
//Peso 
//Altura 
//Utilize os dados informados para solicitar estas informações de 5 usuarios. Utilize vetor. 
// Mostre os dados do usuario.

struct ficha_pessoa{

    char nome[250];
    int idade;
    float peso,altura;
    
};

int main(){

    setlocale(LC_ALL, "Portuguese");

    struct ficha_pessoa pessoa[5];
    int i;

    for (i=0;i<5;i++){

        
        printf("Digite o nome:\n ");
        gets(pessoa[i].nome);
        fflush(stdin);

        printf("Digite a idade:\n ");
        scanf("%d",&pessoa[i].idade);
        fflush(stdin);

        printf("Digite o peso:\n ");
        scanf("%f",&pessoa[i].peso);
        fflush(stdin);

        printf("Digite a altura:\n ");
        scanf("%f",&pessoa[i].altura);
        fflush(stdin);
    

        system("cls");

    }

    for (i=0;i<5;i++){

        
        printf("Nome:%s\n",pessoa[i].nome);
        printf("Idade:%d\n",pessoa[i].idade);
        printf("Peso:%.0f\n",pessoa[i].peso);
        printf("Altura:%f\n",pessoa[i].altura);
        
        printf("\n");
        

    }

    return 0;
}