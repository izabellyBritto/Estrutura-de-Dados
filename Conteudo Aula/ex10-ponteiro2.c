#include <stdio.h>

void ponteiroParaPonteiro(int **pa, int *pb);
int main(){
    int num, *pnum, **pnum2, *pa=NULL;
    num = 100;
    pnum = &num;
    pnum2 = &pnum;
    ponteiroParaPonteiro(&pa, &num);
    printf("num: %d\n", num);
    printf("*pnum: %d\n", *pnum);
}

void ponteiroParaPonteiro(int **pa, int *pb){
    *pa = pb;
}