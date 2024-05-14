#include <stdio.h>

int main(){
    int i, numero;
    printf("Digite o número: ");
    scanf("%d",&numero);
    for(i=1;i<11;i++){
        printf("%2d x %2d =  %3d\n", numero, i, numero*i);    
    }
}