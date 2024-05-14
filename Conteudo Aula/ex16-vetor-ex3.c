#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
    int vet[N];
    srand(time(NULL));
    for(int i=0; i<N; i++){
        vet[i]=rand()%51;
        printf("-------- Tabuada do %d --------\n",vet[i]);
        for(int j=1 ; j<11 ; j++)
            printf("%2d x %2d = %3d\n",vet[i],j,vet[i]*j);
    }
}