/* função para qualificar a temperatura:
se a temperatura for menor do que 20oC, então está frio
se a temperatura estiver entre 20oC e 30oC, então está agradável
se a temperatura for maior do que 30oC, então está quente*/
#include <stdio.h>

int main(){
    float temperatura;
    printf("Digite a temperatura: ");
    scanf("%f",&temperatura);
    if(temperatura<20)
        printf("Frio\n");
    else if(temperatura>30)
        printf("Jales\n");
    else
        printf("Agradável\n");
}