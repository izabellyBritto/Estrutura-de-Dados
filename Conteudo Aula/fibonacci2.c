#include <stdio.h>

int fibonacci(int n);

int main(){
    int n;
    printf("Digite a quantidade de números: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        printf("%d ",fibonacci(i));
}

int fibonacci(int n){
    if(n==0 || n==1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}