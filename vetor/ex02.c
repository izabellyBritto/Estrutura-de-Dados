#include <stdio.h>
#define N 5

void preencherVetor(int vetor[]) {
    printf("Digite %d valores:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }
}
void encontrarMaiorMenor(int vetor[], int *maior, int *menor) {
    *maior = *menor = vetor[0];
    for (int i = 1; i < N; i++) {
        if (vetor[i] > *maior) {
            *maior = vetor[i];
        }
        if (vetor[i] < *menor) {
            *menor = vetor[i];
        }
    }
}

int main() {
    int vetor[N];
    int maior, menor;

    preencherVetor(vetor);
    encontrarMaiorMenor(vetor, &maior, &menor);
    printf("O maior valor é: %d\n", maior);
    printf("O menor valor é: %d\n", menor);
    return 0;
}
