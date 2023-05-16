#include <stdio.h>

int main(){
    float farenheit;
    printf("digite a temperatura em graus Farenheit: ");
    scanf("%f", & farenheit);
    float celsius = (5 * (farenheit - 32) / 9);
    printf("a temperatura em graus Celsius e: %.2f", celsius);
    return 0;
}
