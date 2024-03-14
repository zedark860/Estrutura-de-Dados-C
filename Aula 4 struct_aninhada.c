#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct {
    int codigo;
    char nome[200];
    struct {
        int dia;
        int mes;
        int ano;
    } data_nascimento;
} Aluno;

void apresentar_infos(Aluno aluno) {
    printf("\nO código do aluno é: %d", aluno.codigo);
    printf("\nO nome do aluno é: %s", aluno.nome);
    printf("\nA data de nascimento do aluno é: %d / %d / %d", aluno.data_nascimento.dia, aluno.data_nascimento.mes, aluno.data_nascimento.ano);
    printf("\n\n");
}

void pegar_infos(Aluno *aluno) {
	strcpy(aluno->nome, "NULL");
    printf("Digite o código do aluno: ");
    scanf("%d", &aluno->codigo);
    printf("Digite o nome do aluno: ");
    getchar(); // Limpar o buffer de entrada
    fgets(aluno->nome, sizeof(aluno->nome), stdin);
    strtok(aluno->nome, "\n"); // Remover o \n do final da string
    printf("Digite o dia do nascimento do aluno: ");
    scanf("%d", &aluno->data_nascimento.dia);
    printf("Digite o mês do nascimento do aluno: ");
    scanf("%d", &aluno->data_nascimento.mes);
    printf("Digite o ano do nascimento do aluno: ");
    scanf("%d", &aluno->data_nascimento.ano);
}

int main(void) {
    setlocale(LC_ALL, "portuguese");
    Aluno aluno;
    apresentar_infos(aluno);
    pegar_infos(&aluno);
	apresentar_infos(aluno);
    system("pause");
    return 0;
}
