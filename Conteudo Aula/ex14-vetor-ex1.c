#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
    int vet[N];
    float media=0;
    srand(time(NULL));
    for(int i=0; i<N; i++){
        vet[i]=rand()%51;
        printf("%d\n",vet[i]);
        media+=vet[i];
    }
    printf("Média: %g\n",media/N);
}