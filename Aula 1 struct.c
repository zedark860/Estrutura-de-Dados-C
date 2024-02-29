#include <stdio.h>
#include <string.h>

struct Aluno
{
    char nome[50];
    int idade;
    float nota;
};

void buscar_dados(struct Aluno alunos[], int numAlunos) {
    for(int i = 0; i < numAlunos; i++) {
        printf("\nAluno %d: \n", i+1);
        printf("\nNome %s: \n", alunos[i].nome);
        printf("\nIdade %d: \n", alunos[i].idade);
        printf("\nNome %.2f: \n", alunos[i].nota);
    }
}

int main(){
    struct Aluno alunos[100];
    int numAlunos;

    printf("Digite o número de alunos: ");
    scanf("%d", &numAlunos);

    for(int i = 0; i < numAlunos; i++) {
        printf("\n Digite o nome do aluno %d:", i+1);
        scanf("%s", &alunos[i].nome);

        printf("\n Digite a idade do aluno %d:", i+1);
        scanf("%d", &alunos[i].idade);

        printf("\n Digite a nota do aluno %d:", i+1);
        scanf("%f", &alunos[i].nota);
    }

    printf("\nInformaçoes sobre os alunos\n");

    buscar_dados(alunos, numAlunos);

    return 0;
}