#include <stdio.h>

int main(){
    float celsius;
    printf("digite a temperatura em graus Celsius: ");
    scanf("%f", & celsius);
    float farenheit = (9 * celsius + 160) / 5;
    printf("a temperatura em graus Farenheit e: %.2f", farenheit);
    return 0;
}
