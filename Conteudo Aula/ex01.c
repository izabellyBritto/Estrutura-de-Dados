#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(){
    //Constantes que apresentam os mínimos e máximos em cada tipo inteiro.

    system("clear");    //Limpar tela, utilizando a biblioteca stdlib.h
    
    //Caractere         //implementado na biblioteca limits.h
    printf("Valor mínimo para char: %d\n", CHAR_MIN);
    printf("Valor máximo para char: %d\n\n", CHAR_MAX);
    
    //INTEIRO           //implementado na biblioteca limits.h
    printf("Valor máximo para short: %hd\n", SHRT_MAX);
    printf("Valor mínimo para short: %hd\n\n", SHRT_MIN);
    
    printf("Valor máximo para int: %d\n", INT_MAX);
    printf("Valor mínimo para int: %d\n\n", INT_MIN);
    
    printf("Valor máximo para long: %ld\n", LONG_MAX);
    printf("Valor mínimo para long: %ld\n\n", LONG_MIN);
    
    //REAL              //implementado na biblioteca float.h
    printf("Valor máximo para float: %e\n", FLT_MAX);
    printf("Valor mínimo para float: %e\n\n", FLT_MIN);
    printf("Valor máximo para double: %e\n", DBL_MAX);
    printf("Valor mínimo para double: %e\n", DBL_MIN);
}