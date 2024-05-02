#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    if (a % b == 0 || b % a == 0) {
        printf("São múltiplos\n");
    } else {
        printf("Não são múltiplos\n");
    }

    return 0;
}
