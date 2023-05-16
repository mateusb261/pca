#include <stdio.h>

int main(){
    int contador;
    int soma = 0;
    int temp = 0;

    for (contador=0; contador<50; contador++){
        printf("digite um numero: ");
        scanf("%d", & temp);

        if ((temp % 2 != 0) && temp > 100 && temp < 200){
            soma+=temp;}}
    printf("%d", soma);
    return 0;}
