#include <stdio.h>

int main() {
    int idade_anos;
    printf("Digite a idade em anos: ");
    scanf("%d", &idade_anos);

    int meses = idade_anos * 12;
    int dias = idade_anos * 365;
    int horas = dias * 24;
    int minutos = horas * 60;

    printf("Idade em meses: %d\n", meses);
    printf("Idade em dias: %d\n", dias);
    printf("Idade em horas: %d\n", horas);
    printf("Idade em minutos: %d\n", minutos);

    return 0;
}
