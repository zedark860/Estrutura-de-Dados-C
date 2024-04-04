#include <stdio.h>

#define Num 10

void v_iniciacao(int *vet, int n) {
    for (int i = 0; i < n; i++) {
        vet[i] = 0;
    }
}

void v_imprime(int *vet, int n) {
    for (int i = 0; i < n; i++) {
        printf("\n %d - ", vet[i]);
        printf("\n");
    }
}

int main()
{
    int vet[Num];

    v_iniciacao(vet, Num);

    printf("\nImpressao do vetor antes da atribucao.\n");

    v_imprime(vet, Num);

    for (int i = 0; i < Num; i++) {
        vet[i] = i;
    }

    printf("\nImpressao do vetor apos a atribuicao\n");

    v_imprime(vet, Num);

    return 0;
}
