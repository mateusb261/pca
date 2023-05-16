#include <stdio.h>
#include <math.h>

int main(){
    float e = 0.1;
    float y;
    printf("digite um numero positivo para calcular a sua raiz quadrada: ");
    scanf(" %f", & y);

    while(y <= 0){
        printf("erro! digite apenas numeros positivos: ");
        scanf(" %f", & y);
    }

    float x = y / 2;
    float x_anterior = 0;
    float diferenca = x - x_anterior;

    while(diferenca >= 0.1){

        x_anterior = x;
        x = x_anterior - (((x_anterior * x_anterior) - y) / (2 * x_anterior));
        diferenca = x - x_anterior;

    }
    float x_sqrt = sqrt(y);
    printf("o resultado pelo metodo de aproximacoes sucessivas de Newton-Raphson e: %f \n", x);
    printf("o resultado pela funcao sqrt() e: %f", x_sqrt);

    return 0;
}
