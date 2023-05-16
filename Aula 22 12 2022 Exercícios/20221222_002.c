#include <stdio.h>

int main(){
    int contador;
    float num;
    float num_maior;
    float num_menor;

    for(contador = 1; contador <= 3; contador++){

        printf("digite um numero: ");
        scanf("%f", & num);

        if(contador == 1){
            num_maior = num;
            num_menor = num;
        }
        num_maior = num > num_maior ? num : num_maior;
        num_menor = num < num_menor ? num : num_menor;
    }

    printf("o numero maior e: %.2f \n", num_maior);
    printf("o numero menor e: %.2f \n", num_menor);
    return 0;
}
