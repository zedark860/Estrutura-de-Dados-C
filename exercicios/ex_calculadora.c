#include <stdio.h>

#define MAX_NUMEROS 2 // Defina o tamanho máximo do array

// Procedimentos para criar calculadora

// Receber escolha do usuário para qual conta quer realizar

// loop infinito perguntando se quer adicionar números

// precisa ter soma

// precisa ter diminuição

// precisa ter multiplicação

// precisa ter divisão


int main()
{

    char opcao;
    float numeros[MAX_NUMEROS];
    int contador_numeros = 0;
    int num_operacao;

    while (1)
    {
        float resultado = 0;

        printf("Voce deseja realizar qual processo na calculadora?\n");
        printf("Digite 1 para Soma;\nDigite 2 para Diminuicao;\nDigite 3 para Multiplicacao;\nDigite 4 para Divisao;\n");

        scanf("%d", &num_operacao);

        switch (num_operacao) {
        case 1:
            printf("\nOperação de Soma\n");
            for (int i = 0; i < MAX_NUMEROS; i++) {
                printf("Digite o numero %d: ", i + 1);
                scanf("%f", &numeros[i]);
            }
            resultado = numeros[0] + numeros[1];
            printf("O resultado da operacao e: %.2f\n", resultado);
            break;
        case 2:
            printf("\nOperação de Diminuicao\n");
            for (int i = 0; i < MAX_NUMEROS; i++) {
                printf("Digite o numero %d: ", i + 1);
                scanf("%f", &numeros[i]);
            }
            resultado = numeros[0] - numeros[1];
            printf("O resultado da operacao e: %.2f\n", resultado);
            break;
        case 3:
            printf("\nOperação de Multiplicacao\n");
            for (int i = 0; i < MAX_NUMEROS; i++) {
                printf("Digite o numero %d: ", i + 1);
                scanf("%f", &numeros[i]);
            }
            resultado = numeros[0] * numeros[1];
            printf("O resultado da operacao e: %.2f\n", resultado);
            break;
        case 4:
            printf("\nOperação de Divisao\n");
            for (int i = 0; i < MAX_NUMEROS; i++) {
                printf("Digite o numero %d: ", i + 1);
                scanf("%f", &numeros[i]);
            }
            if (numeros[1] != 0) 
                resultado = numeros[0] / numeros[1]; 
            else {
                printf("Erro: Divisao por zero.\n");
                return 1; 
            }
            printf("O resultado da operacao e: %.2f\n", resultado);
            break;
        default:
            printf("Opção inválida.\n");
            break;
        }

        printf("Deseja realizar outra operacao? Digite (S/N)");
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
