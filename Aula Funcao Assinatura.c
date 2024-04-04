#include <stdio.h>

int somar(int x, int y); // assinatura

int main()
{
    int soma = somar(1, 4);
    printf("%d", soma);

    return 0;
}

int somar(int x, int y) {
    return x + y;
}
