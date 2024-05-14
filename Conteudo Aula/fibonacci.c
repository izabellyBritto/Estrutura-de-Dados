#include <stdio.h>

int main()
{
    int a, b, c, n = 10;
    a=0;
    b=1;
    c=a+b;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", c);
        c = a + b;
        a = b;
        b = c;
    }
}