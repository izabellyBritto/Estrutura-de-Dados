#include <stdio.h>
#define TAMANHO 5

int main()
{
    int vet1[TAMANHO], vet2[TAMANHO];
    int produto_escalar = 0;
    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < TAMANHO; i++)
    {
        scanf("%d", &vet1[i]);
    }
    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < TAMANHO; i++)
    {
        scanf("%d", &vet2[i]);
    }
    for (int i = 0; i < TAMANHO; i++)
    {
        produto_escalar += vet1[i] * vet2[i];
    }
    printf("O produto escalar dos vetores é: %d\n", produto_escalar);
    return 0;
}