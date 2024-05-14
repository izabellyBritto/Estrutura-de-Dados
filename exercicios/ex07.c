#include <stdio.h>
int main() {
    printf("Números ímpares de 1 a 50:\n");
    for (int i = 1; i <= 50; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}