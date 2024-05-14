#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    //Entrada de dados usando scanf();
    
    system("clear");                    //Limpar tela
    short idade, dobroIdade;            //declaração das variáveis
    printf("Digite a sua idade: ");     //saída para usuário
    scanf("%hd",&idade);                //entrada de dados
    dobroIdade = idade*2;               //manipulação dos dados (processamento)
    printf("O dobro da idade é: %hd\n\n",dobroIdade);   //saída do resultado
}