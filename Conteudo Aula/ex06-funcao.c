#include <stdio.h>

//Protótipos
void menu();
void imprimirValor(int num);
float retornarPI(void);
int soma(int n1, int n2);

int main(){
    int num = 5, resposta;
    menu();
    imprimirValor(num);
    printf("PI = %g\n",retornarPI());
    resposta = soma(3,4);
}

void menu(){
    printf("============== M E N U ================\n");
}
void imprimirValor(int num){
    num *= 5;
    printf("%d\n",num);
}
float retornarPI(void){
    return 3.14159;
}
int soma(int n1, int n2){
    return n1+n2;
}