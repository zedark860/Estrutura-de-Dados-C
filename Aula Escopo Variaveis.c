#include <stdio.h>

int num; // variável global
num = 20;

void mostrar_num(int numero) { // parametro formal
    printf(" %d", numero); // parametro locais para a função e chamada dela
}

int main () {
    int num; // variável local
    num = 10;
    printf("O valor da variavel num: %d", num);

    mostrar_num(num);
    return 0;
}
