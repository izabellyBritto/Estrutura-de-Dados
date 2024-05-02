#include <stdio.h>
#define LINHAS 3
#define COLUNAS 3

int main()
{
    int matriz[LINHAS][COLUNAS];
    int soma = 0;

    printf("Digite os elementos da matriz %dx%d:\n", LINHAS, COLUNAS);
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            soma += matriz[i][j];
        }
    }
    printf("Matriz inserida:\n");
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("A soma de todos os elementos da matriz é: %d\n", soma);
    return 0;
}
