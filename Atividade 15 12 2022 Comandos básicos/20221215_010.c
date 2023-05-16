#include <stdio.h>

int main(){
    float altura;
    printf("digite a sua altura: ");
    scanf("%f", & altura);
    float peso_ideal = (72.7 * altura) - 58;
    printf("seu peso ideal e: %.2f", peso_ideal);
    return 0;
}
