#include <stdio.h>

int main(){
    int num, *pnum, **pnum2;
    num = 100;
    pnum = &num;
    *pnum = 200;
    pnum2 = &num;
    pnum2 = &pnum; //mesma coisa
    printf("num: %d\n", num);
    printf("*pnum: %d\n", *pnum);
}