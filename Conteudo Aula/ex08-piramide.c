#include <stdio.h>
//#define N 10

int main(){
    int n;
    printf("Digite a altura da pirâmide entre 1 e 20: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=i-1; j<=n; j++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("%d ",i);
        } 
        printf("\n");
    }
}