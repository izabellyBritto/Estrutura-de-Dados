#include <stdio.h>

void preencher(int *pnum1, int *pnum2);

int main(){
    int num1, num2;
    preencher(&num1, &num2);
    printf("Num1: %d\n",num1);
    printf("Num2: %d\n",num2);
}

void preencher(int *pnum1, int *pnum2){
    printf("Digite o valor: ");
    scanf("%d",pnum1);
    scanf("%d",&*pnum2);
}