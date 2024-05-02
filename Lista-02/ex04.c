#include <stdio.h>

int main() {
    int codigo;
    float preco_unitario;
    int quantidade;

    printf("Digite o código do item pedido: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    switch(codigo) {
        case 100:
            preco_unitario = 1.20;
            break;
        case 101:
            preco_unitario = 1.30;
            break;
        case 102:
            preco_unitario = 1.50;
            break;
        case 103:
            preco_unitario = 1.20;
            break;
        case 104:
            preco_unitario = 1.30;
            break;
        case 105:
            preco_unitario = 1.00;
            break;
        default:
            printf("Código inválido\n");
            return 1;
    }

    float valor_total = preco_unitario * quantidade;

    printf("Valor a ser pago: R$ %.2f\n", valor_total);

    return 0;
}
