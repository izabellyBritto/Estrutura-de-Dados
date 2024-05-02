#include <stdio.h>

int main() {
    int numero;
    float raizQuadrada, quadrado;

    // Solicita ao usuário que insira o número inteiro
    printf("Insira um número inteiro: ");
    scanf("%d", &numero);

    // Calcula a raiz quadrada do número
    raizQuadrada = (float)numero / 2;
    int i; // Movendo a declaração da variável i para fora do loop
    for(i = 0; i < 10; i++) {
        raizQuadrada = (raizQuadrada + (numero / raizQuadrada)) / 2;
    }

    // Calcula o quadrado do número
    quadrado = numero * numero;

    // Imprime a raiz quadrada e o quadrado do número
    printf("Raiz quadrada: %.2f\n", raizQuadrada);
    printf("Quadrado: %.2f\n", quadrado);

    return 0;
}
