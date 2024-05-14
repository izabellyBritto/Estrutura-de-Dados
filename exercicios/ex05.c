#include <stdio.h>
#define N 5

void preencherVetores(int vetor1[], int vetor2[]) {
    printf("Digite %d valores para o vetor A:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor1[i]);
    }
    printf("Digite %d valores para o vetor B:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor2[i]);
    }
}
void encontrarMaior(int vetor1[], int vetor2[], int vetor_resultado[]) {
    for (int i = 0; i < N; i++) {
        vetor_resultado[i] = (vetor1[i] > vetor2[i]) ? vetor1[i] : vetor2[i];
    }
}
void exibirVetor(int vetor[], char nome[]) {
    printf("Valores do vetor %s: ", nome);
    for (int i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
int main() {
    int vetor_A[N], vetor_B[N], vetor_C[N];
    preencherVetores(vetor_A, vetor_B);
    encontrarMaior(vetor_A, vetor_B, vetor_C);
    exibirVetor(vetor_C, "C (Maior valor de A e B)"); 
    return 0;
}