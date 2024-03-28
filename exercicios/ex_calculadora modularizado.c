#include <stdio.h>

#define MAX_NUMEROS 2 // Defina o tamanho máximo do array

// Procedimentos para criar calculadora

// Declaração das funções

void soma(float numeros[], int max_numeros) {
    printf("\nOperação de Soma\n");
    for (int i = 0; i < max_numeros; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }
    float resultado = numeros[0] + numeros[1];
    printf("O resultado da operacao e: %.2f\n", resultado);
}

void diminuicao(float numeros[], int max_numeros) {
    printf("\nOperação de Diminuicao\n");
    for (int i = 0; i < max_numeros; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }
    float resultado = numeros[0] - numeros[1];
    printf("O resultado da operacao e: %.2f\n", resultado);
}

void multiplicacao(float numeros[], int max_numeros) {
    printf("\nOperação de Multiplicacao\n");
    for (int i = 0; i < max_numeros; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }
    float resultado = numeros[0] * numeros[1];
    printf("O resultado da operacao e: %.2f\n", resultado);
}

void divisao(float numeros[], int max_numeros) {
    printf("\nOperação de Divisao\n");
    for (int i = 0; i < max_numeros; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }
    float resultado;
    if (numeros[1] != 0) {
        resultado = numeros[0] / numeros[1]; 
    } else {
        printf("Erro: Divisao por zero.\n");
        return; 
    }
    printf("O resultado da operacao e: %.2f\n", resultado);
}


int main()
{

    char opcao;
    float numeros[MAX_NUMEROS];
    int num_operacao;

    // loop infinito perguntando se quer adicionar números
    while (1)
    {

        printf("Voce deseja realizar qual processo na calculadora?\n");
        printf("Digite 1 para Soma;\nDigite 2 para Diminuicao;\nDigite 3 para Multiplicacao;\nDigite 4 para Divisao;\n");

        scanf("%d", &num_operacao);

        switch (num_operacao) {
        case 1:
            soma(numeros, MAX_NUMEROS);
            break;
        case 2:
            diminuicao(numeros, MAX_NUMEROS);
            break;
        case 3:
            multiplicacao(numeros, MAX_NUMEROS);
            break;
        case 4:
            divisao(numeros, MAX_NUMEROS);
            break;
        default:
            printf("Opção inválida.\n");
            break;
        }

        printf("\nDeseja realizar outra operacao? Digite (S/N)\n");
        scanf(" %c", &opcao);

        if (opcao == 's' || opcao == 'S') {
            continue;
        } else {
            printf("\nPrograma finalizado!\n");
            break;
        }

    }

    return 0;
}
