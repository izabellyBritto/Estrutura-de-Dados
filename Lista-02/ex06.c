#include <stdio.h>

int main() {
    int codigo_produto;
    float preco_unitario;
    int quantidade;

    float tabela_precos[5] = {5.32, 6.45, 2.37, 5.32, 6.45};

    printf("Digite o código do produto: ");
    scanf("%d", &codigo_produto);
    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);

    switch (codigo_produto) {
        case 1001:
            preco_unitario = tabela_precos[0];
            break;
        case 1324:
            preco_unitario = tabela_precos[1];
            break;
        case 6548:
            preco_unitario = tabela_precos[2];
            break;
        case 987:
            preco_unitario = tabela_precos[3];
            break;
        case 7623:
            preco_unitario = tabela_precos[4];
            break;
        default:
            printf("Código de produto inválido.\n");
            return 1;
    }

    float preco_total = preco_unitario * quantidade;

    printf("Preço total devido: R$ %.2f\n", preco_total);

    return 0;
}
