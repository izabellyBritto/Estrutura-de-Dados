#include <stdio.h>
#define TAM 5

int ordenado_crescente(int vet[], int tam)
{
    for (int i = 0; i < tam - 1; i++)
    {
        if (vet[i] > vet[i + 1])
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
    if (ordenado_crescente(vetor, TAM))
    {
        printf("O vetor está ordenado de forma crescente.\n");
    }
    else
    {
        printf("O vetor não está ordenado de forma crescente.\n");
    }
    return 0;
}
