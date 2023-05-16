#include <stdio.h>
/* Ler base e altura de um triângulo. Calcular e escrever a área (area=base*altura/2)*/
int main(){
    float base;
    float altura;
    float area;
    printf("Qual e a base do triangulo?: ");
    scanf("%f", & base);
    printf("Qual e a altura do triangulo?: ");
    scanf("%f", & altura);
    area = base * altura/2;
    printf("A area do triangulo e: %.2f", area);
    return 0;
}
