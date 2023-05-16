#include <stdio.h>

int main(){
    int num_1, num_2;
    float num_3;
    printf("digite um numero inteiro: ");
    scanf("%d", & num_1);
    printf("digite outro numero inteiro: ");
    scanf("%d", & num_2);
    printf("digite um numero real: ");
    scanf("%f", & num_3);
    float triplo_do_primeiro_mais_terceiro = ((3 * num_1) + num_3);
    printf("a soma do triplo do primeiro numero com o terceiro numero e: %.2f \n", triplo_do_primeiro_mais_terceiro);
    float terceiro_ao_cubo = num_3*num_3*num_3;
    printf("o terceiro numero elevado ao cubo e: %.2f", terceiro_ao_cubo);
    return 0;
}
