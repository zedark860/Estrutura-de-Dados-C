#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAXTAM 10

typedef struct {
    int ultimo;
    int elementos[MAXTAM];
} Lista;

Lista inicializa() {
    Lista nova;
    nova.ultimo = 0;
    return nova;
}

void inserir(Lista *list, int valor, int pos){
    if(list->ultimo < MAXTAM) {
        if(pos <= list->ultimo && pos >= 0) {
            for(int i = list->ultimo; i > pos; i--) {
                list->elementos[i] = list->elementos[i-1];
            }
            list->elementos[pos] = valor;
            list->ultimo++;
        } else {
            printf("Posição de inserção inválida!\n");
        }
    } else {
        printf("Lista cheia!\n");
    }
}

void remover(Lista *list, int pos) {
    if(pos <= list->ultimo) {
        for(int i = pos; i < list->ultimo; i++) {
            list->elementos[i] = list->elementos[i+1];
        }
        list->ultimo--;
    } else {
        printf("Posição de remoção inválida!\n");
    }
}

void imprimir(Lista *list) {
    for(int i = 0; i < list->ultimo; i++) {
        printf("%d ", list->elementos[i]);
    }
    printf("\n");
}

int main() {
    Lista lst = inicializa();

    for (int i = 0; i <= MAXTAM; i++) {
        inserir(&lst, rand() % MAXTAM, rand() % (lst.ultimo + 1));
    }

    //printf("Apos insercoes: ");
    imprimir(&lst);

    //remover(&lst, 1);

    for (int i = 0; i <= MAXTAM; i++) {
        remover(&lst, rand() % (lst.ultimo + 1));
    }

    printf("Apos remocao: ");
    imprimir(&lst);

    return 0;
}

