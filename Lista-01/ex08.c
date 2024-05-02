#include <stdio.h>

#define PI 3.14159

int main() {
    float raio, area;

    
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("A área do círculo é: %.2f\n", area);

    return 0;
}
