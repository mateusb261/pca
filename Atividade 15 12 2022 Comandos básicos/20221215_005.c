#include <stdio.h>

int main(){
    float lado;
    printf("digite o lado do quadrado: ");
    scanf("%f", & lado);
    float area = lado * lado;
    float dobro_da_area = 2 * area;
    printf("o dobro da area do quadrado e: %.2f", dobro_da_area);
    return 0;
}
