#include <stdio.h>

int main() {
    float deposito, taxa_juros, rendimento, valor_total;

    // recebe o valor do depósito e taxa de juros
    printf("Digite o valor do depósito: ");
    scanf("%f", &deposito);
    printf("Digite a taxa de juros (em porcentagem): ");
    scanf("%f", &taxa_juros);

    // calculo  do rendimento e o valor total
    rendimento = deposito * (taxa_juros / 100);
    valor_total = deposito + rendimento;

    // imprime o valor do rendimento e valor total após o rendimento
    printf("O valor do rendimento é: %.2f\n", rendimento);
    printf("O valor total após o rendimento é: %.2f\n", valor_total);

    return 0;
}
