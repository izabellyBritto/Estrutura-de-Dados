#include <stdio.h>

int main() {
    float numero;
    int parteInteira;
    float parteFracionaria;


    printf("Insira um número real: ");
    scanf("%f", &numero);

    parteInteira = (int)numero;

    
    parteFracionaria = numero - parteInteira;


    int arredondamento;
    if (parteFracionaria >= 0.5)
        arredondamento = parteInteira + 1;
    else
        arredondamento = parteInteira;
        
    printf("Parte inteira: %d\n", parteInteira);
    printf("Parte fracionaria: %.2f\n", parteFracionaria);
    printf("Arredondamento: %d\n", arredondamento);

    return 0;
}
