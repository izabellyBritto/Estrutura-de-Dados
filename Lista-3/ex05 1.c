#include <stdio.h>
#define TAM 5

void substituir_negativos_por_zero(int vet[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        if (vet[i] < 0)
        {
            vet[i] = 0;
        }
    }
}
int main()
{
    int vetor[TAM];
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < TAM; i++)
    {
        scanf("%d", &vetor[i]);
    }
    substituir_negativos_por_zero(vetor, TAM);
    printf("Vetor modificado:\n");
    for (int i = 0; i < TAM; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}