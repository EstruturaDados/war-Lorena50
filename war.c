#include<stdio.h> 
#include<string.h>

// --- Constantes Globais ---
#define Max_Territorios 5

struct Territorio {
    char nome[30];
    char cor[10];
    int tropas [2];
};

 int main(){
    struct Territorio mapa[Max_Territorios];
    int total_territorios = 0;

    printf("Desafio War\n");

 
    printf("-------------------------------------------------------------\n");
    printf("Vamos cadastrar os 5 territorios iniciais do nosso mundo.\n");
    while (Max_Territorios<=5)
    {
       printf("---Cadastrando Territorio 1---\n");
       printf("Nome do Territorio: ");
       fgets(mapa[total_territorios].nome, 30,stdin);
       printf("Cor do Exercito: ");
       fgets(mapa[total_territorios].cor, 10,stdin);
       printf("Numero de tropas: ");
       scanf("%d", &mapa[total_territorios].tropas);

       total_territorios++;

       printf("\nTerritorio cadastrado com sucesso!\n\n");

    }
    

    {
        /* code */
    }
    




 }
