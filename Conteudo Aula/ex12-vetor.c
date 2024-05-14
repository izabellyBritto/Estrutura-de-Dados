#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(){
    int vetor1[N]={10,34,21,50,9};
    int vetor2[N];
    int vetor3[N];
    int vetor4[N];
    vetor2[0]=10;
    vetor2[2]=21;
    vetor2[4]=9;
    vetor2[1]=34;
    vetor2[3]=50;
   /* for(int i=0; i<N; i++){
        printf("vetor[%d]: ",i);
        scanf("%d",&vetor3[i]);
    }*/
    for(int i=0; i<N; i++){
        vetor4[i]=rand()%11;
        printf("vetor4[%d]: %d\n",i,vetor4[i]);
    }
}