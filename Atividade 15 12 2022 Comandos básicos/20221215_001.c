#include <stdio.h>

int main(){

    int numero_1;
    printf("escreva um numero: ");
    scanf("%i", & numero_1);
    int numero_2;
    printf("escreva outro numero: ");
    scanf("%i", & numero_2);
    int soma = numero_1 + numero_2;
    printf("a soma dos dois numeros e: %i", soma);
    return 0;
}
