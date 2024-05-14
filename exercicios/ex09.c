#include <stdio.h>

double potencia(double base, int expoente) {
    double resultado = 1.0;
    if (expoente < 0) {
        base = 1 / base;
        expoente = -expoente;
    }
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}
int main() {
    double base, resultado;
    int expoente;
    printf("Digite a base: ");
    scanf("%lf", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);
    resultado = potencia(base, expoente);
    printf("%.2lf elevado a %d é igual a %.2lf\n", base, expoente, resultado);
    return 0;
}