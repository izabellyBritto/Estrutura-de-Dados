#include <stdio.h>

int main() {
    float base_maior, base_menor, altura, area;

    printf("Digite o comprimento da base maior do trapézio: ");
    scanf("%f", &base_maior);

    printf("Digite o comprimento da base menor do trapézio: ");
    scanf("%f", &base_menor);

    printf("Digite a altura do trapézio: ");
    scanf("%f", &altura);

    area = ((base_maior + base_menor) * altura) / 2;

    printf("A área do trapézio é: %.2f\n", area);

    return 0;
}
