#include <stdio.h>
//utilizando comando interno #define para definir a quantidade de países e estruturar "Pais" para armazenar os atributos dos países para alterar o valor de uma constante em um único lugar
//o typedef é usado para dar um nome alternativo a um tipo de dado, combinado com "struct", permite simplificar o uso do tipo estrutura.
#define numerodepaises 4


typedef struct {
    char nome[50];
    int populacao;    // em milhões
    float area;       // em mil km²
    float pib;        // em trilhões de dólares
    int idh;          // índice de 0 a 100
} Pais; //inserindo o nome da estrutura

int main() {
    Pais paises[numerodepaises];

    printf("Adicionando os Países\n");
    printf("Por favor, insira os atributos dos %d países.\n", numerodepaises);

    // Juntando os dados dos países
    for (int i = 0; i < numerodepaises; i) {
        printf("País %d:\n", i + 1);
        
        printf("Nome: ");
        scanf(" %[^\n]s", paises[i].nome); // %[^\n] permite ler strings com espaços
        
        printf("População (em milhões): ");
        scanf("%d", &paises[i].populacao);
        
        printf("Área (em mil km²): ");
        scanf("%f", &paises[i].area);
        
        printf("PIB (em trilhões de dólares): ");
        scanf("%f", &paises[i].pib);
        
        printf("IDH (índice de 0 a 100): ");
        scanf("%d", &paises[i].idh);

        printf("\n");
    }

    // Exibição dos dados cadastrados
    printf("\nCartas Cadastradas:\n");
    printf("--------------------\n");
    for (int i = 0; i < numerodepaises; i) {
        printf("País %d:\n", i + 1);
        printf("Nome: %s\n", paises[i].nome);
        printf("População: %d milhões\n", paises[i].populacao);
        printf("Área: %.2f mil km²\n", paises[i].area);
        printf("PIB: %.2f trilhões de dólares\n", paises[i].pib);
        printf("IDH: %d\n", paises[i].idh);
        printf("--------------------\n");
    }

    return 0;
}