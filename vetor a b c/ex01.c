#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a[5];
    int b[5];

    srand(time(NULL));
    
    for (int i = 0; i < 5; i++) {
    a[i] = rand() % 2001;
    b[4 - i] = a[i];
    }
    printf("Vetor a: ");
    for (int i = 0; i < 5; i++)

    printf("%d ", a[i]);
    printf("\n");
    printf("Vetor b : ");

    for (int i = 0; i < 5; i++)
    printf("%d ", b[i]);

    printf("\n");
    return 0;
}
