#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a[5];
    int b[5];
    int c[10];
    int i;

    srand(time(NULL));

    for (i = 0; i < 5; i++) {
    a[i] = rand() % 100 + 1;
    }
    for (i = 0; i < 5; i++) {
    c[i] = a[i];
    b[i] = rand() % 100 + 1;
    }
    for (i = 5; i < 10; i++) {
    c[i] = b[i - 5];
    }

    printf("Vetor a: ");
    for (i = 0; i < 5; i++) {
    printf("%d ", a[i]);
    }

    printf("\n");
    printf("Vetor b: ");
    for (i = 0; i < 5; i++) {
    printf("%d ", b[i]);
    }

    printf("\n");
    printf("Vetor c: ");
    for (i = 0; i < 10; i++) {
    printf("%d ", c[i]);
    }
    
    printf("\n");
    return 0;
}
