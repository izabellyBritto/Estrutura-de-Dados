#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
    int vetA[N],vetB[N],vetC[N];
    srand(time(NULL));
    for(int i=0; i<N; i++){
        vetA[i]=rand()%51;
        vetB[i]=rand()%51;
        vetC[i] = vetA[i]+vetB[i];
        printf("%2d + %2d = %3d\n",vetA[i],vetB[i],vetC[i]);
    }
}