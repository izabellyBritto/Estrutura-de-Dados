#include <stdio.h>
#include <string.h>
#define N 3
struct Aluno
{
    int codigo;
    char nome[10];
    float media;
};
int main()
{
    struct Aluno alunos[N];
    for (int i = 0; i < N; i++)
    {
        printf("Código: ");
        scanf("%d", &alunos[i].codigo);
        printf("Nome: ");
        fflush(stdin);
        gets(alunos[i].nome);   //arriscado usar
        printf("Média: ");
        scanf("%g", &alunos[i].media);
    }
    printf("---------------\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d - Código: %d\n", i+1, alunos[i].codigo);
        printf("%d - Nome: %s\n", i+1, alunos[i].nome);
        printf("%d - Média: %g\n", i+1, alunos[i].media);
    }
}