#include <stdio.h>
#include <string.h>
#include "pessoa.h"

#define MAX_PESSOAS 3

int main() {
    // Declaração de um array de Pessoas para armazenar múltiplas pessoas
    struct Pessoa pessoas[MAX_PESSOAS];

    // Preenchendo dados para cada pessoa
    strcpy(pessoas[0].nome, "Joao");
    pessoas[0].idade = 30;
    pessoas[0].altura = 1.75;

    strcpy(pessoas[1].nome, "Maria");
    pessoas[1].idade = 25;
    pessoas[1].altura = 1.60;

    strcpy(pessoas[2].nome, "Pedro");
    pessoas[2].idade = 40;
    pessoas[2].altura = 1.80;

    // Exibindo dados de cada pessoa
    for (int i = 0; i < MAX_PESSOAS; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Idade: %d\n", pessoas[i].idade);
        printf("Altura: %.2f\n", pessoas[i].altura);
        printf("\n");
    }

    return 0;
}