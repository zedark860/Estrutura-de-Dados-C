#include <stdio.h>
#include <string.h>

typedef struct TipoCelula
{
    int info;
    struct TipoCelula *proximo;
} TipoCelula;

typedef struct
{
    int quantidade;
    TipoCelula *primeiro;
} TipoLista;



void imprime(TipoLista *lista) {
    // apontando para o primeiro elemento 
    TipoCelula *auxiliar = lista->primeiro;

    // lista vazia 
    if(lista->primeiro == NULL) {
        printf("Lista vazia!\n");
    } else {
        // enquanto não chegou no último
        while(auxiliar != NULL) {
            printf(" %d", auxiliar->info); // imprime
            auxiliar = auxiliar->proximo; // passa para o próximo endereço
        }
    }
}

int main () {
    TipoLista *novaLista = malloc(sizeof(TipoLista));
    TipoCelula *cell1 = malloc(sizeof(TipoCelula));
    TipoCelula *cell2 = malloc(sizeof(TipoCelula));
    TipoCelula *cell3 = malloc(sizeof(TipoCelula));

    // atribuindo valores;

    novaLista->primeiro = NULL;
    cell1->info = 1;
    cell2->info = 2;
    cell3->info = 3;

    //encadeando: cell1 -> cell2 -> cell3 -> NULL;

    cell1->proximo = cell2;
    cell2->proximo = cell3;
    cell3->proximo = NULL;
    novaLista->quantidade = 3;

    //[primeiro] -> cell1 -> cell2 -> cell3 -> NULL
    
    novaLista->primeiro = cell1;

    imprime(novaLista);

    return 0;
    
}