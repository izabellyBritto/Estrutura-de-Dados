#include <stdio.h>

int main() {
    int idade_em_dias, anos, meses, dias;

    
    printf("Digite a idade da pessoa em dias: ");
    scanf("%d", &idade_em_dias);

    anos = idade_em_dias / 365;

    int dias_restantes = idade_em_dias % 365;
    
    meses = dias_restantes / 30;

    dias = dias_restantes % 30;

    printf("A idade da pessoa expressa em anos, meses e dias é: %d anos, %d meses e %d dias\n", anos, meses, dias);

    return 0;
}
