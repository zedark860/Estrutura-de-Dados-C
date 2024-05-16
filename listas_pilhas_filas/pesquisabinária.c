#include <stdio.h>
#include <string.h>

int busca_binaria (int lista[], int elemento, int inicio, int fim) {
    if (inicio > fim) {
        return -1;
    }

    int meio = (inicio + fim) / 2;

    if (lista[meio] == elemento) {
        return meio;
    } else if (elemento < lista[meio]) {
        busca_binaria(lista, elemento, inicio, meio-1);
    } else {
        busca_binaria(lista, elemento, meio+1, fim);
    }
}

int main() {
    int lista[9] = {1, 3, 6, 7, 9, 12, 15, 22, 90};
    int elemento = 90;
    int inicio = 0;
    int fim = 8;

    int resultado = busca_binaria(lista, elemento, inicio, fim);

    printf("Resultado da busca binaria: %d\n", resultado);

    printf("Lista: ");
    for (int i = 0; i < 9; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");
    
    return 0;
}