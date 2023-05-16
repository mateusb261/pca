#include <stdio.h>

int main(){
    const float pi = 3.1415;
    float raio;
    printf("digite o valor do raio: ");
    scanf("%f", & raio);
    float area = pi * raio * raio;
    printf("a area do circulo e: %.2f", area);
    return 0;
}
