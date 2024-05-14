#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

int main(){
    int vet[N], maior, menor;
    srand(time(NULL));
    for(int i=0; i<N; i++){
        vet[i]=rand()%51;
        printf("%d\n",vet[i]);
    }
    menor = maior = vet[0];
    for(int i=1; i<N; i++){
        menor = vet[i]<menor?vet[i]:menor;
        maior = vet[i]>maior?vet[i]:maior;
    }
    printf("Maior: %d\n",maior);
    printf("Menor: %d\n",menor);
}