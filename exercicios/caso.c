#include <stdio.h>

int fatorial(int num);
int verificaPrimo(int num);
int potencia(int x, int y);
void tabuada(int num);

int main() {
    int opcao, num, resultado;

    do {
        printf("\nMenu:\n");
        printf("1. Fatorial\n");
        printf("2. Verificar Primo\n");
        printf("3. Potencia\n");
        printf("4. Tabuada\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite um numero para calcular o fatorial: ");
                scanf("%d", &num);
                resultado = fatorial(num);
                printf("O fatorial de %d é %d\n", num, resultado);
                break;
            case 2:
                printf("Digite um numero para verificar se é primo: ");
                scanf("%d", &num);
                resultado = verificaPrimo(num);
                if (resultado == 1)
                    printf("%d é primo\n", num);
                else
                    printf("%d nao é primo. É divisível por %d\n", num, resultado);
                break;
            case 3: {
                int x, y;
                printf("Digite dois numeros para calcular a potencia (x^y): ");
                scanf("%d %d", &x, &y);
                resultado = potencia(x, y);
                printf("%d elevado a %d é %d\n", x, y, resultado);
                break;
            }
            case 4:
                printf("Digite um numero para gerar sua tabuada: ");
                scanf("%d", &num);
                tabuada(num);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}

int fatorial(int num) {
    if (num == 0)
        return 1;
    else
        return num * fatorial(num - 1);
}

int verificaPrimo(int num) {
    int i;
    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0)
            return i;
    }
    return 1;
}

int potencia(int x, int y) {
    int resultado = 1;
    int i;
    for (i = 0; i < y; ++i) {
        resultado *= x;
    }
    return resultado;
}

void tabuada(int num) {
    int i;
    for (i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}
