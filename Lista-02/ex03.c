#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7) {
        printf("O nadador está na categoria infantil A\n");
    } else if (idade >= 8 && idade <= 10) {
        printf("O nadador está na categoria infantil B\n");
    } else if (idade >= 11 && idade <= 13) {
        printf("O nadador está na categoria juvenil A\n");
    } else if (idade >= 14 && idade <= 17) {
        printf("O nadador está na categoria juvenil B\n");
    } else if (idade >= 18) {
        printf("O nadador está na categoria adulto\n");
    } else {
        printf("Idade inválida para categorização\n");
    }

    return 0;
}