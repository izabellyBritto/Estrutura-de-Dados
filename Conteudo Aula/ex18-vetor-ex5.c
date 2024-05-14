#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
    int vetA[N], vetB[N];
    srand(time(NULL));
    for(int i=0; i<N; i++){
        vetA[i]=rand()%51;
    }
    for(int i=0, j=N-1; i<N; i++, j--){
        vetB[j]=vetA[i];
        printf("A[%d]:%2d - B[%d]:%2d\n",i,vetA[i],j,vetB[j]);
    }
}






    
    





