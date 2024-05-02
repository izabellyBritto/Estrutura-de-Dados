#include <stdio.h>

int main() {
    int i;
    float a, b, c;

    printf("Digite um valor inteiro e positivo para i: ");
    scanf("%d", &i);
    printf("Digite três valores reais para a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    switch (i) {
        case 1:
            if (a <= b && a <= c) {
                printf("Em ordem crescente: %.2f %.2f %.2f\n", a, (b <= c ? b : c), (b <= c ? c : b));
            } else if (b <= a && b <= c) {
                printf("Em ordem crescente: %.2f %.2f %.2f\n", b, (a <= c ? a : c), (a <= c ? c : a));
            } else {
                printf("Em ordem crescente: %.2f %.2f %.2f\n", c, (a <= b ? a : b), (a <= b ? b : a));
            }
            break;
        case 2:
            if (a >= b && a >= c) {
                printf("Em ordem decrescente: %.2f %.2f %.2f\n", a, (b >= c ? b : c), (b >= c ? c : b));
            } else if (b >= a && b >= c) {
                printf("Em ordem decrescente: %.2f %.2f %.2f\n", b, (a >= c ? a : c), (a >= c ? c : a));
            } else {
                printf("Em ordem decrescente: %.2f %.2f %.2f\n", c, (a >= b ? a : b), (a >= b ? b : a));
            }
            break;
        case 3:
            if (a >= b && a >= c) {
                printf("Em ordem: %.2f %.2f %.2f\n", (b >= c ? b : c), a, (b >= c ? c : b));
            } else if (b >= a && b >= c) {
                printf("Em ordem: %.2f %.2f %.2f\n", (a >= c ? a : c), b, (a >= c ? c : a));
            } else {
                printf("Em ordem: %.2f %.2f %.2f\n", (a >= b ? a : b), c, (a >= b ? b : a));
            }
            break;
        default:
            printf("Valor de i inválido.\n");
    }

    return 0;
}
