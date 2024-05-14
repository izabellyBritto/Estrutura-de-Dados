#include <stdio.h>
#include <stdlib.h>

//protótipo
long fatorial(short num);

int main(){
    short num=4;
    system("clear");
    printf("Fatorial de %hd é: %ld\n\n",num, fatorial(num));
}

long fatorial(short num){
    if(num == 0)
        return 1;
    else
        return num * fatorial(num-1);
}