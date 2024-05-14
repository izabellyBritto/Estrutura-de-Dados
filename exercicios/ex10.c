#include <stdio.h>
int main() {
    int linhas, espacos, numeros, linha_atual = 1;
    printf("Digite o número de linhas da pirâmide: ");
    scanf("%d", &linhas);
    for (linha_atual = 1; linha_atual <= linhas; linha_atual++) {
        for (espacos = 1; espacos <= linhas - linha_atual; espacos++) {
            printf("  ");
        }
        for (numeros = 1; numeros <= linha_atual; numeros++) {
            printf("%d ", numeros);
        }
        for (numeros = linha_atual - 1; numeros >= 1; numeros--) {
            printf("%d ", numeros);
        }
        printf("\n");
    }
    return 0;
}
