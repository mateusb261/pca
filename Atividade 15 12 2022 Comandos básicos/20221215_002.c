#include <stdio.h>

int main(){
    float nota_1;
    printf("digite a nota do primeiro bimestre: ");
    scanf("%f", & nota_1);
    float nota_2;
    printf("digite a nota do segundo bimestre: ");
    scanf("%f", & nota_2);
    float nota_3;
    printf("digite a nota do terceiro bimestre: ");
    scanf("%f", & nota_3);
    float nota_4;
    printf("digite a nota do quarto bimestre: ");
    scanf("%f", & nota_4);
    float media = (nota_1 + nota_2 + nota_3 + nota_4)/4;
    printf("a media das notas e: %.1f", media);
    return 0;
}
