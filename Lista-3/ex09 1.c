#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int encontrar_maior_elemento(int matriz[][COLUNAS])
{
    int maior = matriz[0][0];
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }
        }
    }
    return maior;
}
int main()
{
    int matriz[LINHAS][COLUNAS];
    printf("Digite os elementos da matriz %dx%d:\n", LINHAS, COLUNAS);
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    int maior = encontrar_maior_elemento(matriz);
    printf("O maior elemento da matriz é: %d\n", maior);
    return 0;
}