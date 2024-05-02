#include <stdio.h>
#define TAM 5

int contem_valor(int vet[], int tam, int valor)
{
    for (int i = 0; i < tam; i++)
    {
        if (vet[i] == valor)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int vetor[TAM];
    int valor;
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < TAM; i++)
    {
        scanf("%d", &vetor[i]);
    }
    printf("Digite o valor a ser buscado:\n");
    scanf("%d", &valor);
    if (contem_valor(vetor, TAM, valor))
    {
        printf("O valor %d está presente no vetor.\n", valor);
    }
    else
    {
        printf("O valor %d não está presente no vetor.\n", valor);
    }
    return 0;
}