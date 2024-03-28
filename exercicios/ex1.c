// Crie um programa em C para coletar 3 notas de aluno e verificar de acordo com a média do aluno, se o aluno está aprovado, reprovado ou em prova final. Para realizar a verificação você deve levar em conta as seguintes observações.

// Nota > 7.0 -> aprovado

// Nota entre 5.0 e 6.9 -> prova final

// Nota < 5.0 -> reprovado

#define num_aluno 10
#define qt_notas 3

typedef struct
{
    float nota;
    float media;
} Aluno;

void pedir_notas(Aluno *nota) {
    for (int i=0; i < num_aluno; i++) {
        float soma = 0;
        for (int j=0; j < qt_notas; j++) {
            printf("Digite a sua nota %d Aluno %d: \n", j+1, i+1);
            scanf("%f", &nota[i].nota);
            soma += nota[i].nota;
            nota[i].media = soma / 3.0;
        }
    if(nota[i].media >= 7.0){
        printf("Aprovado! Sua media final e %2.f\n", nota[i].media);
    } else if(nota[i].media > 5.0 && nota[i].media < 7.0) {
        printf("Voce está em prova final! Sua media e %2.f\n", nota[i].media);
    } else {
        printf("Voce está reprovado! Sua media final e %2.f\n", nota[i].media);
    }
    }
}

#include <stdio.h>

int main()
{
    Aluno nota[qt_notas];

    pedir_notas(nota);

    return 0;
}
