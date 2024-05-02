#include <stdio.h>
#define N 5

void preencherVetor(int vetor[]) {
    printf("Digite %d valores:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }
}

void calcularTabuada(int numero) {
    printf("Tabuada de %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    printf("\n");
}

int main() {
    int vetor[N];
    preencherVetor(vetor);
    
    for (int i = 0; i < N; i++) {
        calcularTabuada(vetor[i]);
    }
    return 0;
}
