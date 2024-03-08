#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída
#include <stdlib.h> // Inclui a biblioteca padrão do sistema para usar a função system()

// Definição da estrutura 'aluno' com três campos: número de matrícula, array de notas e média
struct aluno {
    int v_nmat;       // Número de matrícula
    float v_nota[3];  // Array de notas
    float v_media;    // Média das notas
};

// Função para calcular as informações do aluno
void puxar_infos(struct aluno *Felipe) {
    // Define o número de matrícula do aluno
    Felipe->v_nmat = 120;

    // Array de notas do aluno
    float notas[3] = {8.8, 7.2, 8.4};

    // Calcula o número de elementos no array de notas
    int num_notas = sizeof(notas) / sizeof(float);

    // Variável para armazenar a soma das notas
    float soma_notas = 0.0;

    // Loop para percorrer as notas e calcular a média
    for (int i = 0; i < 3; i++) {
        // Atribui cada nota do array de notas à estrutura do aluno
        Felipe->v_nota[i] = notas[i];
        // Soma as notas para calcular a média
        soma_notas += notas[i];
    }

    // Calcula a média das notas
    Felipe->v_media = soma_notas / num_notas;

    // Imprime as informações do aluno
    printf("Matrícula %i\n", Felipe->v_nmat);
    printf("Média %.2f\n", Felipe->v_media);

    // Pausa a execução do programa para visualização das informações (funciona apenas em sistemas Windows)
    system("pause");
}

// Função principal
int main() {
    // Declaração de uma variável do tipo aluno
    struct aluno Felipe;
    // Chama a função para calcular as informações do aluno, passando o endereço da variável Felipe
    puxar_infos(&Felipe);
    return 0;
}
