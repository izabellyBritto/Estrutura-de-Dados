#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int comparar(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int vetor[TAM];
    printf("Digite os %d elementos do vetor:\n", TAM);
    for (int i = 0; i < TAM; i++)
    {
        scanf("%d", &vetor[i]);
    }
    qsort(vetor, TAM, sizeof(int), comparar);
    printf("Vetor ordenado em ordem crescente:\n");
    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}