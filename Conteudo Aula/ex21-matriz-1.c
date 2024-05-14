#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4

/*
Soma das linhas da matriz
Soma das colunas
média da diagonal principal
maior valor da matriz
os valores da diagonal secundária*/

int main(){
    int matriz[N][N], soma, maior;
    float media=0;
    srand(time(NULL));
    for(int i=0; i<N; i++){
        soma=0;
        for(int j=0; j<N; j++){
            matriz[i][j]=rand()%11;
            soma+=matriz[i][j];
            printf("%2d  ",matriz[i][j]);
        }
        media+=matriz[i][i];
        printf("= %d\n",soma);
    }
    printf("---------------------\n");
    maior=matriz[0][0];
    for(int i=0; i<N; i++){   
        soma=0; 
        for(int j=0; j<N; j++){
            soma+=matriz[j][i];
            maior = matriz[i][j]>maior?matriz[i][j]:maior;
        }
        printf("%2d  ",soma);
    }
    printf("Média da diagonal principal: %g\n",media/N);    
    printf("maior valor da matriz: %d\n",maior);
    printf("Os valores da diagonal secundária\n");
    for(int i=0; i<N; i++)
        printf("%2d  ",matriz[N-1-i][i]);
    printf("\n");
}