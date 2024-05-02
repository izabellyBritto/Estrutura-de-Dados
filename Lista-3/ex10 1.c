#include <stdio.h>
#include <stdbool.h>
#define DIMENSAO 3

bool eh_identidade(int m[][DIMENSAO])
{
    for (int i = 0; i < DIMENSAO; i++)
    {
        for (int j = 0; j < DIMENSAO; j++)
        {
            if ((i == j && m[i][j] != 1) || (i != j && m[i][j] != 0))
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int mat[DIMENSAO][DIMENSAO];
    printf("Digite os elementos da matriz %dx%d:\n", DIMENSAO, DIMENSAO);
    for (int i = 0; i < DIMENSAO; i++)
    {
        for (int j = 0; j < DIMENSAO; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    if (eh_identidade(mat))
    {
        printf("A matriz é uma matriz identidade.\n");
    }
    else
    {
        printf("A matriz não é uma matriz identidade.\n");
    }
    return 0;
}