#include <stdio.h>

#define TAM 5

int vetor_simetrico(int vet[], int tam)
{
    for (int i = 0; i < tam / 2; i++)
    {
        if (vet[i] != vet[tam - 1 - i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int vetor[TAM];
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < TAM; i++)
    {
        scanf("%d", &vetor[i]);
    }

    if (vetor_simetrico(vetor, TAM))
    {
        printf("O vetor é simétrico.\n");
    }
    else
    {
        printf("O vetor não é simétrico.\n");
    }

    return 0;
}
