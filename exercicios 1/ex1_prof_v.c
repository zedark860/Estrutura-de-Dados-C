
#define num_aluno 10
#define qt_notas 3

#include <stdio.h>

struct Aluno
{
    float nota1;
    float nota2;
    float nota3;
};


int main()
{
    struct Aluno alunos[num_aluno];
    float media;

    for (int i=0; i < num_aluno; i++) {
        printf("Digite as suas notas Aluno %d: \n", i+1);
        printf("Digite sua nota %d: \n", i+1);
        scanf("%f", &alunos[i].nota1);
        printf("Digite sua nota %d: \n", i+1);
        scanf("%f", &alunos[i].nota2);
        printf("Digite sua nota %d: \n", i+1);
        scanf("%f", &alunos[i].nota3);
    }

    for (int i=0; i < num_aluno; i++) {
        media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / qt_notas;
        if(media >= 7.0){
            printf("Aprovado! Sua media final e %2.f\n Aluno %d", media, i+1);
        } else if(media > 5.0 && media < 7.0) {
            printf("Voce está em prova final! Sua media e %2.f\n Aluno %d", media, i+1);
        } else {
            printf("Voce está reprovado! Sua media final e %2.f\n Aluno %d", media, i+1);
        }

    }

    return 0;
}
