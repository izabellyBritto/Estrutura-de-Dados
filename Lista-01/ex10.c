#include <stdio.h>

int main() {
    float salario, imposto;

    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);

    imposto = salario * 0.05;

    printf("O valor do imposto de renda a ser pago é: R$%.2f\n", imposto);

    return 0;
}
