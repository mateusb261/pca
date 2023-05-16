#include <stdio.h>
/* Ler o valor de uma conta e calcular a porcentagem do
garçom */
int main(){
    float conta;
    printf("Digite e o valor da conta: ");
    scanf("%f", & conta);
    float porcentagem = conta * 10/100;
    printf("O valor da porcentagem e: %.2f", porcentagem);
    return 0;
}
