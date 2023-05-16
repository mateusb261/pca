#include <stdio.h>

int main(){

    int num;
    int num_pares = 0;
    int num_impares = 0;


    printf("digite um numero positivo: ");
    scanf(" %f", & num);

    while(num<=1000){


        while(num<=0){
            printf("erro! digite apenas numeros positivos: ");
            scanf(" %f", & num);
        }

        (num  % 2 == 0)? (num_pares = (num_pares) + (num)) : (num_pares+=0);
        (num % 2 != 0)? ((num_impares) = (num_impares) + (num)) : ((num_impares)+=0);

        printf("digite um numero positivo: ");
        scanf(" %f", & num);
    }
    printf("a soma dos numeros pares e: %f\n", num_pares);
    printf("a soma dos numeros impares e: %f", num_impares);
    return 0;
}