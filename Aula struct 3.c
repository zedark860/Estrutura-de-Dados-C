#include <stdio.h>   // Inclui a biblioteca padrão de entrada e saída
#include <stdlib.h>  // Inclui a biblioteca padrão do sistema para usar a função system()

// Definição da estrutura 'ficha_de_aluno' com quatro campos: nome, disciplina, nota da prova 1 e nota da prova 2
struct ficha_de_aluno {
    char nome[50];        // Nome do aluno
    char disciplina[30];  // Disciplina do aluno
    float nota_prova1;    // Nota da prova 1
    float nota_prova2;    // Nota da prova 2
};

// Função para cadastrar um aluno
void cadastrar_aluno(struct ficha_de_aluno *aluno) {
    printf("\nCadastro de Aluno\n");
    printf("Nome aluno: ");
    fgets(aluno->nome, sizeof(aluno->nome), stdin);  // Lê o nome do aluno
    printf("Disciplina: ");
    fgets(aluno->disciplina, sizeof(aluno->disciplina), stdin);  // Lê a disciplina do aluno
    printf("Informe a 1a nota: ");
    scanf("%f", &aluno->nota_prova1);  // Lê a nota da prova 1
    printf("Informe a 2a nota: ");
    scanf("%f", &aluno->nota_prova2);  // Lê a nota da prova 2
}

// Função para exibir os dados de um aluno
void exibir_aluno(struct ficha_de_aluno aluno) {
    printf("\nLendo dados da struct\n");
    printf("Nome: %s", aluno.nome);  // Exibe o nome do aluno
    printf("Disciplina: %s", aluno.disciplina);  // Exibe a disciplina do aluno
    printf("Nota da prova 1: %.2f\n", aluno.nota_prova1);  // Exibe a nota da prova 1
    printf("Nota da prova 2: %.2f\n", aluno.nota_prova2);  // Exibe a nota da prova 2
}

// Função principal
int main(void) {
    struct ficha_de_aluno aluno;  // Declaração de uma variável do tipo ficha_de_aluno
    cadastrar_aluno(&aluno);  // Chama a função para cadastrar um aluno, passando o endereço da variável aluno
    exibir_aluno(aluno);  // Chama a função para exibir os dados de um aluno, passando a variável aluno
    return 0;
}
