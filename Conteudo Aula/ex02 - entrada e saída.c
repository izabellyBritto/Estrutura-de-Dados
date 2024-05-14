#include <stdio.h>

int main(){
    //Saída padrão usando printf("");
    printf("Texto = string\n");
    printf("Quebra de texto: \n");
    printf("\t\t\tTabulação: ");
    printf("Tipos de dados: \n");
    printf("inteiro short:  %hd\n", 123);
    printf("inteiro int:    %d\n" ,  234);
    printf("inteiro long:   %ld\n", 345);
    printf("real float:     %f\n" ,  12.3);
    printf("real float:     %.2f\n" ,  12.3);
    printf("real float:     %g\n" ,  12.3);
    printf("real double:    %lf\n", 23.5);
    printf("real double:    %g\n", 23.5);   
    printf("caractere char: %c\n" , 'x');
}