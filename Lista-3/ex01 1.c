#include <stdio.h>

int main()
{
    int numeros[] = {2, 3, 6, 8, 10};
    int pares = 0;
    for (int i = 0; i < sizeof(numeros) / sizeof(numeros[0]); i++)
    {
        if (numeros[i] % 2 == 0)
        {
            pares++;
        }
    }
    printf("A lista possui %d números pares.\n", pares);
    return 0;
}