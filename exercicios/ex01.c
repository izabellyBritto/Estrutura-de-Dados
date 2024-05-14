#include <stdio.h>
#define N 5

void preencherVetor(int vetor[]) {
    printf("Digite %d valores:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }
}
float calcularMedia(int vetor[]) {
    float soma = 0;
    for (int i = 0; i < N; i++) {
        soma += vetor[i];
    }
    return soma / N;
}
int main() {
    int vetor[N];
    preencherVetor(vetor);
    float media = calcularMedia(vetor);
    printf("A média dos valores é: %.2f\n", media);
    return 0;
}